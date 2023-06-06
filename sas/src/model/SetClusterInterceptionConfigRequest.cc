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

#include <alibabacloud/sas/model/SetClusterInterceptionConfigRequest.h>

using AlibabaCloud::Sas::Model::SetClusterInterceptionConfigRequest;

SetClusterInterceptionConfigRequest::SetClusterInterceptionConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "SetClusterInterceptionConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetClusterInterceptionConfigRequest::~SetClusterInterceptionConfigRequest() {}

std::string SetClusterInterceptionConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void SetClusterInterceptionConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string SetClusterInterceptionConfigRequest::getClusterIds() const {
  return clusterIds_;
}

void SetClusterInterceptionConfigRequest::setClusterIds(const std::string &clusterIds) {
  clusterIds_ = clusterIds;
  setParameter(std::string("ClusterIds"), clusterIds);
}

int SetClusterInterceptionConfigRequest::getSwitchType() const {
  return switchType_;
}

void SetClusterInterceptionConfigRequest::setSwitchType(int switchType) {
  switchType_ = switchType;
  setParameter(std::string("SwitchType"), std::to_string(switchType));
}

int SetClusterInterceptionConfigRequest::getSwitchOn() const {
  return switchOn_;
}

void SetClusterInterceptionConfigRequest::setSwitchOn(int switchOn) {
  switchOn_ = switchOn;
  setParameter(std::string("SwitchOn"), std::to_string(switchOn));
}

