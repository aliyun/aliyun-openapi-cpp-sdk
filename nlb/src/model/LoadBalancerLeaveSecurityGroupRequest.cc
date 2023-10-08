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

#include <alibabacloud/nlb/model/LoadBalancerLeaveSecurityGroupRequest.h>

using AlibabaCloud::Nlb::Model::LoadBalancerLeaveSecurityGroupRequest;

LoadBalancerLeaveSecurityGroupRequest::LoadBalancerLeaveSecurityGroupRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "LoadBalancerLeaveSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

LoadBalancerLeaveSecurityGroupRequest::~LoadBalancerLeaveSecurityGroupRequest() {}

std::string LoadBalancerLeaveSecurityGroupRequest::getClientToken() const {
  return clientToken_;
}

void LoadBalancerLeaveSecurityGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string LoadBalancerLeaveSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void LoadBalancerLeaveSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool LoadBalancerLeaveSecurityGroupRequest::getDryRun() const {
  return dryRun_;
}

void LoadBalancerLeaveSecurityGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<std::string> LoadBalancerLeaveSecurityGroupRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void LoadBalancerLeaveSecurityGroupRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::string LoadBalancerLeaveSecurityGroupRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void LoadBalancerLeaveSecurityGroupRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

