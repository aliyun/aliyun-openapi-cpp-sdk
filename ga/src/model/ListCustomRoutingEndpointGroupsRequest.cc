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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointGroupsRequest.h>

using AlibabaCloud::Ga::Model::ListCustomRoutingEndpointGroupsRequest;

ListCustomRoutingEndpointGroupsRequest::ListCustomRoutingEndpointGroupsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListCustomRoutingEndpointGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomRoutingEndpointGroupsRequest::~ListCustomRoutingEndpointGroupsRequest() {}

std::string ListCustomRoutingEndpointGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomRoutingEndpointGroupsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListCustomRoutingEndpointGroupsRequest::getListenerId() const {
  return listenerId_;
}

void ListCustomRoutingEndpointGroupsRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListCustomRoutingEndpointGroupsRequest::getRegionId() const {
  return regionId_;
}

void ListCustomRoutingEndpointGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListCustomRoutingEndpointGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomRoutingEndpointGroupsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListCustomRoutingEndpointGroupsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListCustomRoutingEndpointGroupsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string ListCustomRoutingEndpointGroupsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void ListCustomRoutingEndpointGroupsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

