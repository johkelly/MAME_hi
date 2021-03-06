/*********************************************************************

    pc_video.h

    Refactoring of code common to PC video implementations

*********************************************************************/

#ifndef PC_VIDEO_H
#define PC_VIDEO_H

typedef void (*pc_video_update_proc)(bitmap_t *bitmap);

void pc_video_start(running_machine *machine,
	pc_video_update_proc (*choosevideomode)(running_machine *machine, int *width, int *height),
	size_t vramsize);

VIDEO_UPDATE( pc_video );

#endif /* PC_VIDEO_H */
