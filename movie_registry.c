#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structure representing a single movie entry
struct Movie {
    char title[50];
    int year;
    float rating;
    char review[200];
};

// Registers a new movie and doubles array capacity if needed
void registerMovie(struct Movie **catalog, int *count, int *capacity) {
    // Expand memory dynamically when the catalog reaches full capacity
    if (*count == *capacity) {
        *capacity *= 2;
        struct Movie *temp = realloc(*catalog, (*capacity) * sizeof(struct Movie));

        if (temp == NULL) {
            printf("Error expanding memory!\n");
            *capacity /= 2;
            return;
        }
        *catalog = temp;
        printf("[Notice] Capacity expanded to %d movies!\n", *capacity);
    }

    printf("Enter the movie title: ");
    fgets((*catalog)[*count].title, sizeof((*catalog)[*count].title), stdin);
    (*catalog)[*count].title[strcspn((*catalog)[*count].title, "\n")] = '\0';

    // Validate release year input
    (*catalog)[*count].year = 0;
    do {
        printf("Enter the release year (1888 - 2030): ");

        if (scanf("%d", &(*catalog)[*count].year) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        } else {
            getchar();
        }

        if ((*catalog)[*count].year < 1888 || (*catalog)[*count].year > 2030) {
            printf("Invalid year! Try again.\n");
        }

    } while ((*catalog)[*count].year < 1888 || (*catalog)[*count].year > 2030);

    // Validate rating input
    (*catalog)[*count].rating = -1;
    do {
        printf("Enter the movie rating (0.0 to 10.0): ");
        if (scanf("%f", &(*catalog)[*count].rating) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        } else {
            getchar();
        }

        if ((*catalog)[*count].rating < 0.0 || (*catalog)[*count].rating > 10.0) {
            printf("Invalid rating!\n");
        }
    } while ((*catalog)[*count].rating < 0.0 || (*catalog)[*count].rating > 10.0);

    printf("Write your review of the movie: ");
    fgets((*catalog)[*count].review, sizeof((*catalog)[*count].review), stdin);
    (*catalog)[*count].review[strcspn((*catalog)[*count].review, "\n")] = '\0';

    (*count)++;
    printf("Movie registered successfully!\n");
}

// Displays all registered movies in the catalog
void listMovies(struct Movie *catalog, int count) {
    if (count > 0) {
        printf("\n--- REGISTERED MOVIES LIST ---\n");
        for (int i = 0; i < count; i++) {
            printf("%d. %s -- Year: %d -- Rating: %.1f -- Review: %s\n",
                   i + 1, catalog[i].title, catalog[i].year, catalog[i].rating, catalog[i].review);
        }
    } else {
        printf("No movies registered!\n");
    }
}

// Searches for movies matching a substring in the title
void searchMovie(struct Movie *catalog, int count) {
    if (count == 0) {
        printf("No movies registered to search!\n");
        return;
    }

    char query[50];
    int found = 0;

    printf("Enter the movie title: ");
    fgets(query, sizeof(query), stdin);
    query[strcspn(query, "\n")] = '\0';

    printf("\n--- SEARCH RESULTS ---\n");
    for (int i = 0; i < count; i++) {
        if (strstr(catalog[i].title, query) != NULL) {
            printf("%d. %s -- Year: %d -- Rating: %.1f -- Review: %s\n",
                   i + 1, catalog[i].title, catalog[i].year, catalog[i].rating, catalog[i].review);
            found = 1;
        }
    }

    if (found < 1) {
        printf("No movie found matching '%s'.\n", query);
    }
}

// Updates the fields of an existing movie selected by index
void editMovie(struct Movie *catalog, int count) {
    if (count == 0) {
        printf("No movies registered to edit!\n");
        return;
    }

    listMovies(catalog, count);
    int number;
    printf("\nEnter the number of the movie you want to edit (1 to %d): ", count);
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return;
    } else {
        getchar();
    }

    if (number < 1 || number > count) {
        printf("Invalid number!\n");
        return;
    }

    int idx = number - 1;
    printf("Editing '%s':\n", catalog[idx].title);

    printf("New title: ");
    fgets(catalog[idx].title, sizeof(catalog[idx].title), stdin);
    catalog[idx].title[strcspn(catalog[idx].title, "\n")] = '\0';

    while (1) {
        printf("New release year (1888 - 2030): ");

        if (scanf("%d", &catalog[idx].year) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        }

        getchar();

        if (catalog[idx].year >= 1888 && catalog[idx].year <= 2030) {
            break;
        }

        printf("Invalid year!\n");
    }

    while (1) {
        printf("New rating (0.0 to 10.0): ");

        if (scanf("%f", &catalog[idx].rating) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        }

        getchar();

        if (catalog[idx].rating >= 0.0 && catalog[idx].rating <= 10.0) {
            break;
        }

        printf("Invalid rating!\n");
    }

    printf("New review: ");
    fgets(catalog[idx].review, sizeof(catalog[idx].review), stdin);
    catalog[idx].review[strcspn(catalog[idx].review, "\n")] = '\0';

    printf("Movie updated successfully!\n");
}

// Removes a movie and shifts remaining elements left
void removeMovie(struct Movie *catalog, int *count) {
    if (*count == 0) {
        printf("No movies registered to remove!\n");
        return;
    }

    listMovies(catalog, *count);
    int number;
    printf("Enter the number of the movie you want to remove (1 to %d): ", *count);
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return;
    } else {
        getchar();
    }

    if (number < 1 || number > *count) {
        printf("Invalid number!\n");
        return;
    }

    // Shift elements to overwrite the removed entry
    for (int i = number - 1; i < *count - 1; i++) {
        catalog[i] = catalog[i + 1];
    }

    (*count)--;
    printf("Movie removed successfully!\n");
}

int main() {
    struct Movie *catalog = NULL;
    int count = 0;
    int option = -1, capacity;

    printf("========================================\n");
    printf("      MOVIE REGISTRATION SYSTEM\n");
    printf("========================================\n");

    // Set initial capacity for dynamic memory allocation
    printf("Enter the initial number of movies to register: ");
    if (scanf("%d", &capacity) != 1) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        capacity = 2;
    } else {
        getchar();
    }

    if (capacity <= 0) {
        capacity = 2;
    }

    catalog = malloc(capacity * sizeof(struct Movie));

    if (catalog == NULL) {
        printf("Error allocating memory!\n");
        return 1;
    }
    printf("Memory allocated successfully for %d movies!\n", capacity);

    // Main interactive menu loop
    do {
        printf("========================================\n");
        printf("      MOVIE REGISTRATION SYSTEM\n");
        printf("========================================\n");

        printf("1. Register new movie\n");
        printf("2. List all movies\n");
        printf("3. Search movie\n");
        printf("4. Edit movie\n");
        printf("5. Remove a movie\n");
        printf("0. Exit\n");
        if (scanf("%d", &option) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        } else {
            getchar();
        }

        switch (option) {
            case 1:
                registerMovie(&catalog, &count, &capacity);
                break;

            case 2:
                listMovies(catalog, count);
                break;

            case 3:
                searchMovie(catalog, count);
                break;

            case 4:
                editMovie(catalog, count);
                break;

            case 5:
                removeMovie(catalog, &count);
                break;

            case 0:
                printf("Exiting\n");
                break;

            default:
                printf("Invalid option!\n");
        }
    } while (option != 0);

    // Release allocated memory before terminating
    free(catalog);
    return 0;
}
