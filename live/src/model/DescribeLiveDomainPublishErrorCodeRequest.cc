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

#include <alibabacloud/live/model/DescribeLiveDomainPublishErrorCodeRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainPublishErrorCodeRequest;

DescribeLiveDomainPublishErrorCodeRequest::DescribeLiveDomainPublishErrorCodeRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainPublishErrorCode") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainPublishErrorCodeRequest::~DescribeLiveDomainPublishErrorCodeRequest() {}

std::string DescribeLiveDomainPublishErrorCodeRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainPublishErrorCodeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainPublishErrorCodeRequest::getAppName() const {
  return appName_;
}

void DescribeLiveDomainPublishErrorCodeRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveDomainPublishErrorCodeRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainPublishErrorCodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainPublishErrorCodeRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainPublishErrorCodeRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainPublishErrorCodeRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainPublishErrorCodeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainPublishErrorCodeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainPublishErrorCodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

