# Utilities

CivicTheme component library provides a wide range of SASS utilities out of the
box.

## Spacing

Spacing (such as margin or padding) can be applied using the `civictheme-space()`
function.

Spaces are defined in `$civictheme-spacing` list variable.

```scss
div {
  padding: civictheme-space(1) civictheme-space(2);
  margin-bottom: civictheme-space(2);
}
```

## Element sizing

All element sizes should be defined in `px` but converted to `rem` through
the `rem()` function.

This provides a clear size conversion from the designs, while allowing for
whole-page scalability. The only exception where `px` should be used is on
single-pixel borders.

```scss
div {
  max-width: rem(450px);
}
```
