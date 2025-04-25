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

#include <alibabacloud/ess/model/AttachLoadBalancersRequest.h>

using AlibabaCloud::Ess::Model::AttachLoadBalancersRequest;

AttachLoadBalancersRequest::AttachLoadBalancersRequest()
    : RpcServiceRequest("ess", "2014-08-28", "AttachLoadBalancers") {
  setMethod(HttpRequest::Method::Post);
}

AttachLoadBalancersRequest::~AttachLoadBalancersRequest() {}

std::string AttachLoadBalancersRequest::getClientToken() const {
  return clientToken_;
}

void AttachLoadBalancersRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachLoadBalancersRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void AttachLoadBalancersRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

bool AttachLoadBalancersRequest::getForceAttach() const {
  return forceAttach_;
}

void AttachLoadBalancersRequest::setForceAttach(bool forceAttach) {
  forceAttach_ = forceAttach;
  setParameter(std::string("ForceAttach"), forceAttach ? "true" : "false");
}

std::vector<AttachLoadBalancersRequest::LoadBalancerConfig> AttachLoadBalancersRequest::getLoadBalancerConfig() const {
  return loadBalancerConfig_;
}

void AttachLoadBalancersRequest::setLoadBalancerConfig(const std::vector<AttachLoadBalancersRequest::LoadBalancerConfig> &loadBalancerConfig) {
  loadBalancerConfig_ = loadBalancerConfig;
  for(int dep1 = 0; dep1 != loadBalancerConfig.size(); dep1++) {
  auto loadBalancerConfigObj = loadBalancerConfig.at(dep1);
  std::string loadBalancerConfigObjStr = std::string("LoadBalancerConfig") + "." + std::to_string(dep1 + 1);
    setParameter(loadBalancerConfigObjStr + ".LoadBalancerId", loadBalancerConfigObj.loadBalancerId);
    setParameter(loadBalancerConfigObjStr + ".Weight", std::to_string(loadBalancerConfigObj.weight));
  }
}

std::string AttachLoadBalancersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AttachLoadBalancersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<std::string> AttachLoadBalancersRequest::getLoadBalancer() const {
  return loadBalancer_;
}

void AttachLoadBalancersRequest::setLoadBalancer(const std::vector<std::string> &loadBalancer) {
  loadBalancer_ = loadBalancer;
}

std::string AttachLoadBalancersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachLoadBalancersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AttachLoadBalancersRequest::getOwnerId() const {
  return ownerId_;
}

void AttachLoadBalancersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool AttachLoadBalancersRequest::getAsync() const {
  return async_;
}

void AttachLoadBalancersRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

