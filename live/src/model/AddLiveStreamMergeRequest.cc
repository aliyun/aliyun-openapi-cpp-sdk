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

#include <alibabacloud/live/model/AddLiveStreamMergeRequest.h>

using AlibabaCloud::Live::Model::AddLiveStreamMergeRequest;

AddLiveStreamMergeRequest::AddLiveStreamMergeRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveStreamMerge") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveStreamMergeRequest::~AddLiveStreamMergeRequest() {}

std::string AddLiveStreamMergeRequest::getInAppName2() const {
  return inAppName2_;
}

void AddLiveStreamMergeRequest::setInAppName2(const std::string &inAppName2) {
  inAppName2_ = inAppName2;
  setParameter(std::string("InAppName2"), inAppName2);
}

std::string AddLiveStreamMergeRequest::getInAppName1() const {
  return inAppName1_;
}

void AddLiveStreamMergeRequest::setInAppName1(const std::string &inAppName1) {
  inAppName1_ = inAppName1;
  setParameter(std::string("InAppName1"), inAppName1);
}

std::string AddLiveStreamMergeRequest::getStartTime() const {
  return startTime_;
}

void AddLiveStreamMergeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string AddLiveStreamMergeRequest::getProtocol() const {
  return protocol_;
}

void AddLiveStreamMergeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string AddLiveStreamMergeRequest::getAppName() const {
  return appName_;
}

void AddLiveStreamMergeRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string AddLiveStreamMergeRequest::getRegionId() const {
  return regionId_;
}

void AddLiveStreamMergeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddLiveStreamMergeRequest::getInStreamName2() const {
  return inStreamName2_;
}

void AddLiveStreamMergeRequest::setInStreamName2(const std::string &inStreamName2) {
  inStreamName2_ = inStreamName2;
  setParameter(std::string("InStreamName2"), inStreamName2);
}

std::string AddLiveStreamMergeRequest::getStreamName() const {
  return streamName_;
}

void AddLiveStreamMergeRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string AddLiveStreamMergeRequest::getInStreamName1() const {
  return inStreamName1_;
}

void AddLiveStreamMergeRequest::setInStreamName1(const std::string &inStreamName1) {
  inStreamName1_ = inStreamName1;
  setParameter(std::string("InStreamName1"), inStreamName1);
}

std::string AddLiveStreamMergeRequest::getDomainName() const {
  return domainName_;
}

void AddLiveStreamMergeRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string AddLiveStreamMergeRequest::getEndTime() const {
  return endTime_;
}

void AddLiveStreamMergeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long AddLiveStreamMergeRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveStreamMergeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

