function quicksort(arr, low, high) {
    if (low < high) {
        let pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
        return arr;
    }
}
function partition(arr, low, high) {
    let i = low - 1;
    let pi = arr[high];
    for (let j = low; j < high; j++) {
        if (arr[j] < pi) {
            i++;
            swap(i, j, arr);
        }
    }
    swap(i + 1, high, arr)
    return i + 1
}

function swap(i, j, arr) {
    let t = arr[i]
    arr[i] = arr[j]
    arr[j] = t
}

console.log(quicksort([2, 3, 1, 5, 3, 6], 0, 5))
