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

#include <alibabacloud/live/model/UpdateRtcCloudRecordingRequest.h>

using AlibabaCloud::Live::Model::UpdateRtcCloudRecordingRequest;

UpdateRtcCloudRecordingRequest::UpdateRtcCloudRecordingRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateRtcCloudRecording") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRtcCloudRecordingRequest::~UpdateRtcCloudRecordingRequest() {}

std::string UpdateRtcCloudRecordingRequest::getTaskId() const {
  return taskId_;
}

void UpdateRtcCloudRecordingRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

UpdateRtcCloudRecordingRequest::SubscribeParams UpdateRtcCloudRecordingRequest::getSubscribeParams() const {
  return subscribeParams_;
}

void UpdateRtcCloudRecordingRequest::setSubscribeParams(const UpdateRtcCloudRecordingRequest::SubscribeParams &subscribeParams) {
  subscribeParams_ = subscribeParams;
  for(int dep1 = 0; dep1 != subscribeParams.subscribeUserIdList.size(); dep1++) {
    setParameter(std::string("SubscribeParams") + ".SubscribeUserIdList." + std::to_string(dep1 + 1) + ".StreamType", std::to_string(subscribeParams.subscribeUserIdList[dep1].streamType));
    setParameter(std::string("SubscribeParams") + ".SubscribeUserIdList." + std::to_string(dep1 + 1) + ".SourceType", std::to_string(subscribeParams.subscribeUserIdList[dep1].sourceType));
    setParameter(std::string("SubscribeParams") + ".SubscribeUserIdList." + std::to_string(dep1 + 1) + ".UserId", subscribeParams.subscribeUserIdList[dep1].userId);
  }
}

UpdateRtcCloudRecordingRequest::MixLayoutParams UpdateRtcCloudRecordingRequest::getMixLayoutParams() const {
  return mixLayoutParams_;
}

void UpdateRtcCloudRecordingRequest::setMixLayoutParams(const UpdateRtcCloudRecordingRequest::MixLayoutParams &mixLayoutParams) {
  mixLayoutParams_ = mixLayoutParams;
  for(int dep1 = 0; dep1 != mixLayoutParams.userPanes.size(); dep1++) {
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".ZOrder", std::to_string(mixLayoutParams.userPanes[dep1].zOrder));
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".Width", mixLayoutParams.userPanes[dep1].width);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".X", mixLayoutParams.userPanes[dep1].x);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".Y", mixLayoutParams.userPanes[dep1].y);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".SourceType", std::to_string(mixLayoutParams.userPanes[dep1].sourceType));
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".UserId", mixLayoutParams.userPanes[dep1].userId);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".Height", mixLayoutParams.userPanes[dep1].height);
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".SubBackground.RenderMode", std::to_string(mixLayoutParams.userPanes[dep1].subBackground.renderMode));
    setParameter(std::string("MixLayoutParams") + ".UserPanes." + std::to_string(dep1 + 1) + ".SubBackground.Url", mixLayoutParams.userPanes[dep1].subBackground.url);
  }
  setParameter(std::string("MixLayoutParams") + ".MixBackground.RenderMode", std::to_string(mixLayoutParams.mixBackground.renderMode));
  setParameter(std::string("MixLayoutParams") + ".MixBackground.Url", mixLayoutParams.mixBackground.url);
}

