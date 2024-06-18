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

#include <alibabacloud/eflo/model/ListVpdRouteEntriesRequest.h>

using AlibabaCloud::Eflo::Model::ListVpdRouteEntriesRequest;

ListVpdRouteEntriesRequest::ListVpdRouteEntriesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListVpdRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListVpdRouteEntriesRequest::~ListVpdRouteEntriesRequest() {}

bool ListVpdRouteEntriesRequest::getIgnoreDetailedRouteEntry() const {
  return ignoreDetailedRouteEntry_;
}

void ListVpdRouteEntriesRequest::setIgnoreDetailedRouteEntry(bool ignoreDetailedRouteEntry) {
  ignoreDetailedRouteEntry_ = ignoreDetailedRouteEntry;
  setBodyParameter(std::string("IgnoreDetailedRouteEntry"), ignoreDetailedRouteEntry ? "true" : "false");
}

int ListVpdRouteEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListVpdRouteEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListVpdRouteEntriesRequest::getRouteType() const {
  return routeType_;
}

void ListVpdRouteEntriesRequest::setRouteType(const std::string &routeType) {
  routeType_ = routeType;
  setBodyParameter(std::string("RouteType"), routeType);
}

std::string ListVpdRouteEntriesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVpdRouteEntriesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVpdRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void ListVpdRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListVpdRouteEntriesRequest::getPageSize() const {
  return pageSize_;
}

void ListVpdRouteEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListVpdRouteEntriesRequest::getNextHopId() const {
  return nextHopId_;
}

void ListVpdRouteEntriesRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setBodyParameter(std::string("NextHopId"), nextHopId);
}

std::string ListVpdRouteEntriesRequest::getNextHopType() const {
  return nextHopType_;
}

void ListVpdRouteEntriesRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setBodyParameter(std::string("NextHopType"), nextHopType);
}

std::string ListVpdRouteEntriesRequest::getVpdRouteEntryId() const {
  return vpdRouteEntryId_;
}

void ListVpdRouteEntriesRequest::setVpdRouteEntryId(const std::string &vpdRouteEntryId) {
  vpdRouteEntryId_ = vpdRouteEntryId;
  setBodyParameter(std::string("VpdRouteEntryId"), vpdRouteEntryId);
}

std::string ListVpdRouteEntriesRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void ListVpdRouteEntriesRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setBodyParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string ListVpdRouteEntriesRequest::getVpdId() const {
  return vpdId_;
}

void ListVpdRouteEntriesRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

bool ListVpdRouteEntriesRequest::getEnablePage() const {
  return enablePage_;
}

void ListVpdRouteEntriesRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListVpdRouteEntriesRequest::getStatus() const {
  return status_;
}

void ListVpdRouteEntriesRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

