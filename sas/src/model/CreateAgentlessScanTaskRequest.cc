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

#include <alibabacloud/sas/model/CreateAgentlessScanTaskRequest.h>

using AlibabaCloud::Sas::Model::CreateAgentlessScanTaskRequest;

CreateAgentlessScanTaskRequest::CreateAgentlessScanTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateAgentlessScanTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateAgentlessScanTaskRequest::~CreateAgentlessScanTaskRequest() {}

int CreateAgentlessScanTaskRequest::getTargetType() const {
  return targetType_;
}

void CreateAgentlessScanTaskRequest::setTargetType(int targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), std::to_string(targetType));
}

std::string CreateAgentlessScanTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateAgentlessScanTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> CreateAgentlessScanTaskRequest::getUuidList() const {
  return uuidList_;
}

void CreateAgentlessScanTaskRequest::setUuidList(const std::vector<std::string> &uuidList) {
  uuidList_ = uuidList;
}

bool CreateAgentlessScanTaskRequest::getScanDataDisk() const {
  return scanDataDisk_;
}

void CreateAgentlessScanTaskRequest::setScanDataDisk(bool scanDataDisk) {
  scanDataDisk_ = scanDataDisk;
  setParameter(std::string("ScanDataDisk"), scanDataDisk ? "true" : "false");
}

bool CreateAgentlessScanTaskRequest::getReleaseAfterScan() const {
  return releaseAfterScan_;
}

void CreateAgentlessScanTaskRequest::setReleaseAfterScan(bool releaseAfterScan) {
  releaseAfterScan_ = releaseAfterScan;
  setParameter(std::string("ReleaseAfterScan"), releaseAfterScan ? "true" : "false");
}

int CreateAgentlessScanTaskRequest::getAutoDeleteDays() const {
  return autoDeleteDays_;
}

void CreateAgentlessScanTaskRequest::setAutoDeleteDays(int autoDeleteDays) {
  autoDeleteDays_ = autoDeleteDays;
  setParameter(std::string("AutoDeleteDays"), std::to_string(autoDeleteDays));
}

