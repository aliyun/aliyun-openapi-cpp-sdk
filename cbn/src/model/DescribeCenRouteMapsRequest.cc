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

#include <alibabacloud/cbn/model/DescribeCenRouteMapsRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenRouteMapsRequest;

DescribeCenRouteMapsRequest::DescribeCenRouteMapsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCenRouteMaps") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCenRouteMapsRequest::~DescribeCenRouteMapsRequest() {}

long DescribeCenRouteMapsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCenRouteMapsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCenRouteMapsRequest::getCenId() const {
  return cenId_;
}

void DescribeCenRouteMapsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int DescribeCenRouteMapsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCenRouteMapsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCenRouteMapsRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void DescribeCenRouteMapsRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

int DescribeCenRouteMapsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCenRouteMapsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCenRouteMapsRequest::getTransmitDirection() const {
  return transmitDirection_;
}

void DescribeCenRouteMapsRequest::setTransmitDirection(const std::string &transmitDirection) {
  transmitDirection_ = transmitDirection;
  setParameter(std::string("TransmitDirection"), transmitDirection);
}

std::string DescribeCenRouteMapsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCenRouteMapsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCenRouteMapsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCenRouteMapsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeCenRouteMapsRequest::getRouteMapId() const {
  return routeMapId_;
}

void DescribeCenRouteMapsRequest::setRouteMapId(const std::string &routeMapId) {
  routeMapId_ = routeMapId;
  setParameter(std::string("RouteMapId"), routeMapId);
}

long DescribeCenRouteMapsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCenRouteMapsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCenRouteMapsRequest::getVersion() const {
  return version_;
}

void DescribeCenRouteMapsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::vector<DescribeCenRouteMapsRequest::Filter> DescribeCenRouteMapsRequest::getFilter() const {
  return filter_;
}

void DescribeCenRouteMapsRequest::setFilter(const std::vector<DescribeCenRouteMapsRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

std::string DescribeCenRouteMapsRequest::getCenRegionId() const {
  return cenRegionId_;
}

void DescribeCenRouteMapsRequest::setCenRegionId(const std::string &cenRegionId) {
  cenRegionId_ = cenRegionId;
  setParameter(std::string("CenRegionId"), cenRegionId);
}

