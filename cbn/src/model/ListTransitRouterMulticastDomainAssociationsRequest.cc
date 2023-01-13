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

#include <alibabacloud/cbn/model/ListTransitRouterMulticastDomainAssociationsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterMulticastDomainAssociationsRequest;

ListTransitRouterMulticastDomainAssociationsRequest::ListTransitRouterMulticastDomainAssociationsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterMulticastDomainAssociations") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterMulticastDomainAssociationsRequest::~ListTransitRouterMulticastDomainAssociationsRequest() {}

long ListTransitRouterMulticastDomainAssociationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getClientToken() const {
  return clientToken_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> ListTransitRouterMulticastDomainAssociationsRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getResourceId() const {
  return resourceId_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterMulticastDomainAssociationsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getResourceType() const {
  return resourceType_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterMulticastDomainAssociationsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

long ListTransitRouterMulticastDomainAssociationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterMulticastDomainAssociationsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

