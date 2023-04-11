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

#include <alibabacloud/alb/model/DisableLoadBalancerIpv6InternetRequest.h>

using AlibabaCloud::Alb::Model::DisableLoadBalancerIpv6InternetRequest;

DisableLoadBalancerIpv6InternetRequest::DisableLoadBalancerIpv6InternetRequest()
    : RpcServiceRequest("alb", "2020-06-16", "DisableLoadBalancerIpv6Internet") {
  setMethod(HttpRequest::Method::Post);
}

DisableLoadBalancerIpv6InternetRequest::~DisableLoadBalancerIpv6InternetRequest() {}

std::string DisableLoadBalancerIpv6InternetRequest::getClientToken() const {
  return clientToken_;
}

void DisableLoadBalancerIpv6InternetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DisableLoadBalancerIpv6InternetRequest::getDryRun() const {
  return dryRun_;
}

void DisableLoadBalancerIpv6InternetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DisableLoadBalancerIpv6InternetRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DisableLoadBalancerIpv6InternetRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

