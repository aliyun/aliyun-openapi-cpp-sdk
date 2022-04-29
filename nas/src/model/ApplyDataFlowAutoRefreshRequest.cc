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

#include <alibabacloud/nas/model/ApplyDataFlowAutoRefreshRequest.h>

using AlibabaCloud::NAS::Model::ApplyDataFlowAutoRefreshRequest;

ApplyDataFlowAutoRefreshRequest::ApplyDataFlowAutoRefreshRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ApplyDataFlowAutoRefresh") {
  setMethod(HttpRequest::Method::Post);
}

ApplyDataFlowAutoRefreshRequest::~ApplyDataFlowAutoRefreshRequest() {}

std::string ApplyDataFlowAutoRefreshRequest::getAutoRefreshPolicy() const {
  return autoRefreshPolicy_;
}

void ApplyDataFlowAutoRefreshRequest::setAutoRefreshPolicy(const std::string &autoRefreshPolicy) {
  autoRefreshPolicy_ = autoRefreshPolicy;
  setParameter(std::string("AutoRefreshPolicy"), autoRefreshPolicy);
}

std::string ApplyDataFlowAutoRefreshRequest::getClientToken() const {
  return clientToken_;
}

void ApplyDataFlowAutoRefreshRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs> ApplyDataFlowAutoRefreshRequest::getAutoRefreshs() const {
  return autoRefreshs_;
}

void ApplyDataFlowAutoRefreshRequest::setAutoRefreshs(const std::vector<ApplyDataFlowAutoRefreshRequest::AutoRefreshs> &autoRefreshs) {
  autoRefreshs_ = autoRefreshs;
  for(int dep1 = 0; dep1 != autoRefreshs.size(); dep1++) {
  auto autoRefreshsObj = autoRefreshs.at(dep1);
  std::string autoRefreshsObjStr = std::string("AutoRefreshs") + "." + std::to_string(dep1 + 1);
    setParameter(autoRefreshsObjStr + ".RefreshPath", autoRefreshsObj.refreshPath);
  }
}

std::string ApplyDataFlowAutoRefreshRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ApplyDataFlowAutoRefreshRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool ApplyDataFlowAutoRefreshRequest::getDryRun() const {
  return dryRun_;
}

void ApplyDataFlowAutoRefreshRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ApplyDataFlowAutoRefreshRequest::getDataFlowId() const {
  return dataFlowId_;
}

void ApplyDataFlowAutoRefreshRequest::setDataFlowId(const std::string &dataFlowId) {
  dataFlowId_ = dataFlowId;
  setParameter(std::string("DataFlowId"), dataFlowId);
}

long ApplyDataFlowAutoRefreshRequest::getAutoRefreshInterval() const {
  return autoRefreshInterval_;
}

void ApplyDataFlowAutoRefreshRequest::setAutoRefreshInterval(long autoRefreshInterval) {
  autoRefreshInterval_ = autoRefreshInterval;
  setParameter(std::string("AutoRefreshInterval"), std::to_string(autoRefreshInterval));
}

