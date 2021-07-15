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

#include <alibabacloud/alb/model/UpdateLoadBalancerEditionRequest.h>

using AlibabaCloud::Alb::Model::UpdateLoadBalancerEditionRequest;

UpdateLoadBalancerEditionRequest::UpdateLoadBalancerEditionRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateLoadBalancerEdition") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerEditionRequest::~UpdateLoadBalancerEditionRequest() {}

std::string UpdateLoadBalancerEditionRequest::getLoadBalancerEdition() const {
  return loadBalancerEdition_;
}

void UpdateLoadBalancerEditionRequest::setLoadBalancerEdition(const std::string &loadBalancerEdition) {
  loadBalancerEdition_ = loadBalancerEdition;
  setParameter(std::string("LoadBalancerEdition"), loadBalancerEdition);
}

std::string UpdateLoadBalancerEditionRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerEditionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool UpdateLoadBalancerEditionRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerEditionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateLoadBalancerEditionRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerEditionRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

