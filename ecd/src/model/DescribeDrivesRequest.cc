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

#include <alibabacloud/ecd/model/DescribeDrivesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDrivesRequest;

DescribeDrivesRequest::DescribeDrivesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDrives") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrivesRequest::~DescribeDrivesRequest() {}

std::string DescribeDrivesRequest::getUserId() const {
  return userId_;
}

void DescribeDrivesRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string DescribeDrivesRequest::getResourceType() const {
  return resourceType_;
}

void DescribeDrivesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<std::string> DescribeDrivesRequest::getDomainIds() const {
  return domainIds_;
}

void DescribeDrivesRequest::setDomainIds(const std::vector<std::string> &domainIds) {
  domainIds_ = domainIds;
}

std::string DescribeDrivesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDrivesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

