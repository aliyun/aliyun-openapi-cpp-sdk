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

#include <alibabacloud/ens/model/CreateNatGatewayRequest.h>

using AlibabaCloud::Ens::Model::CreateNatGatewayRequest;

CreateNatGatewayRequest::CreateNatGatewayRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateNatGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateNatGatewayRequest::~CreateNatGatewayRequest() {}

std::string CreateNatGatewayRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateNatGatewayRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateNatGatewayRequest::getInstanceType() const {
  return instanceType_;
}

void CreateNatGatewayRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateNatGatewayRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateNatGatewayRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateNatGatewayRequest::getName() const {
  return name_;
}

void CreateNatGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateNatGatewayRequest::getNetworkId() const {
  return networkId_;
}

void CreateNatGatewayRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

