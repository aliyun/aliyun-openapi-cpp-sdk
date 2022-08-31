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

#include <alibabacloud/cdn/model/DescribeDomainFileSizeProportionDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainFileSizeProportionDataRequest;

DescribeDomainFileSizeProportionDataRequest::DescribeDomainFileSizeProportionDataRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainFileSizeProportionData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainFileSizeProportionDataRequest::~DescribeDomainFileSizeProportionDataRequest() {}

std::string DescribeDomainFileSizeProportionDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainFileSizeProportionDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainFileSizeProportionDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainFileSizeProportionDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDomainFileSizeProportionDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainFileSizeProportionDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeDomainFileSizeProportionDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainFileSizeProportionDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainFileSizeProportionDataRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDomainFileSizeProportionDataRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

