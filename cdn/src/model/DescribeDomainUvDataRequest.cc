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

#include <alibabacloud/cdn/model/DescribeDomainUvDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainUvDataRequest;

DescribeDomainUvDataRequest::DescribeDomainUvDataRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainUvData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainUvDataRequest::~DescribeDomainUvDataRequest() {}

std::string DescribeDomainUvDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainUvDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainUvDataRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDomainUvDataRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDomainUvDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainUvDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainUvDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainUvDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainUvDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainUvDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

