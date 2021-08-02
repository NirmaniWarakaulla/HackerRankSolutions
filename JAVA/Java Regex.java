class MyRegex {
    String acceptable = "(\\d{1,2}|[01]\\d{2}|2[0-4]\\d|25[0-5])";
    public String pattern = acceptable + "." + acceptable + "." + acceptable + "." + acceptable;
}

//try with java7
