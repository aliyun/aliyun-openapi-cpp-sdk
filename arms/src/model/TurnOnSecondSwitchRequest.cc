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

#include <alibabacloud/arms/model/TurnOnSecondSwitchRequest.h>

using AlibabaCloud::ARMS::Model::TurnOnSecondSwitchRequest;

TurnOnSecondSwitchRequest::TurnOnSecondSwitchRequest()
    : RpcServiceRequest("arms", "2019-08-08", "TurnOnSecondSwitch") {
  setMethod(HttpRequest::Method::Get);
}

TurnOnSecondSwitchRequest::~TurnOnSecondSwitchRequest() {}

std::string TurnOnSecondSwitchRequest::getPid() const {
  return pid_;
}

void TurnOnSecondSwitchRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

long TurnOnSecondSwitchRequest::getReleaseStartTime() const {
  return releaseStartTime_;
}

void TurnOnSecondSwitchRequest::setReleaseStartTime(long releaseStartTime) {
  releaseStartTime_ = releaseStartTime;
  setParameter(std::string("ReleaseStartTime"), std::to_string(releaseStartTime));
}

std::string TurnOnSecondSwitchRequest::getProxyUserId() const {
  return proxyUserId_;
}

void TurnOnSecondSwitchRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

