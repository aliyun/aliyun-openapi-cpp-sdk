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

#include <alibabacloud/nas/model/CancelDataFlowSubTaskRequest.h>

using AlibabaCloud::NAS::Model::CancelDataFlowSubTaskRequest;

CancelDataFlowSubTaskRequest::CancelDataFlowSubTaskRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CancelDataFlowSubTask") {
  setMethod(HttpRequest::Method::Post);
}

CancelDataFlowSubTaskRequest::~CancelDataFlowSubTaskRequest() {}

std::string CancelDataFlowSubTaskRequest::getClientToken() const {
  return clientToken_;
}

void CancelDataFlowSubTaskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CancelDataFlowSubTaskRequest::getDataFlowTaskId() const {
  return dataFlowTaskId_;
}

void CancelDataFlowSubTaskRequest::setDataFlowTaskId(const std::string &dataFlowTaskId) {
  dataFlowTaskId_ = dataFlowTaskId;
  setParameter(std::string("DataFlowTaskId"), dataFlowTaskId);
}

std::string CancelDataFlowSubTaskRequest::getDataFlowSubTaskId() const {
  return dataFlowSubTaskId_;
}

void CancelDataFlowSubTaskRequest::setDataFlowSubTaskId(const std::string &dataFlowSubTaskId) {
  dataFlowSubTaskId_ = dataFlowSubTaskId;
  setParameter(std::string("DataFlowSubTaskId"), dataFlowSubTaskId);
}

std::string CancelDataFlowSubTaskRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CancelDataFlowSubTaskRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CancelDataFlowSubTaskRequest::getDryRun() const {
  return dryRun_;
}

void CancelDataFlowSubTaskRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CancelDataFlowSubTaskRequest::getDataFlowId() const {
  return dataFlowId_;
}

void CancelDataFlowSubTaskRequest::setDataFlowId(const std::string &dataFlowId) {
  dataFlowId_ = dataFlowId;
  setParameter(std::string("DataFlowId"), dataFlowId);
}

