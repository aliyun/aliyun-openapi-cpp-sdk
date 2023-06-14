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

#include <alibabacloud/ga/model/DeleteCustomRoutingEndpointTrafficPoliciesRequest.h>

using AlibabaCloud::Ga::Model::DeleteCustomRoutingEndpointTrafficPoliciesRequest;

DeleteCustomRoutingEndpointTrafficPoliciesRequest::DeleteCustomRoutingEndpointTrafficPoliciesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteCustomRoutingEndpointTrafficPolicies") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomRoutingEndpointTrafficPoliciesRequest::~DeleteCustomRoutingEndpointTrafficPoliciesRequest() {}

std::string DeleteCustomRoutingEndpointTrafficPoliciesRequest::getClientToken() const {
  return clientToken_;
}

void DeleteCustomRoutingEndpointTrafficPoliciesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteCustomRoutingEndpointTrafficPoliciesRequest::getEndpointId() const {
  return endpointId_;
}

void DeleteCustomRoutingEndpointTrafficPoliciesRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::vector<std::string> DeleteCustomRoutingEndpointTrafficPoliciesRequest::getPolicyIds() const {
  return policyIds_;
}

void DeleteCustomRoutingEndpointTrafficPoliciesRequest::setPolicyIds(const std::vector<std::string> &policyIds) {
  policyIds_ = policyIds;
}

std::string DeleteCustomRoutingEndpointTrafficPoliciesRequest::getRegionId() const {
  return regionId_;
}

void DeleteCustomRoutingEndpointTrafficPoliciesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

