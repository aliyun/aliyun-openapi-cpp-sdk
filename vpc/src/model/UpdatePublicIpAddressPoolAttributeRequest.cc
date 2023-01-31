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

#include <alibabacloud/vpc/model/UpdatePublicIpAddressPoolAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdatePublicIpAddressPoolAttributeRequest;

UpdatePublicIpAddressPoolAttributeRequest::UpdatePublicIpAddressPoolAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdatePublicIpAddressPoolAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePublicIpAddressPoolAttributeRequest::~UpdatePublicIpAddressPoolAttributeRequest() {}

std::string UpdatePublicIpAddressPoolAttributeRequest::getPublicIpAddressPoolId() const {
  return publicIpAddressPoolId_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setPublicIpAddressPoolId(const std::string &publicIpAddressPoolId) {
  publicIpAddressPoolId_ = publicIpAddressPoolId;
  setParameter(std::string("PublicIpAddressPoolId"), publicIpAddressPoolId);
}

long UpdatePublicIpAddressPoolAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdatePublicIpAddressPoolAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdatePublicIpAddressPoolAttributeRequest::getDescription() const {
  return description_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdatePublicIpAddressPoolAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdatePublicIpAddressPoolAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdatePublicIpAddressPoolAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdatePublicIpAddressPoolAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdatePublicIpAddressPoolAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdatePublicIpAddressPoolAttributeRequest::getName() const {
  return name_;
}

void UpdatePublicIpAddressPoolAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

