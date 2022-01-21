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

#include <alibabacloud/cms/model/CreateMonitorAgentProcessRequest.h>

using AlibabaCloud::Cms::Model::CreateMonitorAgentProcessRequest;

CreateMonitorAgentProcessRequest::CreateMonitorAgentProcessRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateMonitorAgentProcess") {
  setMethod(HttpRequest::Method::Post);
}

CreateMonitorAgentProcessRequest::~CreateMonitorAgentProcessRequest() {}

std::string CreateMonitorAgentProcessRequest::getProcessName() const {
  return processName_;
}

void CreateMonitorAgentProcessRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setParameter(std::string("ProcessName"), processName);
}

std::string CreateMonitorAgentProcessRequest::getInstanceId() const {
  return instanceId_;
}

void CreateMonitorAgentProcessRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateMonitorAgentProcessRequest::getProcessUser() const {
  return processUser_;
}

void CreateMonitorAgentProcessRequest::setProcessUser(const std::string &processUser) {
  processUser_ = processUser;
  setParameter(std::string("ProcessUser"), processUser);
}

