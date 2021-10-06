int total_occurences(int arr[], int n, int key){
    int start=0, end=n-1;
    int start_occr = first_occurence(arr, n, key);
    int last_occr = last_occurence(arr, n, key);
    if(start_occr == -1)    return 0;
    return last_occr - start_occr +1;
}
