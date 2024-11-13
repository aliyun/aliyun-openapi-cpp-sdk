/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/push/model/MassPushRequest.h>

using AlibabaCloud::Push::Model::MassPushRequest;

MassPushRequest::MassPushRequest()
    : RpcServiceRequest("push", "2016-08-01", "MassPush") {
  setMethod(HttpRequest::Method::Post);
}

MassPushRequest::~MassPushRequest() {}

std::vector<MassPushRequest::PushTask> MassPushRequest::getPushTask() const {
  return pushTask_;
}

void MassPushRequest::setPushTask(const std::vector<MassPushRequest::PushTask> &pushTask) {
  pushTask_ = pushTask;
  for(int dep1 = 0; dep1 != pushTask.size(); dep1++) {
  auto pushTaskObj = pushTask.at(dep1);
  std::string pushTaskObjStr = std::string("PushTask") + "." + std::to_string(dep1 + 1);
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationBarType", std::to_string(pushTaskObj.androidNotificationBarType));
    setBodyParameter(pushTaskObjStr + ".AndroidMessageOppoNotifyLevel", std::to_string(pushTaskObj.androidMessageOppoNotifyLevel));
    setBodyParameter(pushTaskObjStr + ".Body", pushTaskObj.body);
    setBodyParameter(pushTaskObjStr + ".DeviceType", pushTaskObj.deviceType);
    setBodyParameter(pushTaskObjStr + ".PushTime", pushTaskObj.pushTime);
    setBodyParameter(pushTaskObjStr + ".SendSpeed", std::to_string(pushTaskObj.sendSpeed));
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationHuaweiChannel", pushTaskObj.androidNotificationHuaweiChannel);
    setBodyParameter(pushTaskObjStr + ".AndroidPopupActivity", pushTaskObj.androidPopupActivity);
    setBodyParameter(pushTaskObjStr + ".HarmonyNotifyId", std::to_string(pushTaskObj.harmonyNotifyId));
    setBodyParameter(pushTaskObjStr + ".HarmonyRenderStyle", pushTaskObj.harmonyRenderStyle);
    setBodyParameter(pushTaskObjStr + ".iOSRemindBody", pushTaskObj.iOSRemindBody);
    setBodyParameter(pushTaskObjStr + ".Trim", pushTaskObj.trim ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".AndroidMessageVivoCategory", pushTaskObj.androidMessageVivoCategory);
    setBodyParameter(pushTaskObjStr + ".AndroidNotifyType", pushTaskObj.androidNotifyType);
    setBodyParameter(pushTaskObjStr + ".AndroidPopupTitle", pushTaskObj.androidPopupTitle);
    setBodyParameter(pushTaskObjStr + ".AndroidMessageHuaweiCategory", pushTaskObj.androidMessageHuaweiCategory);
    setBodyParameter(pushTaskObjStr + ".iOSMusic", pushTaskObj.iOSMusic);
    setBodyParameter(pushTaskObjStr + ".iOSApnsEnv", pushTaskObj.iOSApnsEnv);
    setBodyParameter(pushTaskObjStr + ".iOSMutableContent", pushTaskObj.iOSMutableContent ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationBarPriority", std::to_string(pushTaskObj.androidNotificationBarPriority));
    setBodyParameter(pushTaskObjStr + ".ExpireTime", pushTaskObj.expireTime);
    setBodyParameter(pushTaskObjStr + ".AndroidImageUrl", pushTaskObj.androidImageUrl);
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationThreadId", pushTaskObj.androidNotificationThreadId);
    setBodyParameter(pushTaskObjStr + ".AndroidHonorTargetUserType", std::to_string(pushTaskObj.androidHonorTargetUserType));
    setBodyParameter(pushTaskObjStr + ".HarmonyRemindBody", pushTaskObj.harmonyRemindBody);
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationVivoChannel", pushTaskObj.androidNotificationVivoChannel);
    setBodyParameter(pushTaskObjStr + ".AndroidVivoReceiptId", pushTaskObj.androidVivoReceiptId);
    setBodyParameter(pushTaskObjStr + ".iOSNotificationCategory", pushTaskObj.iOSNotificationCategory);
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationXiaomiChannel", pushTaskObj.androidNotificationXiaomiChannel);
    setBodyParameter(pushTaskObjStr + ".HarmonyAction", pushTaskObj.harmonyAction);
    setBodyParameter(pushTaskObjStr + ".StoreOffline", pushTaskObj.storeOffline ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".iOSRelevanceScore", std::to_string(pushTaskObj.iOSRelevanceScore));
    setBodyParameter(pushTaskObjStr + ".AndroidVivoPushMode", std::to_string(pushTaskObj.androidVivoPushMode));
    setBodyParameter(pushTaskObjStr + ".AndroidInboxBody", pushTaskObj.androidInboxBody);
    setBodyParameter(pushTaskObjStr + ".JobKey", pushTaskObj.jobKey);
    setBodyParameter(pushTaskObjStr + ".HarmonyReceiptId", pushTaskObj.harmonyReceiptId);
    setBodyParameter(pushTaskObjStr + ".AndroidOpenUrl", pushTaskObj.androidOpenUrl);
    setBodyParameter(pushTaskObjStr + ".AndroidBadgeSetNum", std::to_string(pushTaskObj.androidBadgeSetNum));
    setBodyParameter(pushTaskObjStr + ".AndroidXiaoMiNotifyBody", pushTaskObj.androidXiaoMiNotifyBody);
    setBodyParameter(pushTaskObjStr + ".iOSSubtitle", pushTaskObj.iOSSubtitle);
    setBodyParameter(pushTaskObjStr + ".AndroidXiaomiBigPictureUrl", pushTaskObj.androidXiaomiBigPictureUrl);
    setBodyParameter(pushTaskObjStr + ".HarmonyCategory", pushTaskObj.harmonyCategory);
    setBodyParameter(pushTaskObjStr + ".iOSRemind", pushTaskObj.iOSRemind ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".iOSNotificationThreadId", pushTaskObj.iOSNotificationThreadId);
    setBodyParameter(pushTaskObjStr + ".AndroidHuaweiTargetUserType", std::to_string(pushTaskObj.androidHuaweiTargetUserType));
    setBodyParameter(pushTaskObjStr + ".HarmonyRemind", pushTaskObj.harmonyRemind ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".AndroidMusic", pushTaskObj.androidMusic);
    setBodyParameter(pushTaskObjStr + ".HarmonyExtensionPush", pushTaskObj.harmonyExtensionPush ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".iOSNotificationCollapseId", pushTaskObj.iOSNotificationCollapseId);
    setBodyParameter(pushTaskObjStr + ".AndroidMessageHuaweiUrgency", pushTaskObj.androidMessageHuaweiUrgency);
    setBodyParameter(pushTaskObjStr + ".PushType", pushTaskObj.pushType);
    setBodyParameter(pushTaskObjStr + ".iOSInterruptionLevel", pushTaskObj.iOSInterruptionLevel);
    setBodyParameter(pushTaskObjStr + ".HarmonyExtensionExtraData", pushTaskObj.harmonyExtensionExtraData);
    setBodyParameter(pushTaskObjStr + ".AndroidExtParameters", pushTaskObj.androidExtParameters);
    setBodyParameter(pushTaskObjStr + ".HarmonyImageUrl", pushTaskObj.harmonyImageUrl);
    setBodyParameter(pushTaskObjStr + ".iOSBadge", std::to_string(pushTaskObj.iOSBadge));
    setBodyParameter(pushTaskObjStr + ".AndroidBigBody", pushTaskObj.androidBigBody);
    setBodyParameter(pushTaskObjStr + ".iOSBadgeAutoIncrement", pushTaskObj.iOSBadgeAutoIncrement ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".AndroidOpenType", pushTaskObj.androidOpenType);
    setBodyParameter(pushTaskObjStr + ".HarmonyRemindTitle", pushTaskObj.harmonyRemindTitle);
    setBodyParameter(pushTaskObjStr + ".Title", pushTaskObj.title);
    setBodyParameter(pushTaskObjStr + ".AndroidBadgeClass", pushTaskObj.androidBadgeClass);
    setBodyParameter(pushTaskObjStr + ".HarmonyBadgeAddNum", std::to_string(pushTaskObj.harmonyBadgeAddNum));
    setBodyParameter(pushTaskObjStr + ".HarmonyTestMessage", pushTaskObj.harmonyTestMessage ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".AndroidRenderStyle", pushTaskObj.androidRenderStyle);
    setBodyParameter(pushTaskObjStr + ".iOSExtParameters", pushTaskObj.iOSExtParameters);
    setBodyParameter(pushTaskObjStr + ".AndroidBadgeAddNum", std::to_string(pushTaskObj.androidBadgeAddNum));
    setBodyParameter(pushTaskObjStr + ".AndroidHuaweiReceiptId", pushTaskObj.androidHuaweiReceiptId);
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationHonorChannel", pushTaskObj.androidNotificationHonorChannel);
    setBodyParameter(pushTaskObjStr + ".AndroidXiaomiImageUrl", pushTaskObj.androidXiaomiImageUrl);
    setBodyParameter(pushTaskObjStr + ".AndroidTargetUserType", std::to_string(pushTaskObj.androidTargetUserType));
    setBodyParameter(pushTaskObjStr + ".HarmonyUri", pushTaskObj.harmonyUri);
    setBodyParameter(pushTaskObjStr + ".AndroidPopupBody", pushTaskObj.androidPopupBody);
    setBodyParameter(pushTaskObjStr + ".HarmonyExtParameters", pushTaskObj.harmonyExtParameters);
    setBodyParameter(pushTaskObjStr + ".AndroidBigPictureUrl", pushTaskObj.androidBigPictureUrl);
    setBodyParameter(pushTaskObjStr + ".iOSSilentNotification", pushTaskObj.iOSSilentNotification ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationGroup", pushTaskObj.androidNotificationGroup);
    setBodyParameter(pushTaskObjStr + ".SendChannels", pushTaskObj.sendChannels);
    setBodyParameter(pushTaskObjStr + ".HarmonyActionType", pushTaskObj.harmonyActionType);
    setBodyParameter(pushTaskObjStr + ".Target", pushTaskObj.target);
    setBodyParameter(pushTaskObjStr + ".HarmonyNotificationSlotType", pushTaskObj.harmonyNotificationSlotType);
    setBodyParameter(pushTaskObjStr + ".AndroidBigTitle", pushTaskObj.androidBigTitle);
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationChannel", pushTaskObj.androidNotificationChannel);
    setBodyParameter(pushTaskObjStr + ".AndroidRemind", pushTaskObj.androidRemind ? "true" : "false");
    setBodyParameter(pushTaskObjStr + ".HarmonyInboxContent", pushTaskObj.harmonyInboxContent);
    setBodyParameter(pushTaskObjStr + ".AndroidActivity", pushTaskObj.androidActivity);
    setBodyParameter(pushTaskObjStr + ".AndroidMessageOppoCategory", pushTaskObj.androidMessageOppoCategory);
    setBodyParameter(pushTaskObjStr + ".AndroidNotificationNotifyId", std::to_string(pushTaskObj.androidNotificationNotifyId));
    setBodyParameter(pushTaskObjStr + ".TargetValue", pushTaskObj.targetValue);
    setBodyParameter(pushTaskObjStr + ".HarmonyBadgeSetNum", std::to_string(pushTaskObj.harmonyBadgeSetNum));
    setBodyParameter(pushTaskObjStr + ".AndroidXiaoMiNotifyTitle", pushTaskObj.androidXiaoMiNotifyTitle);
    setBodyParameter(pushTaskObjStr + ".AndroidXiaoMiActivity", pushTaskObj.androidXiaoMiActivity);
  }
}

long MassPushRequest::getAppKey() const {
  return appKey_;
}

void MassPushRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

