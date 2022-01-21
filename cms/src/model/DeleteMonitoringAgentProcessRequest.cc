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

#include <alibabacloud/cms/model/DeleteMonitoringAgentProcessRequest.h>

using AlibabaCloud::Cms::Model::DeleteMonitoringAgentProcessRequest;

DeleteMonitoringAgentProcessRequest::DeleteMonitoringAgentProcessRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DeleteMonitoringAgentProcess") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMonitoringAgentProcessRequest::~DeleteMonitoringAgentProcessRequest() {}

std::string DeleteMonitoringAgentProcessRequest::getProcessName() const {
  return processName_;
}

void DeleteMonitoringAgentProcessRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setParameter(std::string("ProcessName"), processName);
}

std::string DeleteMonitoringAgentProcessRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteMonitoringAgentProcessRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteMonitoringAgentProcessRequest::getProcessId() const {
  return processId_;
}

void DeleteMonitoringAgentProcessRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setParameter(std::string("ProcessId"), processId);
}

