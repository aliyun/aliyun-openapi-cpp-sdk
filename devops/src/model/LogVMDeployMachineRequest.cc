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

#include <alibabacloud/devops/model/LogVMDeployMachineRequest.h>

using AlibabaCloud::Devops::Model::LogVMDeployMachineRequest;

LogVMDeployMachineRequest::LogVMDeployMachineRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines/[pipelineId]/deploy/[deployOrderId]/machine/[machineSn]/log"};
  setMethod(HttpRequest::Method::Get);
}

LogVMDeployMachineRequest::~LogVMDeployMachineRequest() {}

long LogVMDeployMachineRequest::getPipelineId() const {
  return pipelineId_;
}

void LogVMDeployMachineRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string LogVMDeployMachineRequest::getOrganizationId() const {
  return organizationId_;
}

void LogVMDeployMachineRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string LogVMDeployMachineRequest::getMachineSn() const {
  return machineSn_;
}

void LogVMDeployMachineRequest::setMachineSn(const std::string &machineSn) {
  machineSn_ = machineSn;
  setParameter(std::string("machineSn"), machineSn);
}

long LogVMDeployMachineRequest::getDeployOrderId() const {
  return deployOrderId_;
}

void LogVMDeployMachineRequest::setDeployOrderId(long deployOrderId) {
  deployOrderId_ = deployOrderId;
  setParameter(std::string("deployOrderId"), std::to_string(deployOrderId));
}

