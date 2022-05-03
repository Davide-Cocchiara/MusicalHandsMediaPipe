// Fill out your copyright notice in the Description page of Project Settings.

UENUM(BlueprintType)
enum class LandmarkEnum : uint8 {
    WRIST = 0               UMETA(DisplayName = "WRIST"),
    THUMB_CMC = 1           UMETA(DisplayName = "THUMB_CMC"),
    THUMB_MCP = 2           UMETA(DisplayName = "THUMB_MCP"),
    THUMB_IP = 3            UMETA(DisplayName = "THUMB_IP"),
    THUMB_TIP = 4           UMETA(DisplayName = "THUMB_TIP"),
    INDEX_FINGER_MCP = 5    UMETA(DisplayName = "INDEX_FINGER_MCP"),
    INDEX_FINGER_PIP = 6    UMETA(DisplayName = "INDEX_FINGER_PIP"),
    INDEX_FINGER_DIP = 7    UMETA(DisplayName = "INDEX_FINGER_DIP"),
    INDEX_FINGER_TIP = 8    UMETA(DisplayName = "INDEX_FINGER_TIP"),
    MIDDLE_FINGER_MCP = 9   UMETA(DisplayName = "MIDDLE_FINGER_MCP"),
    MIDDLE_FINGER_PIP = 10  UMETA(DisplayName = "MIDDLE_FINGER_PIP"),
    MIDDLE_FINGER_DIP = 11  UMETA(DisplayName = "MIDDLE_FINGER_DIP"),
    MIDDLE_FINGER_TIP = 12  UMETA(DisplayName = "MIDDLE_FINGER_TIP"),
    RING_FINGER_MCP = 13    UMETA(DisplayName = "RING_FINGER_MCP"),
    RING_FINGER_PIP = 14    UMETA(DisplayName = "RING_FINGER_PIP"),
    RING_FINGER_DIP = 15    UMETA(DisplayName = "RING_FINGER_DIP"),
    RING_FINGER_TIP = 16    UMETA(DisplayName = "RING_FINGER_TIP"),
    PINKY_MCP = 17          UMETA(DisplayName = "PINKY_MCP"),
    PINKY_PIP = 18          UMETA(DisplayName = "PINKY_PIP"),
    PINKY_DIP = 19          UMETA(DisplayName = "PINKY_DIP"),
    PINKY_TIP = 20          UMETA(DisplayName = "PINKY_TIP")
};
