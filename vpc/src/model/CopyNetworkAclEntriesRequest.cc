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

#include <alibabacloud/vpc/model/CopyNetworkAclEntriesRequest.h>

using AlibabaCloud::Vpc::Model::CopyNetworkAclEntriesRequest;

CopyNetworkAclEntriesRequest::CopyNetworkAclEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CopyNetworkAclEntries") {
  setMethod(HttpRequest::Method::Post);
}

CopyNetworkAclEntriesRequest::~CopyNetworkAclEntriesRequest() {}

long CopyNetworkAclEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CopyNetworkAclEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CopyNetworkAclEntriesRequest::getClientToken() const {
  return clientToken_;
}

void CopyNetworkAclEntriesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CopyNetworkAclEntriesRequest::getRegionId() const {
  return regionId_;
}

void CopyNetworkAclEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CopyNetworkAclEntriesRequest::getNetworkAclId() const {
  return networkAclId_;
}

void CopyNetworkAclEntriesRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

std::string CopyNetworkAclEntriesRequest::getSourceNetworkAclId() const {
  return sourceNetworkAclId_;
}

void CopyNetworkAclEntriesRequest::setSourceNetworkAclId(const std::string &sourceNetworkAclId) {
  sourceNetworkAclId_ = sourceNetworkAclId;
  setParameter(std::string("SourceNetworkAclId"), sourceNetworkAclId);
}

bool CopyNetworkAclEntriesRequest::getDryRun() const {
  return dryRun_;
}

void CopyNetworkAclEntriesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CopyNetworkAclEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CopyNetworkAclEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CopyNetworkAclEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CopyNetworkAclEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CopyNetworkAclEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void CopyNetworkAclEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

