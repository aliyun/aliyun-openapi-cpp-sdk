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

#include <alibabacloud/cbn/model/RegisterTransitRouterMulticastGroupSourcesRequest.h>

using AlibabaCloud::Cbn::Model::RegisterTransitRouterMulticastGroupSourcesRequest;

RegisterTransitRouterMulticastGroupSourcesRequest::RegisterTransitRouterMulticastGroupSourcesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "RegisterTransitRouterMulticastGroupSources") {
  setMethod(HttpRequest::Method::Post);
}

RegisterTransitRouterMulticastGroupSourcesRequest::~RegisterTransitRouterMulticastGroupSourcesRequest() {}

long RegisterTransitRouterMulticastGroupSourcesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RegisterTransitRouterMulticastGroupSourcesRequest::getClientToken() const {
  return clientToken_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> RegisterTransitRouterMulticastGroupSourcesRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
}

std::string RegisterTransitRouterMulticastGroupSourcesRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

std::vector<std::string> RegisterTransitRouterMulticastGroupSourcesRequest::getConnectPeerIds() const {
  return connectPeerIds_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setConnectPeerIds(const std::vector<std::string> &connectPeerIds) {
  connectPeerIds_ = connectPeerIds;
}

std::string RegisterTransitRouterMulticastGroupSourcesRequest::getGroupIpAddress() const {
  return groupIpAddress_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setGroupIpAddress(const std::string &groupIpAddress) {
  groupIpAddress_ = groupIpAddress;
  setParameter(std::string("GroupIpAddress"), groupIpAddress);
}

bool RegisterTransitRouterMulticastGroupSourcesRequest::getDryRun() const {
  return dryRun_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RegisterTransitRouterMulticastGroupSourcesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RegisterTransitRouterMulticastGroupSourcesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RegisterTransitRouterMulticastGroupSourcesRequest::getOwnerId() const {
  return ownerId_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RegisterTransitRouterMulticastGroupSourcesRequest::getVersion() const {
  return version_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string RegisterTransitRouterMulticastGroupSourcesRequest::getVpcId() const {
  return vpcId_;
}

void RegisterTransitRouterMulticastGroupSourcesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

