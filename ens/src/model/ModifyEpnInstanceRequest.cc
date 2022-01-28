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

#include <alibabacloud/ens/model/ModifyEpnInstanceRequest.h>

using AlibabaCloud::Ens::Model::ModifyEpnInstanceRequest;

ModifyEpnInstanceRequest::ModifyEpnInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyEpnInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEpnInstanceRequest::~ModifyEpnInstanceRequest() {}

std::string ModifyEpnInstanceRequest::getNetworkingModel() const {
  return networkingModel_;
}

void ModifyEpnInstanceRequest::setNetworkingModel(const std::string &networkingModel) {
  networkingModel_ = networkingModel;
  setParameter(std::string("NetworkingModel"), networkingModel);
}

int ModifyEpnInstanceRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void ModifyEpnInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string ModifyEpnInstanceRequest::getEPNInstanceId() const {
  return ePNInstanceId_;
}

void ModifyEpnInstanceRequest::setEPNInstanceId(const std::string &ePNInstanceId) {
  ePNInstanceId_ = ePNInstanceId;
  setParameter(std::string("EPNInstanceId"), ePNInstanceId);
}

std::string ModifyEpnInstanceRequest::getEPNInstanceName() const {
  return ePNInstanceName_;
}

void ModifyEpnInstanceRequest::setEPNInstanceName(const std::string &ePNInstanceName) {
  ePNInstanceName_ = ePNInstanceName;
  setParameter(std::string("EPNInstanceName"), ePNInstanceName);
}

