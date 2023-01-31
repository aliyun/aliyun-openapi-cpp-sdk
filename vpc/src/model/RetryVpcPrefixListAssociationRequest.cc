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

#include <alibabacloud/vpc/model/RetryVpcPrefixListAssociationRequest.h>

using AlibabaCloud::Vpc::Model::RetryVpcPrefixListAssociationRequest;

RetryVpcPrefixListAssociationRequest::RetryVpcPrefixListAssociationRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "RetryVpcPrefixListAssociation") {
  setMethod(HttpRequest::Method::Post);
}

RetryVpcPrefixListAssociationRequest::~RetryVpcPrefixListAssociationRequest() {}

long RetryVpcPrefixListAssociationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RetryVpcPrefixListAssociationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RetryVpcPrefixListAssociationRequest::getClientToken() const {
  return clientToken_;
}

void RetryVpcPrefixListAssociationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RetryVpcPrefixListAssociationRequest::getPrefixListId() const {
  return prefixListId_;
}

void RetryVpcPrefixListAssociationRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string RetryVpcPrefixListAssociationRequest::getRegionId() const {
  return regionId_;
}

void RetryVpcPrefixListAssociationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RetryVpcPrefixListAssociationRequest::getResourceId() const {
  return resourceId_;
}

void RetryVpcPrefixListAssociationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

bool RetryVpcPrefixListAssociationRequest::getDryRun() const {
  return dryRun_;
}

void RetryVpcPrefixListAssociationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RetryVpcPrefixListAssociationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RetryVpcPrefixListAssociationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RetryVpcPrefixListAssociationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RetryVpcPrefixListAssociationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RetryVpcPrefixListAssociationRequest::getOwnerId() const {
  return ownerId_;
}

void RetryVpcPrefixListAssociationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RetryVpcPrefixListAssociationRequest::getResourceType() const {
  return resourceType_;
}

void RetryVpcPrefixListAssociationRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

