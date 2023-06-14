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

#include <alibabacloud/ga/model/UpdateDomainRequest.h>

using AlibabaCloud::Ga::Model::UpdateDomainRequest;

UpdateDomainRequest::UpdateDomainRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateDomain") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDomainRequest::~UpdateDomainRequest() {}

std::string UpdateDomainRequest::getTargetDomain() const {
  return targetDomain_;
}

void UpdateDomainRequest::setTargetDomain(const std::string &targetDomain) {
  targetDomain_ = targetDomain;
  setParameter(std::string("TargetDomain"), targetDomain);
}

std::string UpdateDomainRequest::getRegionId() const {
  return regionId_;
}

void UpdateDomainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateDomainRequest::getDomain() const {
  return domain_;
}

void UpdateDomainRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

