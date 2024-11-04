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

#include <alibabacloud/alb/model/LoadBalancerJoinSecurityGroupRequest.h>

using AlibabaCloud::Alb::Model::LoadBalancerJoinSecurityGroupRequest;

LoadBalancerJoinSecurityGroupRequest::LoadBalancerJoinSecurityGroupRequest()
    : RpcServiceRequest("alb", "2020-06-16", "LoadBalancerJoinSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

LoadBalancerJoinSecurityGroupRequest::~LoadBalancerJoinSecurityGroupRequest() {}

std::string LoadBalancerJoinSecurityGroupRequest::getClientToken() const {
  return clientToken_;
}

void LoadBalancerJoinSecurityGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool LoadBalancerJoinSecurityGroupRequest::getDryRun() const {
  return dryRun_;
}

void LoadBalancerJoinSecurityGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<LoadBalancerJoinSecurityGroupRequest::std::string> LoadBalancerJoinSecurityGroupRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void LoadBalancerJoinSecurityGroupRequest::setSecurityGroupIds(const std::vector<LoadBalancerJoinSecurityGroupRequest::std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
  for(int dep1 = 0; dep1 != securityGroupIds.size(); dep1++) {
    setParameter(std::string("SecurityGroupIds") + "." + std::to_string(dep1 + 1), securityGroupIds[dep1]);
  }
}

std::string LoadBalancerJoinSecurityGroupRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void LoadBalancerJoinSecurityGroupRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

