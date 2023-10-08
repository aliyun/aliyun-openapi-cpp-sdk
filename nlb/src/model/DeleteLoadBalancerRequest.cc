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

#include <alibabacloud/nlb/model/DeleteLoadBalancerRequest.h>

using AlibabaCloud::Nlb::Model::DeleteLoadBalancerRequest;

DeleteLoadBalancerRequest::DeleteLoadBalancerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "DeleteLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLoadBalancerRequest::~DeleteLoadBalancerRequest() {}

std::string DeleteLoadBalancerRequest::getClientToken() const {
  return clientToken_;
}

void DeleteLoadBalancerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteLoadBalancerRequest::getRegionId() const {
  return regionId_;
}

void DeleteLoadBalancerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool DeleteLoadBalancerRequest::getDryRun() const {
  return dryRun_;
}

void DeleteLoadBalancerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteLoadBalancerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DeleteLoadBalancerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

