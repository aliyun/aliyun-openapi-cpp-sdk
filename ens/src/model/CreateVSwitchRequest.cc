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

#include <alibabacloud/ens/model/CreateVSwitchRequest.h>

using AlibabaCloud::Ens::Model::CreateVSwitchRequest;

CreateVSwitchRequest::CreateVSwitchRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateVSwitch") {
  setMethod(HttpRequest::Method::Post);
}

CreateVSwitchRequest::~CreateVSwitchRequest() {}

std::string CreateVSwitchRequest::getDescription() const {
  return description_;
}

void CreateVSwitchRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateVSwitchRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateVSwitchRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateVSwitchRequest::getVSwitchName() const {
  return vSwitchName_;
}

void CreateVSwitchRequest::setVSwitchName(const std::string &vSwitchName) {
  vSwitchName_ = vSwitchName;
  setParameter(std::string("VSwitchName"), vSwitchName);
}

std::string CreateVSwitchRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateVSwitchRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

std::string CreateVSwitchRequest::getNetworkId() const {
  return networkId_;
}

void CreateVSwitchRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

