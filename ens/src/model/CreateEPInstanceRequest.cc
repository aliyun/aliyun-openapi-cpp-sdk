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

#include <alibabacloud/ens/model/CreateEPInstanceRequest.h>

using AlibabaCloud::Ens::Model::CreateEPInstanceRequest;

CreateEPInstanceRequest::CreateEPInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateEPInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateEPInstanceRequest::~CreateEPInstanceRequest() {}

std::string CreateEPInstanceRequest::getNetworkingModel() const {
  return networkingModel_;
}

void CreateEPInstanceRequest::setNetworkingModel(const std::string &networkingModel) {
  networkingModel_ = networkingModel;
  setParameter(std::string("NetworkingModel"), networkingModel);
}

int CreateEPInstanceRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateEPInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string CreateEPInstanceRequest::getEPNInstanceType() const {
  return ePNInstanceType_;
}

void CreateEPInstanceRequest::setEPNInstanceType(const std::string &ePNInstanceType) {
  ePNInstanceType_ = ePNInstanceType;
  setParameter(std::string("EPNInstanceType"), ePNInstanceType);
}

std::string CreateEPInstanceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateEPInstanceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateEPInstanceRequest::getEPNInstanceName() const {
  return ePNInstanceName_;
}

void CreateEPInstanceRequest::setEPNInstanceName(const std::string &ePNInstanceName) {
  ePNInstanceName_ = ePNInstanceName;
  setParameter(std::string("EPNInstanceName"), ePNInstanceName);
}

