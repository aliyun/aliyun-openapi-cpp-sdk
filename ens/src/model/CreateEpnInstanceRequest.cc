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

#include <alibabacloud/ens/model/CreateEpnInstanceRequest.h>

using AlibabaCloud::Ens::Model::CreateEpnInstanceRequest;

CreateEpnInstanceRequest::CreateEpnInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateEpnInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateEpnInstanceRequest::~CreateEpnInstanceRequest() {}

std::string CreateEpnInstanceRequest::getNetworkingModel() const {
  return networkingModel_;
}

void CreateEpnInstanceRequest::setNetworkingModel(const std::string &networkingModel) {
  networkingModel_ = networkingModel;
  setParameter(std::string("NetworkingModel"), networkingModel);
}

int CreateEpnInstanceRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateEpnInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string CreateEpnInstanceRequest::getEPNInstanceType() const {
  return ePNInstanceType_;
}

void CreateEpnInstanceRequest::setEPNInstanceType(const std::string &ePNInstanceType) {
  ePNInstanceType_ = ePNInstanceType;
  setParameter(std::string("EPNInstanceType"), ePNInstanceType);
}

std::string CreateEpnInstanceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateEpnInstanceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateEpnInstanceRequest::getEPNInstanceName() const {
  return ePNInstanceName_;
}

void CreateEpnInstanceRequest::setEPNInstanceName(const std::string &ePNInstanceName) {
  ePNInstanceName_ = ePNInstanceName;
  setParameter(std::string("EPNInstanceName"), ePNInstanceName);
}

