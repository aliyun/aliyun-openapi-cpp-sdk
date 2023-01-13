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

#include <alibabacloud/cbn/model/ListTransitRouterRouteTableAssociationsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterRouteTableAssociationsRequest;

ListTransitRouterRouteTableAssociationsRequest::ListTransitRouterRouteTableAssociationsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterRouteTableAssociations") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterRouteTableAssociationsRequest::~ListTransitRouterRouteTableAssociationsRequest() {}

long ListTransitRouterRouteTableAssociationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterRouteTableAssociationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterRouteTableAssociationsRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void ListTransitRouterRouteTableAssociationsRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

std::string ListTransitRouterRouteTableAssociationsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterRouteTableAssociationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTransitRouterRouteTableAssociationsRequest::getTransitRouterAttachmentResourceId() const {
  return transitRouterAttachmentResourceId_;
}

void ListTransitRouterRouteTableAssociationsRequest::setTransitRouterAttachmentResourceId(const std::string &transitRouterAttachmentResourceId) {
  transitRouterAttachmentResourceId_ = transitRouterAttachmentResourceId;
  setParameter(std::string("TransitRouterAttachmentResourceId"), transitRouterAttachmentResourceId);
}

std::string ListTransitRouterRouteTableAssociationsRequest::getTransitRouterAttachmentResourceType() const {
  return transitRouterAttachmentResourceType_;
}

void ListTransitRouterRouteTableAssociationsRequest::setTransitRouterAttachmentResourceType(const std::string &transitRouterAttachmentResourceType) {
  transitRouterAttachmentResourceType_ = transitRouterAttachmentResourceType;
  setParameter(std::string("TransitRouterAttachmentResourceType"), transitRouterAttachmentResourceType);
}

std::string ListTransitRouterRouteTableAssociationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterRouteTableAssociationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterRouteTableAssociationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterRouteTableAssociationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterRouteTableAssociationsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterRouteTableAssociationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterRouteTableAssociationsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterRouteTableAssociationsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterRouteTableAssociationsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterRouteTableAssociationsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

int ListTransitRouterRouteTableAssociationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterRouteTableAssociationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> ListTransitRouterRouteTableAssociationsRequest::getTransitRouterAttachmentIds() const {
  return transitRouterAttachmentIds_;
}

void ListTransitRouterRouteTableAssociationsRequest::setTransitRouterAttachmentIds(const std::vector<std::string> &transitRouterAttachmentIds) {
  transitRouterAttachmentIds_ = transitRouterAttachmentIds;
}

std::string ListTransitRouterRouteTableAssociationsRequest::getStatus() const {
  return status_;
}

void ListTransitRouterRouteTableAssociationsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

