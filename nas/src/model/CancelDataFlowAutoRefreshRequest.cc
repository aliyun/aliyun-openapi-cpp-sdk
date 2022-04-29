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

#include <alibabacloud/nas/model/CancelDataFlowAutoRefreshRequest.h>

using AlibabaCloud::NAS::Model::CancelDataFlowAutoRefreshRequest;

CancelDataFlowAutoRefreshRequest::CancelDataFlowAutoRefreshRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CancelDataFlowAutoRefresh") {
  setMethod(HttpRequest::Method::Post);
}

CancelDataFlowAutoRefreshRequest::~CancelDataFlowAutoRefreshRequest() {}

std::string CancelDataFlowAutoRefreshRequest::getClientToken() const {
  return clientToken_;
}

void CancelDataFlowAutoRefreshRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CancelDataFlowAutoRefreshRequest::getRefreshPath() const {
  return refreshPath_;
}

void CancelDataFlowAutoRefreshRequest::setRefreshPath(const std::string &refreshPath) {
  refreshPath_ = refreshPath;
  setParameter(std::string("RefreshPath"), refreshPath);
}

std::string CancelDataFlowAutoRefreshRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CancelDataFlowAutoRefreshRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CancelDataFlowAutoRefreshRequest::getDryRun() const {
  return dryRun_;
}

void CancelDataFlowAutoRefreshRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CancelDataFlowAutoRefreshRequest::getDataFlowId() const {
  return dataFlowId_;
}

void CancelDataFlowAutoRefreshRequest::setDataFlowId(const std::string &dataFlowId) {
  dataFlowId_ = dataFlowId;
  setParameter(std::string("DataFlowId"), dataFlowId);
}

