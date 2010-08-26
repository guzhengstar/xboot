#ifndef __RECT_H__
#define __RECT_H__

#include <configs.h>
#include <default.h>

/*
 * the structure of 2d point
 */
struct point
{
	x_s32 x;
	x_s32 y;
};

/*
 * the structure of 2d rect
 */
struct rect {
	x_s32	left;
	x_s32	top;
	x_s32 	right;
	x_s32	bottom;
};


x_bool rect_set(struct rect * rect, x_s32 left, x_s32 top, x_s32 right, x_s32 bottom);
x_bool rect_set_empty(struct rect * rect);
x_bool rect_copy(struct rect * dst, struct rect * src);
x_bool rect_is_empty(struct rect * rect);
x_bool rect_is_equal(struct rect * rect1, struct rect * rect2);
x_bool rect_intersect(struct rect * rect, struct rect * src1, struct rect * src2);
x_bool rect_union(struct rect * rect, struct rect * src1, struct rect * src2);
x_bool rect_subtract(struct rect * rect, struct rect * src1, struct rect * src2);
x_bool rect_offset(struct rect * rect, x_s32 dx, x_s32 dy);
x_bool rect_inflate(struct rect * rect, x_s32 dx, x_s32 dy);
x_bool rect_have_point(struct rect * rect, x_s32 x, x_s32 y);

#endif /* __RECT_H__ */
