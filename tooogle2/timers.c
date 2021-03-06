#ifndef __TIMERS__
#define __TIMERS__

      #define N_TIMERS   10
      #define _10ms      1
      #define _20ms      2
      #define _50ms      5
      #define _100ms     10
      #define _500ms     50
      #define _1s        100
      #define _2s        200

      int8 gTimers = N_TIMERS;
      int8 aTimer[N_TIMERS];
      
      void timers_init(void)
      {     
            
            setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256);
            enable_interrupts(INT_TIMER0);
            set_timer0(178);
            
      }
      
      void timers_set_time(int8 timer, int8 time)
      {
          aTimer[timer] = time;
      }
      
      int8 timers_get_time(int8 timer)
      {
         return aTimer[timer];
      }
      
      #int_timer0
      void timers_isr(void)
      {
        set_timer0(178);
        while(gTimers)
        {
          gTimers--;
          if(aTimer[gTimers]!= 0)
          {
             aTimer[gTimers]--;
          }
        }
        gTimers=N_TIMERS;
      }
#endif      

