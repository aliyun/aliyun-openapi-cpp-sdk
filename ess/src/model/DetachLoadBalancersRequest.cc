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

#include <alibabacloud/ess/model/DetachLoadBalancersRequest.h>

using AlibabaCloud::Ess::Model::DetachLoadBalancersRequest;

DetachLoadBalancersRequest::DetachLoadBalancersRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DetachLoadBalancers") {
  setMethod(HttpRequest::Method::Post);
}

DetachLoadBalancersRequest::~DetachLoadBalancersRequest() {}

std::string DetachLoadBalancersRequest::getClientToken() const {
  return clientToken_;
}

void DetachLoadBalancersRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachLoadBalancersRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DetachLoadBalancersRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DetachLoadBalancersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DetachLoadBalancersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<std::string> DetachLoadBalancersRequest::getLoadBalancer() const {
  return loadBalancer_;
}

void DetachLoadBalancersRequest::setLoadBalancer(const std::vector<std::string> &loadBalancer) {
  loadBalancer_ = loadBalancer;
}

std::string DetachLoadBalancersRequest::getRegionId() const {
  return regionId_;
}

void DetachLoadBalancersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachLoadBalancersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachLoadBalancersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DetachLoadBalancersRequest::getOwnerId() const {
  return ownerId_;
}

void DetachLoadBalancersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DetachLoadBalancersRequest::getAsync() const {
  return async_;
}

void DetachLoadBalancersRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

bool DetachLoadBalancersRequest::getForceDetach() const {
  return forceDetach_;
}

void DetachLoadBalancersRequest::setForceDetach(bool forceDetach) {
  forceDetach_ = forceDetach;
  setParameter(std::string("ForceDetach"), forceDetach ? "true" : "false");
}

