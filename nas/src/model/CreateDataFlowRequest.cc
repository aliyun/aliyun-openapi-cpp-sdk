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

#include <alibabacloud/nas/model/CreateDataFlowRequest.h>

using AlibabaCloud::NAS::Model::CreateDataFlowRequest;

CreateDataFlowRequest::CreateDataFlowRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateDataFlow") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataFlowRequest::~CreateDataFlowRequest() {}

std::string CreateDataFlowRequest::getAutoRefreshPolicy() const {
  return autoRefreshPolicy_;
}

void CreateDataFlowRequest::setAutoRefreshPolicy(const std::string &autoRefreshPolicy) {
  autoRefreshPolicy_ = autoRefreshPolicy;
  setParameter(std::string("AutoRefreshPolicy"), autoRefreshPolicy);
}

std::string CreateDataFlowRequest::getFsetId() const {
  return fsetId_;
}

void CreateDataFlowRequest::setFsetId(const std::string &fsetId) {
  fsetId_ = fsetId;
  setParameter(std::string("FsetId"), fsetId);
}

std::string CreateDataFlowRequest::getClientToken() const {
  return clientToken_;
}

void CreateDataFlowRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDataFlowRequest::getDescription() const {
  return description_;
}

void CreateDataFlowRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<CreateDataFlowRequest::AutoRefreshs> CreateDataFlowRequest::getAutoRefreshs() const {
  return autoRefreshs_;
}

void CreateDataFlowRequest::setAutoRefreshs(const std::vector<CreateDataFlowRequest::AutoRefreshs> &autoRefreshs) {
  autoRefreshs_ = autoRefreshs;
  for(int dep1 = 0; dep1 != autoRefreshs.size(); dep1++) {
  auto autoRefreshsObj = autoRefreshs.at(dep1);
  std::string autoRefreshsObjStr = std::string("AutoRefreshs") + "." + std::to_string(dep1 + 1);
    setParameter(autoRefreshsObjStr + ".RefreshPath", autoRefreshsObj.refreshPath);
  }
}

std::string CreateDataFlowRequest::getSourceSecurityType() const {
  return sourceSecurityType_;
}

void CreateDataFlowRequest::setSourceSecurityType(const std::string &sourceSecurityType) {
  sourceSecurityType_ = sourceSecurityType;
  setParameter(std::string("SourceSecurityType"), sourceSecurityType);
}

std::string CreateDataFlowRequest::getSourceStorage() const {
  return sourceStorage_;
}

void CreateDataFlowRequest::setSourceStorage(const std::string &sourceStorage) {
  sourceStorage_ = sourceStorage;
  setParameter(std::string("SourceStorage"), sourceStorage);
}

long CreateDataFlowRequest::getThroughput() const {
  return throughput_;
}

void CreateDataFlowRequest::setThroughput(long throughput) {
  throughput_ = throughput;
  setParameter(std::string("Throughput"), std::to_string(throughput));
}

std::string CreateDataFlowRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateDataFlowRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CreateDataFlowRequest::getDryRun() const {
  return dryRun_;
}

void CreateDataFlowRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long CreateDataFlowRequest::getAutoRefreshInterval() const {
  return autoRefreshInterval_;
}

void CreateDataFlowRequest::setAutoRefreshInterval(long autoRefreshInterval) {
  autoRefreshInterval_ = autoRefreshInterval;
  setParameter(std::string("AutoRefreshInterval"), std::to_string(autoRefreshInterval));
}

std::string CreateDataFlowRequest::getSourceStoragePath() const {
  return sourceStoragePath_;
}

void CreateDataFlowRequest::setSourceStoragePath(const std::string &sourceStoragePath) {
  sourceStoragePath_ = sourceStoragePath;
  setParameter(std::string("SourceStoragePath"), sourceStoragePath);
}

std::string CreateDataFlowRequest::getFileSystemPath() const {
  return fileSystemPath_;
}

void CreateDataFlowRequest::setFileSystemPath(const std::string &fileSystemPath) {
  fileSystemPath_ = fileSystemPath;
  setParameter(std::string("FileSystemPath"), fileSystemPath);
}

