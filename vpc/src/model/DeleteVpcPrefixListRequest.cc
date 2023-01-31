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

#include <alibabacloud/vpc/model/DeleteVpcPrefixListRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVpcPrefixListRequest;

DeleteVpcPrefixListRequest::DeleteVpcPrefixListRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteVpcPrefixList") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVpcPrefixListRequest::~DeleteVpcPrefixListRequest() {}

long DeleteVpcPrefixListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVpcPrefixListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVpcPrefixListRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVpcPrefixListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVpcPrefixListRequest::getPrefixListId() const {
  return prefixListId_;
}

void DeleteVpcPrefixListRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string DeleteVpcPrefixListRequest::getRegionId() const {
  return regionId_;
}

void DeleteVpcPrefixListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteVpcPrefixListRequest::getDryRun() const {
  return dryRun_;
}

void DeleteVpcPrefixListRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteVpcPrefixListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVpcPrefixListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteVpcPrefixListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVpcPrefixListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteVpcPrefixListRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVpcPrefixListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

