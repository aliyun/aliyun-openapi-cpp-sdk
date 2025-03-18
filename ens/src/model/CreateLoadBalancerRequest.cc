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

#include <alibabacloud/ens/model/CreateLoadBalancerRequest.h>

using AlibabaCloud::Ens::Model::CreateLoadBalancerRequest;

CreateLoadBalancerRequest::CreateLoadBalancerRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerRequest::~CreateLoadBalancerRequest() {}

std::string CreateLoadBalancerRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void CreateLoadBalancerRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setParameter(std::string("LoadBalancerName"), loadBalancerName);
}

std::string CreateLoadBalancerRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateLoadBalancerRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateLoadBalancerRequest::getLoadBalancerSpec() const {
  return loadBalancerSpec_;
}

void CreateLoadBalancerRequest::setLoadBalancerSpec(const std::string &loadBalancerSpec) {
  loadBalancerSpec_ = loadBalancerSpec;
  setParameter(std::string("LoadBalancerSpec"), loadBalancerSpec);
}

std::string CreateLoadBalancerRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateLoadBalancerRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateLoadBalancerRequest::getNetworkId() const {
  return networkId_;
}

void CreateLoadBalancerRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

std::string CreateLoadBalancerRequest::getClientToken() const {
  return clientToken_;
}

void CreateLoadBalancerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateLoadBalancerRequest::getPayType() const {
  return payType_;
}

void CreateLoadBalancerRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

