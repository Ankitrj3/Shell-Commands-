#!/bin/bash

echo "Enter a number:"
read num

case $num in
    1)
        echo "You entered one"
        ;;
    2)
        echo "You entered two"
        ;;
    3)
        echo "You entered three"
        ;;
    *)
        echo "You entered a number other than 1, 2, or 3"
        ;;
esac

