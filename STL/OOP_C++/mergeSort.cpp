#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int start, int end)
{
    if (start == end)
    {
    }
    cout << start << end << endl;
    if (start < end)
    {
        int mid = (start + end) / 2;
        cout << "calling merge sort on left" << endl;
        mergeSort(arr, start, mid);
        cout << start << end << endl;
        cout << "Calling mergeSort on right" << endl;
        mergeSort(arr, mid + 1, end);
        cout << "calling merge " << endl;
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[6] = {6, 5, 4, 3, 2, 1};
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}