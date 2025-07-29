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

#include <alibabacloud/live/model/DescribeToutiaoLivePlayRequest.h>

using AlibabaCloud::Live::Model::DescribeToutiaoLivePlayRequest;

DescribeToutiaoLivePlayRequest::DescribeToutiaoLivePlayRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeToutiaoLivePlay") {
  setMethod(HttpRequest::Method::Post);
}

DescribeToutiaoLivePlayRequest::~DescribeToutiaoLivePlayRequest() {}

std::string DescribeToutiaoLivePlayRequest::getStartTime() const {
  return startTime_;
}

void DescribeToutiaoLivePlayRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeToutiaoLivePlayRequest::getRegionId() const {
  return regionId_;
}

void DescribeToutiaoLivePlayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeToutiaoLivePlayRequest::getStream() const {
  return stream_;
}

void DescribeToutiaoLivePlayRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string DescribeToutiaoLivePlayRequest::getApp() const {
  return app_;
}

void DescribeToutiaoLivePlayRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

std::string DescribeToutiaoLivePlayRequest::getEndTime() const {
  return endTime_;
}

void DescribeToutiaoLivePlayRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeToutiaoLivePlayRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeToutiaoLivePlayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeToutiaoLivePlayRequest::getDomain() const {
  return domain_;
}

void DescribeToutiaoLivePlayRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

