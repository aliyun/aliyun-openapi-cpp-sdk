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

#include <alibabacloud/cms/model/PutMonitoringConfigRequest.h>

using AlibabaCloud::Cms::Model::PutMonitoringConfigRequest;

PutMonitoringConfigRequest::PutMonitoringConfigRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutMonitoringConfig") {
  setMethod(HttpRequest::Method::Post);
}

PutMonitoringConfigRequest::~PutMonitoringConfigRequest() {}

bool PutMonitoringConfigRequest::getAutoInstall() const {
  return autoInstall_;
}

void PutMonitoringConfigRequest::setAutoInstall(bool autoInstall) {
  autoInstall_ = autoInstall;
  setParameter(std::string("AutoInstall"), autoInstall ? "true" : "false");
}

bool PutMonitoringConfigRequest::getEnableInstallAgentNewECS() const {
  return enableInstallAgentNewECS_;
}

void PutMonitoringConfigRequest::setEnableInstallAgentNewECS(bool enableInstallAgentNewECS) {
  enableInstallAgentNewECS_ = enableInstallAgentNewECS;
  setParameter(std::string("EnableInstallAgentNewECS"), enableInstallAgentNewECS ? "true" : "false");
}

