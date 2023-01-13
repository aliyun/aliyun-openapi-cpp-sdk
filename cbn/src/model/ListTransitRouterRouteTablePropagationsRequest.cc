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

#include <alibabacloud/cbn/model/ListTransitRouterRouteTablePropagationsRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterRouteTablePropagationsRequest;

ListTransitRouterRouteTablePropagationsRequest::ListTransitRouterRouteTablePropagationsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterRouteTablePropagations") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterRouteTablePropagationsRequest::~ListTransitRouterRouteTablePropagationsRequest() {}

long ListTransitRouterRouteTablePropagationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterRouteTablePropagationsRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterRouteTablePropagationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getTransitRouterAttachmentResourceId() const {
  return transitRouterAttachmentResourceId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterAttachmentResourceId(const std::string &transitRouterAttachmentResourceId) {
  transitRouterAttachmentResourceId_ = transitRouterAttachmentResourceId;
  setParameter(std::string("TransitRouterAttachmentResourceId"), transitRouterAttachmentResourceId);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getTransitRouterAttachmentResourceType() const {
  return transitRouterAttachmentResourceType_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterAttachmentResourceType(const std::string &transitRouterAttachmentResourceType) {
  transitRouterAttachmentResourceType_ = transitRouterAttachmentResourceType;
  setParameter(std::string("TransitRouterAttachmentResourceType"), transitRouterAttachmentResourceType);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterRouteTablePropagationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterRouteTablePropagationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterRouteTablePropagationsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterRouteTablePropagationsRequest::getVersion() const {
  return version_;
}

void ListTransitRouterRouteTablePropagationsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterRouteTablePropagationsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

int ListTransitRouterRouteTablePropagationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterRouteTablePropagationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> ListTransitRouterRouteTablePropagationsRequest::getTransitRouterAttachmentIds() const {
  return transitRouterAttachmentIds_;
}

void ListTransitRouterRouteTablePropagationsRequest::setTransitRouterAttachmentIds(const std::vector<std::string> &transitRouterAttachmentIds) {
  transitRouterAttachmentIds_ = transitRouterAttachmentIds;
}

std::string ListTransitRouterRouteTablePropagationsRequest::getStatus() const {
  return status_;
}

void ListTransitRouterRouteTablePropagationsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

