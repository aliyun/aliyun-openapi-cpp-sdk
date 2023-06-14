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

#include <alibabacloud/ga/model/ListCustomRoutingPortMappingsByDestinationRequest.h>

using AlibabaCloud::Ga::Model::ListCustomRoutingPortMappingsByDestinationRequest;

ListCustomRoutingPortMappingsByDestinationRequest::ListCustomRoutingPortMappingsByDestinationRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListCustomRoutingPortMappingsByDestination") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomRoutingPortMappingsByDestinationRequest::~ListCustomRoutingPortMappingsByDestinationRequest() {}

std::string ListCustomRoutingPortMappingsByDestinationRequest::getEndpointId() const {
  return endpointId_;
}

void ListCustomRoutingPortMappingsByDestinationRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string ListCustomRoutingPortMappingsByDestinationRequest::getDestinationAddress() const {
  return destinationAddress_;
}

void ListCustomRoutingPortMappingsByDestinationRequest::setDestinationAddress(const std::string &destinationAddress) {
  destinationAddress_ = destinationAddress;
  setParameter(std::string("DestinationAddress"), destinationAddress);
}

std::string ListCustomRoutingPortMappingsByDestinationRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomRoutingPortMappingsByDestinationRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListCustomRoutingPortMappingsByDestinationRequest::getRegionId() const {
  return regionId_;
}

void ListCustomRoutingPortMappingsByDestinationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListCustomRoutingPortMappingsByDestinationRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomRoutingPortMappingsByDestinationRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

