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

#include <alibabacloud/ga/model/DescribeCustomRoutingEndPointTrafficPolicyRequest.h>

using AlibabaCloud::Ga::Model::DescribeCustomRoutingEndPointTrafficPolicyRequest;

DescribeCustomRoutingEndPointTrafficPolicyRequest::DescribeCustomRoutingEndPointTrafficPolicyRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DescribeCustomRoutingEndPointTrafficPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomRoutingEndPointTrafficPolicyRequest::~DescribeCustomRoutingEndPointTrafficPolicyRequest() {}

std::string DescribeCustomRoutingEndPointTrafficPolicyRequest::getEndpointId() const {
  return endpointId_;
}

void DescribeCustomRoutingEndPointTrafficPolicyRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DescribeCustomRoutingEndPointTrafficPolicyRequest::getPolicyId() const {
  return policyId_;
}

void DescribeCustomRoutingEndPointTrafficPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string DescribeCustomRoutingEndPointTrafficPolicyRequest::getRegionId() const {
  return regionId_;
}

void DescribeCustomRoutingEndPointTrafficPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

