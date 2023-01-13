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

#include <alibabacloud/cbn/model/ListTransitRouterMulticastGroupsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterMulticastGroupsRequest;

ListTransitRouterMulticastGroupsRequest::ListTransitRouterMulticastGroupsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterMulticastGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterMulticastGroupsRequest::~ListTransitRouterMulticastGroupsRequest() {}

long ListTransitRouterMulticastGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterMulticastGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterMulticastGroupsRequest::getClientToken() const {
  return clientToken_;
}

void ListTransitRouterMulticastGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> ListTransitRouterMulticastGroupsRequest::getNetworkInterfaceIds() const {
  return networkInterfaceIds_;
}

void ListTransitRouterMulticastGroupsRequest::setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds) {
  networkInterfaceIds_ = networkInterfaceIds;
}

std::vector<std::string> ListTransitRouterMulticastGroupsRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void ListTransitRouterMulticastGroupsRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

std::string ListTransitRouterMulticastGroupsRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void ListTransitRouterMulticastGroupsRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

bool ListTransitRouterMulticastGroupsRequest::getIsGroupSource() const {
  return isGroupSource_;
}

void ListTransitRouterMulticastGroupsRequest::setIsGroupSource(bool isGroupSource) {
  isGroupSource_ = isGroupSource;
  setParameter(std::string("IsGroupSource"), isGroupSource ? "true" : "false");
}

std::vector<std::string> ListTransitRouterMulticastGroupsRequest::getConnectPeerIds() const {
  return connectPeerIds_;
}

void ListTransitRouterMulticastGroupsRequest::setConnectPeerIds(const std::vector<std::string> &connectPeerIds) {
  connectPeerIds_ = connectPeerIds;
}

std::string ListTransitRouterMulticastGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterMulticastGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTransitRouterMulticastGroupsRequest::getGroupIpAddress() const {
  return groupIpAddress_;
}

void ListTransitRouterMulticastGroupsRequest::setGroupIpAddress(const std::string &groupIpAddress) {
  groupIpAddress_ = groupIpAddress;
  setParameter(std::string("GroupIpAddress"), groupIpAddress);
}

std::string ListTransitRouterMulticastGroupsRequest::getResourceId() const {
  return resourceId_;
}

void ListTransitRouterMulticastGroupsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListTransitRouterMulticastGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterMulticastGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterMulticastGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterMulticastGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> ListTransitRouterMulticastGroupsRequest::getPeerTransitRouterMulticastDomains() const {
  return peerTransitRouterMulticastDomains_;
}

void ListTransitRouterMulticastGroupsRequest::setPeerTransitRouterMulticastDomains(const std::vector<std::string> &peerTransitRouterMulticastDomains) {
  peerTransitRouterMulticastDomains_ = peerTransitRouterMulticastDomains;
}

long ListTransitRouterMulticastGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterMulticastGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterMulticastGroupsRequest::getResourceType() const {
  return resourceType_;
}

void ListTransitRouterMulticastGroupsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListTransitRouterMulticastGroupsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterMulticastGroupsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterMulticastGroupsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterMulticastGroupsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

long ListTransitRouterMulticastGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterMulticastGroupsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

bool ListTransitRouterMulticastGroupsRequest::getIsGroupMember() const {
  return isGroupMember_;
}

void ListTransitRouterMulticastGroupsRequest::setIsGroupMember(bool isGroupMember) {
  isGroupMember_ = isGroupMember;
  setParameter(std::string("IsGroupMember"), isGroupMember ? "true" : "false");
}

