#!/bin/bash

# Find and delete files without extensions recursively
find "$(pwd)" -type f ! -name "*.*" -exec rm {} \;

echo "Files without extension deleted successfully."
