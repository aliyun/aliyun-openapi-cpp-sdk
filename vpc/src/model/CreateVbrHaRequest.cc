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

#include <alibabacloud/vpc/model/CreateVbrHaRequest.h>

using AlibabaCloud::Vpc::Model::CreateVbrHaRequest;

CreateVbrHaRequest::CreateVbrHaRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVbrHa") {
  setMethod(HttpRequest::Method::Post);
}

CreateVbrHaRequest::~CreateVbrHaRequest() {}

long CreateVbrHaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVbrHaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVbrHaRequest::getClientToken() const {
  return clientToken_;
}

void CreateVbrHaRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVbrHaRequest::getDescription() const {
  return description_;
}

void CreateVbrHaRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateVbrHaRequest::getVbrId() const {
  return vbrId_;
}

void CreateVbrHaRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string CreateVbrHaRequest::getRegionId() const {
  return regionId_;
}

void CreateVbrHaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateVbrHaRequest::getDryRun() const {
  return dryRun_;
}

void CreateVbrHaRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVbrHaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVbrHaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVbrHaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVbrHaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateVbrHaRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVbrHaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVbrHaRequest::getPeerVbrId() const {
  return peerVbrId_;
}

void CreateVbrHaRequest::setPeerVbrId(const std::string &peerVbrId) {
  peerVbrId_ = peerVbrId;
  setParameter(std::string("PeerVbrId"), peerVbrId);
}

std::string CreateVbrHaRequest::getName() const {
  return name_;
}

void CreateVbrHaRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

