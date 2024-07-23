# C Grep

This program is a simple copy of [Gnu Grep](https://en.wikipedia.org/wiki/Grep).
I am creating this to have a concrete project to learn some core C functionality.

## Usage

```bash
./main [-n] <pattern>
```

## Features

Implemented:

- Basic grep on exact string matches
- Line numbers (available via `-n` flag)

To do:

- Regex
- More flags (implement using `getopt` or `argp` library)
- Unit testing
- Makefile
- (Probably in the scope of another project) Indexing a la [Google Code Search](https://swtch.com/~rsc/regexp/regexp4.html)

