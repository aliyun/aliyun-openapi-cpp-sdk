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

#include <alibabacloud/gwlb/model/UpdateLoadBalancerAttributeRequest.h>

using AlibabaCloud::Gwlb::Model::UpdateLoadBalancerAttributeRequest;

UpdateLoadBalancerAttributeRequest::UpdateLoadBalancerAttributeRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "UpdateLoadBalancerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerAttributeRequest::~UpdateLoadBalancerAttributeRequest() {}

bool UpdateLoadBalancerAttributeRequest::getCrossZoneEnabled() const {
  return crossZoneEnabled_;
}

void UpdateLoadBalancerAttributeRequest::setCrossZoneEnabled(bool crossZoneEnabled) {
  crossZoneEnabled_ = crossZoneEnabled;
  setBodyParameter(std::string("CrossZoneEnabled"), crossZoneEnabled ? "true" : "false");
}

std::string UpdateLoadBalancerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateLoadBalancerAttributeRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void UpdateLoadBalancerAttributeRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setBodyParameter(std::string("LoadBalancerName"), loadBalancerName);
}

bool UpdateLoadBalancerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateLoadBalancerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

