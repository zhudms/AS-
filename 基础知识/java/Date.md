Date
   public static long getDateBefore(int days) {
        Calendar calendar = Calendar.getInstance();
        calendar.add(Calendar.DATE, -days);
        return calendar.getTimeInMillis();

    }

生成的日期，并不是精准的减天数，只能大概相当