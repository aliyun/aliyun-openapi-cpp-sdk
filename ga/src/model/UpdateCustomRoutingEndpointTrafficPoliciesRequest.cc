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

#include <alibabacloud/ga/model/UpdateCustomRoutingEndpointTrafficPoliciesRequest.h>

using AlibabaCloud::Ga::Model::UpdateCustomRoutingEndpointTrafficPoliciesRequest;

UpdateCustomRoutingEndpointTrafficPoliciesRequest::UpdateCustomRoutingEndpointTrafficPoliciesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateCustomRoutingEndpointTrafficPolicies") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomRoutingEndpointTrafficPoliciesRequest::~UpdateCustomRoutingEndpointTrafficPoliciesRequest() {}

std::string UpdateCustomRoutingEndpointTrafficPoliciesRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCustomRoutingEndpointTrafficPoliciesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateCustomRoutingEndpointTrafficPoliciesRequest::getEndpointId() const {
  return endpointId_;
}

void UpdateCustomRoutingEndpointTrafficPoliciesRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations> UpdateCustomRoutingEndpointTrafficPoliciesRequest::getPolicyConfigurations() const {
  return policyConfigurations_;
}

void UpdateCustomRoutingEndpointTrafficPoliciesRequest::setPolicyConfigurations(const std::vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations> &policyConfigurations) {
  policyConfigurations_ = policyConfigurations;
  for(int dep1 = 0; dep1 != policyConfigurations.size(); dep1++) {
  auto policyConfigurationsObj = policyConfigurations.at(dep1);
  std::string policyConfigurationsObjStr = std::string("PolicyConfigurations") + "." + std::to_string(dep1 + 1);
    setParameter(policyConfigurationsObjStr + ".PolicyId", policyConfigurationsObj.policyId);
    setParameter(policyConfigurationsObjStr + ".Address", policyConfigurationsObj.address);
    for(int dep2 = 0; dep2 != policyConfigurationsObj.portRanges.size(); dep2++) {
    auto portRangesObj = policyConfigurationsObj.portRanges.at(dep2);
    std::string portRangesObjStr = policyConfigurationsObjStr + ".PortRanges" + "." + std::to_string(dep2 + 1);
      setParameter(portRangesObjStr + ".FromPort", std::to_string(portRangesObj.fromPort));
      setParameter(portRangesObjStr + ".ToPort", std::to_string(portRangesObj.toPort));
    }
  }
}

std::string UpdateCustomRoutingEndpointTrafficPoliciesRequest::getRegionId() const {
  return regionId_;
}

void UpdateCustomRoutingEndpointTrafficPoliciesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

