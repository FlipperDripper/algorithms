function binarySearch(arr, value) {
    let low = 0;
    let high = arr.length;
    let mid
    while (low < high) {
        mid = Math.floor(((high - low) / 2) + low)
        if(arr[mid] == value) return mid
        if(arr[mid] > value) {
            high = mid
        }
        if(arr[mid] < value) {
            low = mid + 1
        }
    }
    return -1;
}

console.log(binarySearch([1,2,3,4,5], 3))