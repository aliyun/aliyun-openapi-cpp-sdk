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

#include <alibabacloud/cbn/model/DeregisterTransitRouterMulticastGroupSourcesRequest.h>

using AlibabaCloud::Cbn::Model::DeregisterTransitRouterMulticastGroupSourcesRequest;

DeregisterTransitRouterMulticastGroupSourcesRequest::DeregisterTransitRouterMulticastGroupSourcesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeregisterTransitRouterMulticastGroupSources") {
  setMethod(HttpRequest::Method::Post);
}

DeregisterTransitRouterMulticastGroupSourcesRequest::~DeregisterTransitRouterMulticastGroupSourcesRequest() {}

long DeregisterTransitRouterMulticastGroupSourcesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeregisterTransitRouterMulticastGroupSourcesRequest::getClientToken() const {
  return clientToken_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DeregisterTransitRouterMulticastGroupSourcesRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
}

std::string DeregisterTransitRouterMulticastGroupSourcesRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

std::vector<std::string> DeregisterTransitRouterMulticastGroupSourcesRequest::getConnectPeerIds() const {
  return connectPeerIds_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setConnectPeerIds(const std::vector<std::string> &connectPeerIds) {
  connectPeerIds_ = connectPeerIds;
}

std::string DeregisterTransitRouterMulticastGroupSourcesRequest::getGroupIpAddress() const {
  return groupIpAddress_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setGroupIpAddress(const std::string &groupIpAddress) {
  groupIpAddress_ = groupIpAddress;
  setParameter(std::string("GroupIpAddress"), groupIpAddress);
}

bool DeregisterTransitRouterMulticastGroupSourcesRequest::getDryRun() const {
  return dryRun_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeregisterTransitRouterMulticastGroupSourcesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeregisterTransitRouterMulticastGroupSourcesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeregisterTransitRouterMulticastGroupSourcesRequest::getOwnerId() const {
  return ownerId_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeregisterTransitRouterMulticastGroupSourcesRequest::getVersion() const {
  return version_;
}

void DeregisterTransitRouterMulticastGroupSourcesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

