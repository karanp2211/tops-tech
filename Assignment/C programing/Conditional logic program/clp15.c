//Write a C program to determine eligibility for admission to a professional course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include <stdio.h>
int main() {
    int marksPhy, marksChem, marksMaths, totalMarks, totalMathsPhy;
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &marksPhy);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &marksChem);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &marksMaths);
    totalMarks = marksPhy + marksChem + marksMaths;
    totalMathsPhy = marksPhy + marksMaths;
    
    printf("Total marks of Maths, Physics and Chemistry : %d\n", totalMarks);
    printf("Total marks of Maths and Physics : %d\n", totalMathsPhy);
    if ((marksMaths >= 65) && (marksPhy >= 55) && (marksChem >= 50) && 
        ((totalMarks >= 190) || (totalMathsPhy >= 140))) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
}

