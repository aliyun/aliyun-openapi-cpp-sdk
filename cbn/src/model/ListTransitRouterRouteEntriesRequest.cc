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

#include <alibabacloud/cbn/model/ListTransitRouterRouteEntriesRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterRouteEntriesRequest;

ListTransitRouterRouteEntriesRequest::ListTransitRouterRouteEntriesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterRouteEntriesRequest::~ListTransitRouterRouteEntriesRequest() {}

long ListTransitRouterRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterRouteEntriesRequest::getTransitRouterRouteEntryDestinationCidrBlock() const {
  return transitRouterRouteEntryDestinationCidrBlock_;
}

void ListTransitRouterRouteEntriesRequest::setTransitRouterRouteEntryDestinationCidrBlock(const std::string &transitRouterRouteEntryDestinationCidrBlock) {
  transitRouterRouteEntryDestinationCidrBlock_ = transitRouterRouteEntryDestinationCidrBlock;
  setParameter(std::string("TransitRouterRouteEntryDestinationCidrBlock"), transitRouterRouteEntryDestinationCidrBlock);
}

std::string ListTransitRouterRouteEntriesRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void ListTransitRouterRouteEntriesRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

std::string ListTransitRouterRouteEntriesRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterRouteEntriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTransitRouterRouteEntriesRequest::getTransitRouterRouteEntryStatus() const {
  return transitRouterRouteEntryStatus_;
}

void ListTransitRouterRouteEntriesRequest::setTransitRouterRouteEntryStatus(const std::string &transitRouterRouteEntryStatus) {
  transitRouterRouteEntryStatus_ = transitRouterRouteEntryStatus;
  setParameter(std::string("TransitRouterRouteEntryStatus"), transitRouterRouteEntryStatus);
}

std::string ListTransitRouterRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> ListTransitRouterRouteEntriesRequest::getTransitRouterRouteEntryNames() const {
  return transitRouterRouteEntryNames_;
}

void ListTransitRouterRouteEntriesRequest::setTransitRouterRouteEntryNames(const std::vector<std::string> &transitRouterRouteEntryNames) {
  transitRouterRouteEntryNames_ = transitRouterRouteEntryNames;
}

std::vector<std::string> ListTransitRouterRouteEntriesRequest::getTransitRouterRouteEntryIds() const {
  return transitRouterRouteEntryIds_;
}

void ListTransitRouterRouteEntriesRequest::setTransitRouterRouteEntryIds(const std::vector<std::string> &transitRouterRouteEntryIds) {
  transitRouterRouteEntryIds_ = transitRouterRouteEntryIds;
}

long ListTransitRouterRouteEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterRouteEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterRouteEntriesRequest::getVersion() const {
  return version_;
}

void ListTransitRouterRouteEntriesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

int ListTransitRouterRouteEntriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterRouteEntriesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

