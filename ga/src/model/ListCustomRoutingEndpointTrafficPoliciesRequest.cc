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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointTrafficPoliciesRequest.h>

using AlibabaCloud::Ga::Model::ListCustomRoutingEndpointTrafficPoliciesRequest;

ListCustomRoutingEndpointTrafficPoliciesRequest::ListCustomRoutingEndpointTrafficPoliciesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListCustomRoutingEndpointTrafficPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomRoutingEndpointTrafficPoliciesRequest::~ListCustomRoutingEndpointTrafficPoliciesRequest() {}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getAddress() const {
  return address_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getEndpointId() const {
  return endpointId_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getListenerId() const {
  return listenerId_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getRegionId() const {
  return regionId_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string ListCustomRoutingEndpointTrafficPoliciesRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void ListCustomRoutingEndpointTrafficPoliciesRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

