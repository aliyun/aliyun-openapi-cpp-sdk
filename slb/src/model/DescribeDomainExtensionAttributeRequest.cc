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

#include <alibabacloud/slb/model/DescribeDomainExtensionAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeDomainExtensionAttributeRequest;

DescribeDomainExtensionAttributeRequest::DescribeDomainExtensionAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeDomainExtensionAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainExtensionAttributeRequest::~DescribeDomainExtensionAttributeRequest() {}

std::string DescribeDomainExtensionAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeDomainExtensionAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeDomainExtensionAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDomainExtensionAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDomainExtensionAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeDomainExtensionAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDomainExtensionAttributeRequest::getDomainExtensionId() const {
  return domainExtensionId_;
}

void DescribeDomainExtensionAttributeRequest::setDomainExtensionId(const std::string &domainExtensionId) {
  domainExtensionId_ = domainExtensionId;
  setParameter(std::string("DomainExtensionId"), domainExtensionId);
}

std::string DescribeDomainExtensionAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDomainExtensionAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDomainExtensionAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDomainExtensionAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDomainExtensionAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainExtensionAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainExtensionAttributeRequest::getTags() const {
  return tags_;
}

void DescribeDomainExtensionAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

