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

#include <alibabacloud/nlb/model/LoadBalancerJoinSecurityGroupRequest.h>

using AlibabaCloud::Nlb::Model::LoadBalancerJoinSecurityGroupRequest;

LoadBalancerJoinSecurityGroupRequest::LoadBalancerJoinSecurityGroupRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "LoadBalancerJoinSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

LoadBalancerJoinSecurityGroupRequest::~LoadBalancerJoinSecurityGroupRequest() {}

std::string LoadBalancerJoinSecurityGroupRequest::getClientToken() const {
  return clientToken_;
}

void LoadBalancerJoinSecurityGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string LoadBalancerJoinSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void LoadBalancerJoinSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool LoadBalancerJoinSecurityGroupRequest::getDryRun() const {
  return dryRun_;
}

void LoadBalancerJoinSecurityGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<std::string> LoadBalancerJoinSecurityGroupRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void LoadBalancerJoinSecurityGroupRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::string LoadBalancerJoinSecurityGroupRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void LoadBalancerJoinSecurityGroupRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

