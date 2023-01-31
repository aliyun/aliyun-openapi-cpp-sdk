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

#include <alibabacloud/vpc/model/DeleteVpnAttachmentRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVpnAttachmentRequest;

DeleteVpnAttachmentRequest::DeleteVpnAttachmentRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteVpnAttachment") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVpnAttachmentRequest::~DeleteVpnAttachmentRequest() {}

long DeleteVpnAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVpnAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVpnAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVpnAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVpnAttachmentRequest::getRegionId() const {
  return regionId_;
}

void DeleteVpnAttachmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteVpnAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVpnAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteVpnAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVpnAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteVpnAttachmentRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void DeleteVpnAttachmentRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

