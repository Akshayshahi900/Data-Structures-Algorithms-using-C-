#include <stdio.h>
#include <stdlib.h>

// Define structure for polynomial term
struct Node {
    int coef, exp;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coef, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a term at the end of the list
void insertTerm(struct Node** poly, int coef, int exp) {
    struct Node* newNode = createNode(coef, exp);
    if (*poly == NULL) {
        *poly = newNode;
        return;
    }
    
    struct Node* temp = *poly;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* temp;

    while (poly1 != NULL || poly2 != NULL) {
        int coef, exp;

        if (poly1 == NULL) {
            coef = poly2->coef;
            exp = poly2->exp;
            poly2 = poly2->next;
        } else if (poly2 == NULL) {
            coef = poly1->coef;
            exp = poly1->exp;
            poly1 = poly1->next;
        } else if (poly1->exp > poly2->exp) {
            coef = poly1->coef;
            exp = poly1->exp;
            poly1 = poly1->next;
        } else if (poly1->exp < poly2->exp) {
            coef = poly2->coef;
            exp = poly2->exp;
            poly2 = poly2->next;
        } else {  // Exponents are equal, add coefficients
            coef = poly1->coef + poly2->coef;
            exp = poly1->exp;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        if (coef != 0)  // Avoid inserting terms with 0 coefficient
            insertTerm(&result, coef, exp);
    }

    return result;
}

// Function to print a polynomial
void printPolynomial(struct Node* poly) {
    while (poly != NULL) {
        printf("%d*x^%d", poly->coef, poly->exp);
        if (poly->next != NULL)
            printf(" + ");
        poly = poly->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result;

    // Creating first polynomial: 3x^3 + 5x^2 + 6
    insertTerm(&poly1, 3, 3);
    insertTerm(&poly1, 5, 2);
    insertTerm(&poly1, 6, 0);

    // Creating second polynomial: 4x^3 + 2x^1 + 3
    insertTerm(&poly2, 4, 3);
    insertTerm(&poly2, 2, 1);
    insertTerm(&poly2, 3, 0);

    // Display input polynomials
    printf("Polynomial 1: ");
    printPolynomial(poly1);
    printf("Polynomial 2: ");
    printPolynomial(poly2);

    // Add polynomials
    result = addPolynomials(poly1, poly2);

    // Display result
    printf("Sum: ");
    printPolynomial(result);

    return 0;
}
