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

#include <alibabacloud/ens/model/RemoveVSwitchesFromEpnInstanceRequest.h>

using AlibabaCloud::Ens::Model::RemoveVSwitchesFromEpnInstanceRequest;

RemoveVSwitchesFromEpnInstanceRequest::RemoveVSwitchesFromEpnInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RemoveVSwitchesFromEpnInstance") {
  setMethod(HttpRequest::Method::Post);
}

RemoveVSwitchesFromEpnInstanceRequest::~RemoveVSwitchesFromEpnInstanceRequest() {}

std::string RemoveVSwitchesFromEpnInstanceRequest::getVSwitchesInfo() const {
  return vSwitchesInfo_;
}

void RemoveVSwitchesFromEpnInstanceRequest::setVSwitchesInfo(const std::string &vSwitchesInfo) {
  vSwitchesInfo_ = vSwitchesInfo;
  setParameter(std::string("VSwitchesInfo"), vSwitchesInfo);
}

std::string RemoveVSwitchesFromEpnInstanceRequest::getEPNInstanceId() const {
  return ePNInstanceId_;
}

void RemoveVSwitchesFromEpnInstanceRequest::setEPNInstanceId(const std::string &ePNInstanceId) {
  ePNInstanceId_ = ePNInstanceId;
  setParameter(std::string("EPNInstanceId"), ePNInstanceId);
}

