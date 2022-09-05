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

#include <alibabacloud/cdn/model/DescribeCdnWafDomainRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnWafDomainRequest;

DescribeCdnWafDomainRequest::DescribeCdnWafDomainRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnWafDomain") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnWafDomainRequest::~DescribeCdnWafDomainRequest() {}

std::string DescribeCdnWafDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCdnWafDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCdnWafDomainRequest::getRegionId() const {
  return regionId_;
}

void DescribeCdnWafDomainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCdnWafDomainRequest::getDomainName() const {
  return domainName_;
}

void DescribeCdnWafDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeCdnWafDomainRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnWafDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

