bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    } else {
        int arr1[256] = {0}; 
        int arr2[256] = {0};
        for (int i = 0; i < strlen(s); i++) {
            arr1[(int)s[i]]++;  
            arr2[(int)t[i]]++;  
        }
        for (int k = 0; k < 256; k++) {
            if (arr1[k] != arr2[k])
            {
                return false; 
            }
        }
        return true; 
    }
}
