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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointGroupDestinationsRequest.h>

using AlibabaCloud::Ga::Model::ListCustomRoutingEndpointGroupDestinationsRequest;

ListCustomRoutingEndpointGroupDestinationsRequest::ListCustomRoutingEndpointGroupDestinationsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListCustomRoutingEndpointGroupDestinations") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomRoutingEndpointGroupDestinationsRequest::~ListCustomRoutingEndpointGroupDestinationsRequest() {}

std::string ListCustomRoutingEndpointGroupDestinationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListCustomRoutingEndpointGroupDestinationsRequest::getListenerId() const {
  return listenerId_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListCustomRoutingEndpointGroupDestinationsRequest::getRegionId() const {
  return regionId_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListCustomRoutingEndpointGroupDestinationsRequest::getFromPort() const {
  return fromPort_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setFromPort(int fromPort) {
  fromPort_ = fromPort;
  setParameter(std::string("FromPort"), std::to_string(fromPort));
}

std::string ListCustomRoutingEndpointGroupDestinationsRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListCustomRoutingEndpointGroupDestinationsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<std::string> ListCustomRoutingEndpointGroupDestinationsRequest::getProtocols() const {
  return protocols_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setProtocols(const std::vector<std::string> &protocols) {
  protocols_ = protocols;
}

int ListCustomRoutingEndpointGroupDestinationsRequest::getToPort() const {
  return toPort_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setToPort(int toPort) {
  toPort_ = toPort;
  setParameter(std::string("ToPort"), std::to_string(toPort));
}

std::string ListCustomRoutingEndpointGroupDestinationsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void ListCustomRoutingEndpointGroupDestinationsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

