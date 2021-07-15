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

#include <alibabacloud/alb/model/UpdateLoadBalancerAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateLoadBalancerAttributeRequest;

UpdateLoadBalancerAttributeRequest::UpdateLoadBalancerAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateLoadBalancerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerAttributeRequest::~UpdateLoadBalancerAttributeRequest() {}

std::string UpdateLoadBalancerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig UpdateLoadBalancerAttributeRequest::getModificationProtectionConfig() const {
  return modificationProtectionConfig_;
}

void UpdateLoadBalancerAttributeRequest::setModificationProtectionConfig(const UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig &modificationProtectionConfig) {
  modificationProtectionConfig_ = modificationProtectionConfig;
  setParameter(std::string("ModificationProtectionConfig") + ".Reason", modificationProtectionConfig.reason);
  setParameter(std::string("ModificationProtectionConfig") + ".Status", modificationProtectionConfig.status);
}

std::string UpdateLoadBalancerAttributeRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void UpdateLoadBalancerAttributeRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setParameter(std::string("LoadBalancerName"), loadBalancerName);
}

bool UpdateLoadBalancerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateLoadBalancerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

