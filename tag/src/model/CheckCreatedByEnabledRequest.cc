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

#include <alibabacloud/tag/model/CheckCreatedByEnabledRequest.h>

using AlibabaCloud::Tag::Model::CheckCreatedByEnabledRequest;

CheckCreatedByEnabledRequest::CheckCreatedByEnabledRequest()
    : RpcServiceRequest("tag", "2018-08-28", "CheckCreatedByEnabled") {
  setMethod(HttpRequest::Method::Post);
}

CheckCreatedByEnabledRequest::~CheckCreatedByEnabledRequest() {}

std::string CheckCreatedByEnabledRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckCreatedByEnabledRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string CheckCreatedByEnabledRequest::getRegionId() const {
  return regionId_;
}

void CheckCreatedByEnabledRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CheckCreatedByEnabledRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckCreatedByEnabledRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckCreatedByEnabledRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckCreatedByEnabledRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckCreatedByEnabledRequest::getOwnerId() const {
  return ownerId_;
}

void CheckCreatedByEnabledRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

