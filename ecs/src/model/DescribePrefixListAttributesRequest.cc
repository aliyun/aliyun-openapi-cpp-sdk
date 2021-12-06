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

#include <alibabacloud/ecs/model/DescribePrefixListAttributesRequest.h>

using AlibabaCloud::Ecs::Model::DescribePrefixListAttributesRequest;

DescribePrefixListAttributesRequest::DescribePrefixListAttributesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePrefixListAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribePrefixListAttributesRequest::~DescribePrefixListAttributesRequest() {}

long DescribePrefixListAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePrefixListAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePrefixListAttributesRequest::getRegionId() const {
  return regionId_;
}

void DescribePrefixListAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePrefixListAttributesRequest::getPrefixListId() const {
  return prefixListId_;
}

void DescribePrefixListAttributesRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string DescribePrefixListAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePrefixListAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePrefixListAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePrefixListAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePrefixListAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePrefixListAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

