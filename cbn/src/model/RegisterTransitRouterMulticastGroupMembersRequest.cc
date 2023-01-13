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

#include <alibabacloud/cbn/model/RegisterTransitRouterMulticastGroupMembersRequest.h>

using AlibabaCloud::Cbn::Model::RegisterTransitRouterMulticastGroupMembersRequest;

RegisterTransitRouterMulticastGroupMembersRequest::RegisterTransitRouterMulticastGroupMembersRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "RegisterTransitRouterMulticastGroupMembers") {
  setMethod(HttpRequest::Method::Post);
}

RegisterTransitRouterMulticastGroupMembersRequest::~RegisterTransitRouterMulticastGroupMembersRequest() {}

long RegisterTransitRouterMulticastGroupMembersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RegisterTransitRouterMulticastGroupMembersRequest::getClientToken() const {
  return clientToken_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> RegisterTransitRouterMulticastGroupMembersRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
}

std::string RegisterTransitRouterMulticastGroupMembersRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

std::vector<std::string> RegisterTransitRouterMulticastGroupMembersRequest::getConnectPeerIds() const {
  return connectPeerIds_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setConnectPeerIds(const std::vector<std::string> &connectPeerIds) {
  connectPeerIds_ = connectPeerIds;
}

std::string RegisterTransitRouterMulticastGroupMembersRequest::getGroupIpAddress() const {
  return groupIpAddress_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setGroupIpAddress(const std::string &groupIpAddress) {
  groupIpAddress_ = groupIpAddress;
  setParameter(std::string("GroupIpAddress"), groupIpAddress);
}

bool RegisterTransitRouterMulticastGroupMembersRequest::getDryRun() const {
  return dryRun_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RegisterTransitRouterMulticastGroupMembersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RegisterTransitRouterMulticastGroupMembersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> RegisterTransitRouterMulticastGroupMembersRequest::getPeerTransitRouterMulticastDomains() const {
  return peerTransitRouterMulticastDomains_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setPeerTransitRouterMulticastDomains(const std::vector<std::string> &peerTransitRouterMulticastDomains) {
  peerTransitRouterMulticastDomains_ = peerTransitRouterMulticastDomains;
}

long RegisterTransitRouterMulticastGroupMembersRequest::getOwnerId() const {
  return ownerId_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RegisterTransitRouterMulticastGroupMembersRequest::getVersion() const {
  return version_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string RegisterTransitRouterMulticastGroupMembersRequest::getVpcId() const {
  return vpcId_;
}

void RegisterTransitRouterMulticastGroupMembersRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

