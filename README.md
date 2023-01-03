# Hackerrank's 'Drawing Book' Project

## Problem
A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. They always turn pages one at a time. When they open the book, page 1 is always on the right side:

![Screenshot](./img/db1.png)

When they flip page 1, they see pages 2 and 3. Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book. If the book is n pages long, and a student wants to turn to page p, what is the minimum number of pages to turn? They can start at the beginning or the end of the book.

## My solution
### JavaScript

```
function main() {
    const n = parseInt(readLine());
    const p = parseInt(readLine());

    var front = Math.floor(p / 2);  
    var back = Math.floor((n - p) / 2);
        
    var result = Math.min(front, back);
    console.log(result);
}
```

## Errors and points after submitting the code

Unfortunately, 1 of the 27 case tests failed, but my final score was 9.60.

![Screenshot](./img/db2.jpeg)
![Screenshot](./img/db3.jpeg)


