#include <stdio.h>
#include <string.h>   // for subject names

int main()
{
    char subject[4][50];     // names of 4 subjects one by one
    float marks[4];          // obtained marks
    float totalMarks ;       // maximum marks possible
    float failMarks ;        // minimum marks required to pass
    float sum = 0 ;          // total obtained
    int i ;

    // input subject names and marks
    for ( i = 0 ; i < 4 ; i++ )
    {
        printf("Enter name of subject %d : ", i+1 );
        scanf("%s", subject[i]);

        printf("Enter marks obtained in %s : ", subject[i] );
        scanf("%f", &marks[i]);

        sum = sum + marks[i] ;   // add to total
    }

    // now ask for max marks and fail marks
    printf("\nEnter maximum marks possible in exam : ");
    scanf("%f", &totalMarks);

    printf("Enter minimum marks required to pass (fail marks) : ");
    scanf("%f", &failMarks);

    // check fail condition
    for ( i = 0 ; i < 4 ; i++ )
    {
        if ( marks[i] < failMarks )
        {
            printf("\nYou FAILED in %s (marks = %.2f)\n", subject[i] , marks[i] );
            return 0 ;   // end program immediately
        }
    }

    // if passed all subjects
    float percentage = ( sum / ( 4 * totalMarks ) ) * 100 ;

    printf("\nTotal Marks Obtained : %.2f out of %.2f\n", sum , 4 * totalMarks );
    printf("Overall Percentage : %.2f %%\n", percentage );

    // friendly feedback
    if ( percentage >= 90 )
        printf("Excellent !! 🎉\n");
    else if ( percentage >= 75 )
        printf("Very Good !!\n");
    else if ( percentage >= 50 )
        printf("Good , but can do better.\n");
    else
        printf("Needs improvement , don’t give up !!\n");

    return 0 ;
}