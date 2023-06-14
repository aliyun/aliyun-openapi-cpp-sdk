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

#include <alibabacloud/ga/model/DeleteDomainAcceleratorRelationRequest.h>

using AlibabaCloud::Ga::Model::DeleteDomainAcceleratorRelationRequest;

DeleteDomainAcceleratorRelationRequest::DeleteDomainAcceleratorRelationRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteDomainAcceleratorRelation") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDomainAcceleratorRelationRequest::~DeleteDomainAcceleratorRelationRequest() {}

std::vector<std::string> DeleteDomainAcceleratorRelationRequest::getAcceleratorIds() const {
  return acceleratorIds_;
}

void DeleteDomainAcceleratorRelationRequest::setAcceleratorIds(const std::vector<std::string> &acceleratorIds) {
  acceleratorIds_ = acceleratorIds;
}

std::string DeleteDomainAcceleratorRelationRequest::getRegionId() const {
  return regionId_;
}

void DeleteDomainAcceleratorRelationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDomainAcceleratorRelationRequest::getDomain() const {
  return domain_;
}

void DeleteDomainAcceleratorRelationRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

