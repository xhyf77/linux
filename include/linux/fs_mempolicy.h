
#ifndef _LINUX_FS_MEMPOLICY_H
#define _LINUX_FS_MEMPOLICY_H 1

struct shared_policy;
struct vm_area_struct;
struct mempolicy;
void mpol_shared_policy_init(struct shared_policy *sp, struct mempolicy *mpol);
extern struct mempolicy *mpol_shared_policy_lookup(struct shared_policy *sp,
						unsigned long idx);
extern int mpol_set_shared_policy(struct shared_policy *sp,
			struct vm_area_struct *vma, struct mempolicy *pol);
extern void mpol_free_shared_policy(struct shared_policy *sp);
extern void mpol_shared_policy_init(struct shared_policy *sp, struct mempolicy *mpol);

#endif