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

#include <alibabacloud/ga/model/DescribeCustomRoutingEndpointRequest.h>

using AlibabaCloud::Ga::Model::DescribeCustomRoutingEndpointRequest;

DescribeCustomRoutingEndpointRequest::DescribeCustomRoutingEndpointRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DescribeCustomRoutingEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomRoutingEndpointRequest::~DescribeCustomRoutingEndpointRequest() {}

std::string DescribeCustomRoutingEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void DescribeCustomRoutingEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DescribeCustomRoutingEndpointRequest::getEndpointGroup() const {
  return endpointGroup_;
}

void DescribeCustomRoutingEndpointRequest::setEndpointGroup(const std::string &endpointGroup) {
  endpointGroup_ = endpointGroup;
  setParameter(std::string("EndpointGroup"), endpointGroup);
}

std::string DescribeCustomRoutingEndpointRequest::getRegionId() const {
  return regionId_;
}

void DescribeCustomRoutingEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

