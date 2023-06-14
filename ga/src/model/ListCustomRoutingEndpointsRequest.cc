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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointsRequest.h>

using AlibabaCloud::Ga::Model::ListCustomRoutingEndpointsRequest;

ListCustomRoutingEndpointsRequest::ListCustomRoutingEndpointsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListCustomRoutingEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomRoutingEndpointsRequest::~ListCustomRoutingEndpointsRequest() {}

std::string ListCustomRoutingEndpointsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomRoutingEndpointsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListCustomRoutingEndpointsRequest::getListenerId() const {
  return listenerId_;
}

void ListCustomRoutingEndpointsRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListCustomRoutingEndpointsRequest::getRegionId() const {
  return regionId_;
}

void ListCustomRoutingEndpointsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListCustomRoutingEndpointsRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomRoutingEndpointsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListCustomRoutingEndpointsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListCustomRoutingEndpointsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string ListCustomRoutingEndpointsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void ListCustomRoutingEndpointsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

