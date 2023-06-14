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

#include <alibabacloud/ga/model/DescribeCustomRoutingEndpointGroupDestinationsRequest.h>

using AlibabaCloud::Ga::Model::DescribeCustomRoutingEndpointGroupDestinationsRequest;

DescribeCustomRoutingEndpointGroupDestinationsRequest::DescribeCustomRoutingEndpointGroupDestinationsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DescribeCustomRoutingEndpointGroupDestinations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomRoutingEndpointGroupDestinationsRequest::~DescribeCustomRoutingEndpointGroupDestinationsRequest() {}

std::string DescribeCustomRoutingEndpointGroupDestinationsRequest::getDestinationId() const {
  return destinationId_;
}

void DescribeCustomRoutingEndpointGroupDestinationsRequest::setDestinationId(const std::string &destinationId) {
  destinationId_ = destinationId;
  setParameter(std::string("DestinationId"), destinationId);
}

std::string DescribeCustomRoutingEndpointGroupDestinationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCustomRoutingEndpointGroupDestinationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCustomRoutingEndpointGroupDestinationsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void DescribeCustomRoutingEndpointGroupDestinationsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

