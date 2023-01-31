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

#include <alibabacloud/vpc/model/DownloadVpnConnectionConfigRequest.h>

using AlibabaCloud::Vpc::Model::DownloadVpnConnectionConfigRequest;

DownloadVpnConnectionConfigRequest::DownloadVpnConnectionConfigRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DownloadVpnConnectionConfig") {
  setMethod(HttpRequest::Method::Post);
}

DownloadVpnConnectionConfigRequest::~DownloadVpnConnectionConfigRequest() {}

long DownloadVpnConnectionConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DownloadVpnConnectionConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DownloadVpnConnectionConfigRequest::getRegionId() const {
  return regionId_;
}

void DownloadVpnConnectionConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DownloadVpnConnectionConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DownloadVpnConnectionConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DownloadVpnConnectionConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DownloadVpnConnectionConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DownloadVpnConnectionConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DownloadVpnConnectionConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DownloadVpnConnectionConfigRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void DownloadVpnConnectionConfigRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

