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

#include <alibabacloud/sas/model/DescribeBackupMachineStatusRequest.h>

using AlibabaCloud::Sas::Model::DescribeBackupMachineStatusRequest;

DescribeBackupMachineStatusRequest::DescribeBackupMachineStatusRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeBackupMachineStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupMachineStatusRequest::~DescribeBackupMachineStatusRequest() {}

long DescribeBackupMachineStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupMachineStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackupMachineStatusRequest::getUuid() const {
  return uuid_;
}

void DescribeBackupMachineStatusRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeBackupMachineStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeBackupMachineStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeBackupMachineStatusRequest::getPolicyId() const {
  return policyId_;
}

void DescribeBackupMachineStatusRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string DescribeBackupMachineStatusRequest::getPolicyVersion() const {
  return policyVersion_;
}

void DescribeBackupMachineStatusRequest::setPolicyVersion(const std::string &policyVersion) {
  policyVersion_ = policyVersion;
  setParameter(std::string("PolicyVersion"), policyVersion);
}

