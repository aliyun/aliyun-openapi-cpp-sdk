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

#include <alibabacloud/eflo/model/ListVccRouteEntriesRequest.h>

using AlibabaCloud::Eflo::Model::ListVccRouteEntriesRequest;

ListVccRouteEntriesRequest::ListVccRouteEntriesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListVccRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListVccRouteEntriesRequest::~ListVccRouteEntriesRequest() {}

bool ListVccRouteEntriesRequest::getIgnoreDetailedRouteEntry() const {
  return ignoreDetailedRouteEntry_;
}

void ListVccRouteEntriesRequest::setIgnoreDetailedRouteEntry(bool ignoreDetailedRouteEntry) {
  ignoreDetailedRouteEntry_ = ignoreDetailedRouteEntry;
  setBodyParameter(std::string("IgnoreDetailedRouteEntry"), ignoreDetailedRouteEntry ? "true" : "false");
}

int ListVccRouteEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListVccRouteEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListVccRouteEntriesRequest::getRouteType() const {
  return routeType_;
}

void ListVccRouteEntriesRequest::setRouteType(const std::string &routeType) {
  routeType_ = routeType;
  setBodyParameter(std::string("RouteType"), routeType);
}

std::string ListVccRouteEntriesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVccRouteEntriesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVccRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void ListVccRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListVccRouteEntriesRequest::getPageSize() const {
  return pageSize_;
}

void ListVccRouteEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListVccRouteEntriesRequest::getNextHopId() const {
  return nextHopId_;
}

void ListVccRouteEntriesRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setBodyParameter(std::string("NextHopId"), nextHopId);
}

std::string ListVccRouteEntriesRequest::getVccId() const {
  return vccId_;
}

void ListVccRouteEntriesRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

std::string ListVccRouteEntriesRequest::getNextHopType() const {
  return nextHopType_;
}

void ListVccRouteEntriesRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setBodyParameter(std::string("NextHopType"), nextHopType);
}

std::string ListVccRouteEntriesRequest::getVpdRouteEntryId() const {
  return vpdRouteEntryId_;
}

void ListVccRouteEntriesRequest::setVpdRouteEntryId(const std::string &vpdRouteEntryId) {
  vpdRouteEntryId_ = vpdRouteEntryId;
  setBodyParameter(std::string("VpdRouteEntryId"), vpdRouteEntryId);
}

std::string ListVccRouteEntriesRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void ListVccRouteEntriesRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setBodyParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

bool ListVccRouteEntriesRequest::getEnablePage() const {
  return enablePage_;
}

void ListVccRouteEntriesRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListVccRouteEntriesRequest::getStatus() const {
  return status_;
}

void ListVccRouteEntriesRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

