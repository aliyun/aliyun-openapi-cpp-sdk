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

#include <alibabacloud/ga/model/CreateDomainRequest.h>

using AlibabaCloud::Ga::Model::CreateDomainRequest;

CreateDomainRequest::CreateDomainRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateDomain") {
  setMethod(HttpRequest::Method::Post);
}

CreateDomainRequest::~CreateDomainRequest() {}

std::vector<std::string> CreateDomainRequest::getAcceleratorIds() const {
  return acceleratorIds_;
}

void CreateDomainRequest::setAcceleratorIds(const std::vector<std::string> &acceleratorIds) {
  acceleratorIds_ = acceleratorIds;
}

std::string CreateDomainRequest::getRegionId() const {
  return regionId_;
}

void CreateDomainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDomainRequest::getDomain() const {
  return domain_;
}

void CreateDomainRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

