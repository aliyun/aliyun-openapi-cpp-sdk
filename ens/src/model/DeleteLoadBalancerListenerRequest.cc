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

#include <alibabacloud/ens/model/DeleteLoadBalancerListenerRequest.h>

using AlibabaCloud::Ens::Model::DeleteLoadBalancerListenerRequest;

DeleteLoadBalancerListenerRequest::DeleteLoadBalancerListenerRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeleteLoadBalancerListener") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLoadBalancerListenerRequest::~DeleteLoadBalancerListenerRequest() {}

int DeleteLoadBalancerListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void DeleteLoadBalancerListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string DeleteLoadBalancerListenerRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void DeleteLoadBalancerListenerRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string DeleteLoadBalancerListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DeleteLoadBalancerListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

