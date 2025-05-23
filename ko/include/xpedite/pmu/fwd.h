///////////////////////////////////////////////////////////////////////////////////////////////
//
// Forward declartion for header inclusion and logging logic
//
// Author: Manikandan Dhamodharan, Morgan Stanley
//
///////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <linux/kernel.h>
#include <linux/sched.h>

#define XPEDITE_LOG(FORMAT_STR, ...) printk(KERN_INFO FORMAT_STR, __VA_ARGS__)
