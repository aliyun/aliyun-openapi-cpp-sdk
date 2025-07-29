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

#include <alibabacloud/live/model/DescribeDomainWithIntegrityRequest.h>

using AlibabaCloud::Live::Model::DescribeDomainWithIntegrityRequest;

DescribeDomainWithIntegrityRequest::DescribeDomainWithIntegrityRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeDomainWithIntegrity") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDomainWithIntegrityRequest::~DescribeDomainWithIntegrityRequest() {}

std::string DescribeDomainWithIntegrityRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainWithIntegrityRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

float DescribeDomainWithIntegrityRequest::getIntegrity() const {
  return integrity_;
}

void DescribeDomainWithIntegrityRequest::setIntegrity(float integrity) {
  integrity_ = integrity;
  setParameter(std::string("Integrity"), std::to_string(integrity));
}

std::string DescribeDomainWithIntegrityRequest::getRegionId() const {
  return regionId_;
}

void DescribeDomainWithIntegrityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDomainWithIntegrityRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainWithIntegrityRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainWithIntegrityRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainWithIntegrityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

