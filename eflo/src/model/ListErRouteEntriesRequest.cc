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

#include <alibabacloud/eflo/model/ListErRouteEntriesRequest.h>

using AlibabaCloud::Eflo::Model::ListErRouteEntriesRequest;

ListErRouteEntriesRequest::ListErRouteEntriesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListErRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListErRouteEntriesRequest::~ListErRouteEntriesRequest() {}

bool ListErRouteEntriesRequest::getIgnoreDetailedRouteEntry() const {
  return ignoreDetailedRouteEntry_;
}

void ListErRouteEntriesRequest::setIgnoreDetailedRouteEntry(bool ignoreDetailedRouteEntry) {
  ignoreDetailedRouteEntry_ = ignoreDetailedRouteEntry;
  setBodyParameter(std::string("IgnoreDetailedRouteEntry"), ignoreDetailedRouteEntry ? "true" : "false");
}

int ListErRouteEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListErRouteEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListErRouteEntriesRequest::getRouteType() const {
  return routeType_;
}

void ListErRouteEntriesRequest::setRouteType(const std::string &routeType) {
  routeType_ = routeType;
  setBodyParameter(std::string("RouteType"), routeType);
}

std::string ListErRouteEntriesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListErRouteEntriesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListErRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void ListErRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListErRouteEntriesRequest::getPageSize() const {
  return pageSize_;
}

void ListErRouteEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListErRouteEntriesRequest::getNextHopId() const {
  return nextHopId_;
}

void ListErRouteEntriesRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setBodyParameter(std::string("NextHopId"), nextHopId);
}

std::string ListErRouteEntriesRequest::getNextHopType() const {
  return nextHopType_;
}

void ListErRouteEntriesRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setBodyParameter(std::string("NextHopType"), nextHopType);
}

std::string ListErRouteEntriesRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void ListErRouteEntriesRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setBodyParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string ListErRouteEntriesRequest::getErId() const {
  return erId_;
}

void ListErRouteEntriesRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string ListErRouteEntriesRequest::getInstanceId() const {
  return instanceId_;
}

void ListErRouteEntriesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

bool ListErRouteEntriesRequest::getEnablePage() const {
  return enablePage_;
}

void ListErRouteEntriesRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListErRouteEntriesRequest::getStatus() const {
  return status_;
}

void ListErRouteEntriesRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

