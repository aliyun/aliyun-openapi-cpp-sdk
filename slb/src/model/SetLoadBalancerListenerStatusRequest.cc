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

#include <alibabacloud/slb/model/SetLoadBalancerListenerStatusRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerListenerStatusRequest;

SetLoadBalancerListenerStatusRequest::SetLoadBalancerListenerStatusRequest()
    : RpcServiceRequest("slb", "2013-02-21", "SetLoadBalancerListenerStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerListenerStatusRequest::~SetLoadBalancerListenerStatusRequest() {}

int SetLoadBalancerListenerStatusRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerListenerStatusRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string SetLoadBalancerListenerStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerListenerStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SetLoadBalancerListenerStatusRequest::getHostId() const {
  return hostId_;
}

void SetLoadBalancerListenerStatusRequest::setHostId(const std::string &hostId) {
  hostId_ = hostId;
  setParameter(std::string("HostId"), hostId);
}

std::string SetLoadBalancerListenerStatusRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerListenerStatusRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SetLoadBalancerListenerStatusRequest::getListenerStatus() const {
  return listenerStatus_;
}

void SetLoadBalancerListenerStatusRequest::setListenerStatus(const std::string &listenerStatus) {
  listenerStatus_ = listenerStatus;
  setParameter(std::string("ListenerStatus"), listenerStatus);
}

std::string SetLoadBalancerListenerStatusRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetLoadBalancerListenerStatusRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetLoadBalancerListenerStatusRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerListenerStatusRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

