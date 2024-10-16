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

#include <alibabacloud/gwlb/model/GetLoadBalancerAttributeRequest.h>

using AlibabaCloud::Gwlb::Model::GetLoadBalancerAttributeRequest;

GetLoadBalancerAttributeRequest::GetLoadBalancerAttributeRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "GetLoadBalancerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

GetLoadBalancerAttributeRequest::~GetLoadBalancerAttributeRequest() {}

std::string GetLoadBalancerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void GetLoadBalancerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

