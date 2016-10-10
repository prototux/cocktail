/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#353535", /* black   */
  [1] = "#e13232", /* red     */
  [2] = "#96cd20", /* green   */
  [3] = "#ddda25", /* yellow  */
  [4] = "#1e80cc", /* blue    */
  [5] = "#d33577", /* magenta */
  [6] = "#3ec1c5", /* cyan    */
  [7] = "#dfdfdf", /* white   */

  /* 8 bright colors */
  [8]  = "#535e69", /* black   */
  [9]  = "#ff3838", /* red     */
  [10] = "#afeb23", /* green   */
  [11] = "#efed51", /* yellow  */
  [12] = "#20a0e0", /* blue    */
  [13] = "#e73a85, /* magenta */
  [14] = "#44d7d9", /* cyan    */
  [15] = "#f5f5f5", /* white   */

  /* special colors */
  [256] = "#101010", /* background */
  [257] = "#dfdfdf", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
