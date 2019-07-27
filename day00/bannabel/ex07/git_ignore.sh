#!/bin/sh
cd "$(git rev-parse --show-toplevel)"
git check-ignore *
echo ""
