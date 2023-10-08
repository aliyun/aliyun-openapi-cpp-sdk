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

#include <alibabacloud/nlb/model/EnableLoadBalancerIpv6InternetRequest.h>

using AlibabaCloud::Nlb::Model::EnableLoadBalancerIpv6InternetRequest;

EnableLoadBalancerIpv6InternetRequest::EnableLoadBalancerIpv6InternetRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "EnableLoadBalancerIpv6Internet") {
  setMethod(HttpRequest::Method::Post);
}

EnableLoadBalancerIpv6InternetRequest::~EnableLoadBalancerIpv6InternetRequest() {}

std::string EnableLoadBalancerIpv6InternetRequest::getClientToken() const {
  return clientToken_;
}

void EnableLoadBalancerIpv6InternetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string EnableLoadBalancerIpv6InternetRequest::getRegionId() const {
  return regionId_;
}

void EnableLoadBalancerIpv6InternetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool EnableLoadBalancerIpv6InternetRequest::getDryRun() const {
  return dryRun_;
}

void EnableLoadBalancerIpv6InternetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string EnableLoadBalancerIpv6InternetRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void EnableLoadBalancerIpv6InternetRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

