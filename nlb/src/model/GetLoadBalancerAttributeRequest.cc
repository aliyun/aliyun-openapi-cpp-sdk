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

#include <alibabacloud/nlb/model/GetLoadBalancerAttributeRequest.h>

using AlibabaCloud::Nlb::Model::GetLoadBalancerAttributeRequest;

GetLoadBalancerAttributeRequest::GetLoadBalancerAttributeRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "GetLoadBalancerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

GetLoadBalancerAttributeRequest::~GetLoadBalancerAttributeRequest() {}

std::string GetLoadBalancerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void GetLoadBalancerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetLoadBalancerAttributeRequest::getRegionId() const {
  return regionId_;
}

void GetLoadBalancerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool GetLoadBalancerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void GetLoadBalancerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string GetLoadBalancerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void GetLoadBalancerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

