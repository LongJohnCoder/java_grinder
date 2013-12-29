/**
 *  Java Grinder
 *  Author: The Naken Crew
 *   Email: mike@mikekohn.net
 *     Web: http://www.naken.cc/
 * License: GPL
 *
 * Copyright 2013 by The Naken Crew
 *
 */

package cc.naken.java_grinder;

public class UART
{
  public UART(int port, int baud_rate)
  {
  }

  public void send(byte c)
  {
     System.out.println("Sent char " + c);
  }

  public byte read(byte c)
  {
    return 0;
  }

  public boolean isDataAvailable()
  {
    return false;
  }

  public boolean isSendReady()
  {
    return false;
  }
}

