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

#include <alibabacloud/ens/model/SetLoadBalancerStatusRequest.h>

using AlibabaCloud::Ens::Model::SetLoadBalancerStatusRequest;

SetLoadBalancerStatusRequest::SetLoadBalancerStatusRequest()
    : RpcServiceRequest("ens", "2017-11-10", "SetLoadBalancerStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerStatusRequest::~SetLoadBalancerStatusRequest() {}

std::string SetLoadBalancerStatusRequest::getLoadBalancerStatus() const {
  return loadBalancerStatus_;
}

void SetLoadBalancerStatusRequest::setLoadBalancerStatus(const std::string &loadBalancerStatus) {
  loadBalancerStatus_ = loadBalancerStatus;
  setParameter(std::string("LoadBalancerStatus"), loadBalancerStatus);
}

std::string SetLoadBalancerStatusRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerStatusRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

