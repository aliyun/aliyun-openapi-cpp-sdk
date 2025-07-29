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

#include <alibabacloud/live/model/UpdateLivePullStreamInfoConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLivePullStreamInfoConfigRequest;

UpdateLivePullStreamInfoConfigRequest::UpdateLivePullStreamInfoConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLivePullStreamInfoConfig") {
  setMethod(HttpRequest::Method::Get);
}

UpdateLivePullStreamInfoConfigRequest::~UpdateLivePullStreamInfoConfigRequest() {}

std::string UpdateLivePullStreamInfoConfigRequest::getStartTime() const {
  return startTime_;
}

void UpdateLivePullStreamInfoConfigRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string UpdateLivePullStreamInfoConfigRequest::getAppName() const {
  return appName_;
}

void UpdateLivePullStreamInfoConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string UpdateLivePullStreamInfoConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateLivePullStreamInfoConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLivePullStreamInfoConfigRequest::getStreamName() const {
  return streamName_;
}

void UpdateLivePullStreamInfoConfigRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string UpdateLivePullStreamInfoConfigRequest::getPullAlways() const {
  return pullAlways_;
}

void UpdateLivePullStreamInfoConfigRequest::setPullAlways(const std::string &pullAlways) {
  pullAlways_ = pullAlways;
  setParameter(std::string("PullAlways"), pullAlways);
}

std::string UpdateLivePullStreamInfoConfigRequest::getDomainName() const {
  return domainName_;
}

void UpdateLivePullStreamInfoConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string UpdateLivePullStreamInfoConfigRequest::getEndTime() const {
  return endTime_;
}

void UpdateLivePullStreamInfoConfigRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long UpdateLivePullStreamInfoConfigRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLivePullStreamInfoConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateLivePullStreamInfoConfigRequest::getSourceUrl() const {
  return sourceUrl_;
}

void UpdateLivePullStreamInfoConfigRequest::setSourceUrl(const std::string &sourceUrl) {
  sourceUrl_ = sourceUrl;
  setParameter(std::string("SourceUrl"), sourceUrl);
}

