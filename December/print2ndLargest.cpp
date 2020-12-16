
int print2ndlargest(int input2[], int input1)
{
    int i, first, second;
 
    /* There should be atleast two elements */
    if (input1 < 2) {
        return -1;
    }
 
    // sort the array
    std::sort(input2, input2 + input1);
 
    // start from second last element
    // as the largest element is at last
    for (i = input1 - 2; i >= 0; i--) {
        // if the element is not
        // equal to largest element
        if (input2[i] != input2[input1 - 1]) {
            return input2[i];
        }
    }
 
    return -1;
}