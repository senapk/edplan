#!/bin/bash
./mdpp.py Readme.md

find . -name "*.md" -exec ./mdpp.py {} \;