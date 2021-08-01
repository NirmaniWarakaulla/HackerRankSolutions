public static String getSmallestAndLargest(String s, int k) {
        String largest = s.substring(0,k);
        String smallest = s.substring(0,k);
        String sub;
        for (int i=0; i<s.length()-k+1; i++){
            sub = s.substring(i,k+i);
            if (sub.compareTo(largest)>0) {largest=sub;}
            else if (sub.compareTo(smallest)<0) {smallest=sub;}
        }
        return smallest + "\n" + largest;
    }
