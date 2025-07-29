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

#include <alibabacloud/live/model/UpdateLivePullToPushRequest.h>

using AlibabaCloud::Live::Model::UpdateLivePullToPushRequest;

UpdateLivePullToPushRequest::UpdateLivePullToPushRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLivePullToPush") {
  setMethod(HttpRequest::Method::Get);
}

UpdateLivePullToPushRequest::~UpdateLivePullToPushRequest() {}

int UpdateLivePullToPushRequest::getFileIndex() const {
  return fileIndex_;
}

void UpdateLivePullToPushRequest::setFileIndex(int fileIndex) {
  fileIndex_ = fileIndex;
  setParameter(std::string("FileIndex"), std::to_string(fileIndex));
}

std::string UpdateLivePullToPushRequest::getStartTime() const {
  return startTime_;
}

void UpdateLivePullToPushRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int UpdateLivePullToPushRequest::getRepeatNumber() const {
  return repeatNumber_;
}

void UpdateLivePullToPushRequest::setRepeatNumber(int repeatNumber) {
  repeatNumber_ = repeatNumber;
  setParameter(std::string("RepeatNumber"), std::to_string(repeatNumber));
}

std::string UpdateLivePullToPushRequest::getRegionId() const {
  return regionId_;
}

void UpdateLivePullToPushRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLivePullToPushRequest::getTaskId() const {
  return taskId_;
}

void UpdateLivePullToPushRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

int UpdateLivePullToPushRequest::getOffset() const {
  return offset_;
}

void UpdateLivePullToPushRequest::setOffset(int offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string UpdateLivePullToPushRequest::getEndTime() const {
  return endTime_;
}

void UpdateLivePullToPushRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long UpdateLivePullToPushRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLivePullToPushRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<UpdateLivePullToPushRequest::std::string> UpdateLivePullToPushRequest::getSourceUrls() const {
  return sourceUrls_;
}

void UpdateLivePullToPushRequest::setSourceUrls(const std::vector<UpdateLivePullToPushRequest::std::string> &sourceUrls) {
  sourceUrls_ = sourceUrls;
  for(int dep1 = 0; dep1 != sourceUrls.size(); dep1++) {
    setParameter(std::string("SourceUrls") + "." + std::to_string(dep1 + 1), sourceUrls[dep1]);
  }
}

std::string UpdateLivePullToPushRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void UpdateLivePullToPushRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string UpdateLivePullToPushRequest::getRegion() const {
  return region_;
}

void UpdateLivePullToPushRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

