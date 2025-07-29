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

#include <alibabacloud/live/model/DescribeLiveDomainPvUvDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainPvUvDataRequest;

DescribeLiveDomainPvUvDataRequest::DescribeLiveDomainPvUvDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainPvUvData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainPvUvDataRequest::~DescribeLiveDomainPvUvDataRequest() {}

std::string DescribeLiveDomainPvUvDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainPvUvDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainPvUvDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainPvUvDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainPvUvDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainPvUvDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainPvUvDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainPvUvDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainPvUvDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainPvUvDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

