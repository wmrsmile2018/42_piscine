#!/bin/sh
cd "$(git rev-parse --show-toplevel)"
git log --pretty=format:%H -5
echo ""
