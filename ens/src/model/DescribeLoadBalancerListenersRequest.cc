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

#include <alibabacloud/ens/model/DescribeLoadBalancerListenersRequest.h>

using AlibabaCloud::Ens::Model::DescribeLoadBalancerListenersRequest;

DescribeLoadBalancerListenersRequest::DescribeLoadBalancerListenersRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeLoadBalancerListeners") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancerListenersRequest::~DescribeLoadBalancerListenersRequest() {}

std::string DescribeLoadBalancerListenersRequest::getDescription() const {
  return description_;
}

void DescribeLoadBalancerListenersRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int DescribeLoadBalancerListenersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLoadBalancerListenersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeLoadBalancerListenersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLoadBalancerListenersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeLoadBalancerListenersRequest::getListenerPort() const {
  return listenerPort_;
}

void DescribeLoadBalancerListenersRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string DescribeLoadBalancerListenersRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeLoadBalancerListenersRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

