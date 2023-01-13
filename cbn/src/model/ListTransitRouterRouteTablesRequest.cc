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

#include <alibabacloud/cbn/model/ListTransitRouterRouteTablesRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterRouteTablesRequest;

ListTransitRouterRouteTablesRequest::ListTransitRouterRouteTablesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterRouteTables") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterRouteTablesRequest::~ListTransitRouterRouteTablesRequest() {}

long ListTransitRouterRouteTablesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterRouteTablesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> ListTransitRouterRouteTablesRequest::getTransitRouterRouteTableNames() const {
  return transitRouterRouteTableNames_;
}

void ListTransitRouterRouteTablesRequest::setTransitRouterRouteTableNames(const std::vector<std::string> &transitRouterRouteTableNames) {
  transitRouterRouteTableNames_ = transitRouterRouteTableNames;
}

ListTransitRouterRouteTablesRequest::RouteTableOptions ListTransitRouterRouteTablesRequest::getRouteTableOptions() const {
  return routeTableOptions_;
}

void ListTransitRouterRouteTablesRequest::setRouteTableOptions(const ListTransitRouterRouteTablesRequest::RouteTableOptions &routeTableOptions) {
  routeTableOptions_ = routeTableOptions;
  setParameter(std::string("RouteTableOptions") + ".MultiRegionECMP", routeTableOptions.multiRegionECMP);
}

std::string ListTransitRouterRouteTablesRequest::getTransitRouterRouteTableType() const {
  return transitRouterRouteTableType_;
}

void ListTransitRouterRouteTablesRequest::setTransitRouterRouteTableType(const std::string &transitRouterRouteTableType) {
  transitRouterRouteTableType_ = transitRouterRouteTableType;
  setParameter(std::string("TransitRouterRouteTableType"), transitRouterRouteTableType);
}

std::string ListTransitRouterRouteTablesRequest::getTransitRouterRouteTableStatus() const {
  return transitRouterRouteTableStatus_;
}

void ListTransitRouterRouteTablesRequest::setTransitRouterRouteTableStatus(const std::string &transitRouterRouteTableStatus) {
  transitRouterRouteTableStatus_ = transitRouterRouteTableStatus;
  setParameter(std::string("TransitRouterRouteTableStatus"), transitRouterRouteTableStatus);
}

std::vector<std::string> ListTransitRouterRouteTablesRequest::getTransitRouterRouteTableIds() const {
  return transitRouterRouteTableIds_;
}

void ListTransitRouterRouteTablesRequest::setTransitRouterRouteTableIds(const std::vector<std::string> &transitRouterRouteTableIds) {
  transitRouterRouteTableIds_ = transitRouterRouteTableIds;
}

std::string ListTransitRouterRouteTablesRequest::getNextToken() const {
  return nextToken_;
}

void ListTransitRouterRouteTablesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTransitRouterRouteTablesRequest::Tag> ListTransitRouterRouteTablesRequest::getTag() const {
  return tag_;
}

void ListTransitRouterRouteTablesRequest::setTag(const std::vector<ListTransitRouterRouteTablesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListTransitRouterRouteTablesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterRouteTablesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterRouteTablesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterRouteTablesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterRouteTablesRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterRouteTablesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterRouteTablesRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterRouteTablesRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterRouteTablesRequest::getVersion() const {
  return version_;
}

void ListTransitRouterRouteTablesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

int ListTransitRouterRouteTablesRequest::getMaxResults() const {
  return maxResults_;
}

void ListTransitRouterRouteTablesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

