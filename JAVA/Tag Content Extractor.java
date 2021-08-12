String pattern ="\\<(.+)\\>([^\\<\\>]+)\\<\\/\\1\\>";

   int count = 0;

    Pattern p = Pattern.compile(pattern);
    Matcher m =  p.matcher(line);

    while(m.find())
    {
        System.out.println(m.group(2));
        count++;
    }
    if(count == 0){
        System.out.println("None");
    }

// tey with java7
