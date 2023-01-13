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

#include <alibabacloud/cbn/model/DeregisterTransitRouterMulticastGroupMembersRequest.h>

using AlibabaCloud::Cbn::Model::DeregisterTransitRouterMulticastGroupMembersRequest;

DeregisterTransitRouterMulticastGroupMembersRequest::DeregisterTransitRouterMulticastGroupMembersRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeregisterTransitRouterMulticastGroupMembers") {
  setMethod(HttpRequest::Method::Post);
}

DeregisterTransitRouterMulticastGroupMembersRequest::~DeregisterTransitRouterMulticastGroupMembersRequest() {}

long DeregisterTransitRouterMulticastGroupMembersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeregisterTransitRouterMulticastGroupMembersRequest::getClientToken() const {
  return clientToken_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DeregisterTransitRouterMulticastGroupMembersRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
}

std::string DeregisterTransitRouterMulticastGroupMembersRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

std::vector<std::string> DeregisterTransitRouterMulticastGroupMembersRequest::getConnectPeerIds() const {
  return connectPeerIds_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setConnectPeerIds(const std::vector<std::string> &connectPeerIds) {
  connectPeerIds_ = connectPeerIds;
}

std::string DeregisterTransitRouterMulticastGroupMembersRequest::getGroupIpAddress() const {
  return groupIpAddress_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setGroupIpAddress(const std::string &groupIpAddress) {
  groupIpAddress_ = groupIpAddress;
  setParameter(std::string("GroupIpAddress"), groupIpAddress);
}

bool DeregisterTransitRouterMulticastGroupMembersRequest::getDryRun() const {
  return dryRun_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeregisterTransitRouterMulticastGroupMembersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeregisterTransitRouterMulticastGroupMembersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> DeregisterTransitRouterMulticastGroupMembersRequest::getPeerTransitRouterMulticastDomains() const {
  return peerTransitRouterMulticastDomains_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setPeerTransitRouterMulticastDomains(const std::vector<std::string> &peerTransitRouterMulticastDomains) {
  peerTransitRouterMulticastDomains_ = peerTransitRouterMulticastDomains;
}

long DeregisterTransitRouterMulticastGroupMembersRequest::getOwnerId() const {
  return ownerId_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeregisterTransitRouterMulticastGroupMembersRequest::getVersion() const {
  return version_;
}

void DeregisterTransitRouterMulticastGroupMembersRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

