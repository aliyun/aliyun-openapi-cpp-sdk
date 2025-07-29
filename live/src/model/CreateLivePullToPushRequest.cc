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

#include <alibabacloud/live/model/CreateLivePullToPushRequest.h>

using AlibabaCloud::Live::Model::CreateLivePullToPushRequest;

CreateLivePullToPushRequest::CreateLivePullToPushRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLivePullToPush") {
  setMethod(HttpRequest::Method::Post);
}

CreateLivePullToPushRequest::~CreateLivePullToPushRequest() {}

int CreateLivePullToPushRequest::getFileIndex() const {
  return fileIndex_;
}

void CreateLivePullToPushRequest::setFileIndex(int fileIndex) {
  fileIndex_ = fileIndex;
  setParameter(std::string("FileIndex"), std::to_string(fileIndex));
}

int CreateLivePullToPushRequest::getRetryCount() const {
  return retryCount_;
}

void CreateLivePullToPushRequest::setRetryCount(int retryCount) {
  retryCount_ = retryCount;
  setParameter(std::string("RetryCount"), std::to_string(retryCount));
}

std::string CreateLivePullToPushRequest::getTaskName() const {
  return taskName_;
}

void CreateLivePullToPushRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateLivePullToPushRequest::getStartTime() const {
  return startTime_;
}

void CreateLivePullToPushRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int CreateLivePullToPushRequest::getRepeatNumber() const {
  return repeatNumber_;
}

void CreateLivePullToPushRequest::setRepeatNumber(int repeatNumber) {
  repeatNumber_ = repeatNumber;
  setParameter(std::string("RepeatNumber"), std::to_string(repeatNumber));
}

std::string CreateLivePullToPushRequest::getRegionId() const {
  return regionId_;
}

void CreateLivePullToPushRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLivePullToPushRequest::getSourceProtocol() const {
  return sourceProtocol_;
}

void CreateLivePullToPushRequest::setSourceProtocol(const std::string &sourceProtocol) {
  sourceProtocol_ = sourceProtocol;
  setParameter(std::string("SourceProtocol"), sourceProtocol);
}

std::string CreateLivePullToPushRequest::getSourceType() const {
  return sourceType_;
}

void CreateLivePullToPushRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

int CreateLivePullToPushRequest::getOffset() const {
  return offset_;
}

void CreateLivePullToPushRequest::setOffset(int offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string CreateLivePullToPushRequest::getDstUrl() const {
  return dstUrl_;
}

void CreateLivePullToPushRequest::setDstUrl(const std::string &dstUrl) {
  dstUrl_ = dstUrl;
  setParameter(std::string("DstUrl"), dstUrl);
}

std::string CreateLivePullToPushRequest::getEndTime() const {
  return endTime_;
}

void CreateLivePullToPushRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long CreateLivePullToPushRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLivePullToPushRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreateLivePullToPushRequest::std::string> CreateLivePullToPushRequest::getSourceUrls() const {
  return sourceUrls_;
}

void CreateLivePullToPushRequest::setSourceUrls(const std::vector<CreateLivePullToPushRequest::std::string> &sourceUrls) {
  sourceUrls_ = sourceUrls;
  for(int dep1 = 0; dep1 != sourceUrls.size(); dep1++) {
    setParameter(std::string("SourceUrls") + "." + std::to_string(dep1 + 1), sourceUrls[dep1]);
  }
}

int CreateLivePullToPushRequest::getRetryInterval() const {
  return retryInterval_;
}

void CreateLivePullToPushRequest::setRetryInterval(int retryInterval) {
  retryInterval_ = retryInterval;
  setParameter(std::string("RetryInterval"), std::to_string(retryInterval));
}

std::string CreateLivePullToPushRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void CreateLivePullToPushRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string CreateLivePullToPushRequest::getRegion() const {
  return region_;
}

void CreateLivePullToPushRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

