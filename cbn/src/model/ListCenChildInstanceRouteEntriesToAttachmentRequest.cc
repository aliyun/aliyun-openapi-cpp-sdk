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

#include <alibabacloud/cbn/model/ListCenChildInstanceRouteEntriesToAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::ListCenChildInstanceRouteEntriesToAttachmentRequest;

ListCenChildInstanceRouteEntriesToAttachmentRequest::ListCenChildInstanceRouteEntriesToAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListCenChildInstanceRouteEntriesToAttachment") {
  setMethod(HttpRequest::Method::Post);
}

ListCenChildInstanceRouteEntriesToAttachmentRequest::~ListCenChildInstanceRouteEntriesToAttachmentRequest() {}

long ListCenChildInstanceRouteEntriesToAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getCenId() const {
  return cenId_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getNextToken() const {
  return nextToken_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListCenChildInstanceRouteEntriesToAttachmentRequest::RouteFilter> ListCenChildInstanceRouteEntriesToAttachmentRequest::getRouteFilter() const {
  return routeFilter_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setRouteFilter(const std::vector<ListCenChildInstanceRouteEntriesToAttachmentRequest::RouteFilter> &routeFilter) {
  routeFilter_ = routeFilter;
  for(int dep1 = 0; dep1 != routeFilter.size(); dep1++) {
  auto routeFilterObj = routeFilter.at(dep1);
  std::string routeFilterObjStr = std::string("RouteFilter") + "." + std::to_string(dep1 + 1);
    setParameter(routeFilterObjStr + ".Key", routeFilterObj.key);
  }
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListCenChildInstanceRouteEntriesToAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getVersion() const {
  return version_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getServiceType() const {
  return serviceType_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

int ListCenChildInstanceRouteEntriesToAttachmentRequest::getMaxResults() const {
  return maxResults_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListCenChildInstanceRouteEntriesToAttachmentRequest::getChildInstanceRouteTableId() const {
  return childInstanceRouteTableId_;
}

void ListCenChildInstanceRouteEntriesToAttachmentRequest::setChildInstanceRouteTableId(const std::string &childInstanceRouteTableId) {
  childInstanceRouteTableId_ = childInstanceRouteTableId;
  setParameter(std::string("ChildInstanceRouteTableId"), childInstanceRouteTableId);
}

