## Design and Implementation of JSON Parser

### what is json?

[JSON官网](http://json.org/json-en.html)

**JSON** (JavaScript Object Notation) is a lightweight data-interchange format. It is easy for humans to read and write. It is easy for machines to parse and generate. It is based on a subset of the JavaScript Programming Language Standard ECMA-262 3rd Edition - December 1999. JSON is a text format that is completely language independent but uses conventions that are familiar to programmers of the C-family of languages, including C, C++, C#, Java, JavaScript, Perl, Python, and many others. These properties make JSON an ideal data-interchange language.

JSON is built on two structures:

- A collection of name/value pairs. In various languages, this is realized as an *object*, record, struct, dictionary, hash table, keyed list, or associative array.
- An ordered list of values. In most languages, this is realized as an *array*, vector, list, or sequence.

These are universal data structures. Virtually all modern programming languages support them in one form or another. It makes sense that a data format that is interchangeable with programming languages also be based on these structures.

dataType:`object`,`array`,`string`,`number`,`true`,`false`,`null`

### Characteristic

- independence:do not rely on other library files
- cross platform:windows,linux,mac os
- high Performance:perfoemance is much higher than jsoncpp,nlohmann
- simple ans convenient to use:friendly interface,the core Parser only has only 200 lines of code
- ...

### Efficiency comparison

>- nlohmann
>- jsoncpp
>- rapidjson
>- theJson

### Interface Design

#### class Design

```c
```



