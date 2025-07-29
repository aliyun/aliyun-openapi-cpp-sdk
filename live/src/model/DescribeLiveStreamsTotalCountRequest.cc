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

#include <alibabacloud/live/model/DescribeLiveStreamsTotalCountRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamsTotalCountRequest;

DescribeLiveStreamsTotalCountRequest::DescribeLiveStreamsTotalCountRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamsTotalCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamsTotalCountRequest::~DescribeLiveStreamsTotalCountRequest() {}

std::string DescribeLiveStreamsTotalCountRequest::getTyp() const {
  return typ_;
}

void DescribeLiveStreamsTotalCountRequest::setTyp(const std::string &typ) {
  typ_ = typ;
  setParameter(std::string("Typ"), typ);
}

std::string DescribeLiveStreamsTotalCountRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveStreamsTotalCountRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveStreamsTotalCountRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamsTotalCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveStreamsTotalCountRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveStreamsTotalCountRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveStreamsTotalCountRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveStreamsTotalCountRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveStreamsTotalCountRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamsTotalCountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

