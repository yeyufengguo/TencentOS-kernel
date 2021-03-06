/* SPDX-License-Identifier: GPL-2.0 */
#ifdef CONFIG_CGROUP_CPUACCT

extern void cpuacct_charge(struct task_struct *tsk, u64 cputime);
extern void cpuacct_account_field(struct task_struct *tsk, int index, u64 val);
extern void bt_cpuacct_charge(struct task_struct *tsk, u64 cputime);
#else

static inline void cpuacct_charge(struct task_struct *tsk, u64 cputime)
{
}

static inline void bt_cpuacct_charge(struct task_struct *tsk, u64 cputime)
{
}

static inline void
cpuacct_account_field(struct task_struct *tsk, int index, u64 val)
{
}

#endif
