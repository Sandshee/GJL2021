using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class BetweenLoopData
{
    public static int[] doorsOpened = new int[10];
    public static int gunsPickedUp = 0;

    public static int GetDoorsOpened(int i)
    {
        if(i < 0)
        {
            return 0;
        }
        if (i < doorsOpened.Length)
        {
            return doorsOpened[i];
        } else
        {
            return 0;
        }
    }

    public static void OpenDoor(int i)
    {
        if(i < 0)
        {
            return;
        }
        if (i < doorsOpened.Length)
        {
            doorsOpened[i]++;
        }
    }

    public static int GetGunsPickedUp()
    {
        Debug.Log("I have picked up the gun " + gunsPickedUp + " times.");
        return gunsPickedUp;
    }

    public static void PickUpGun()
    {
        gunsPickedUp++;
    }
}
