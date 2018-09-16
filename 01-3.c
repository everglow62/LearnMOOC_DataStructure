Position BinarySearch(List L, ElementType x){
    
    int i = L->Last + 1;
    
    int mid = L->Last / 2;
    
    while(i){
        i--;
        if(x < L->Data[mid]){
            mid = mid / 2;
        }
        else if(x > L->Data[mid]){
            mid = (L->Last + mid) / 2;
        }
        else
            return mid;
    }
    
    return NotFound;
}

