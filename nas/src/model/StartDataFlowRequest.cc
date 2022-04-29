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

#include <alibabacloud/nas/model/StartDataFlowRequest.h>

using AlibabaCloud::NAS::Model::StartDataFlowRequest;

StartDataFlowRequest::StartDataFlowRequest()
    : RpcServiceRequest("nas", "2017-06-26", "StartDataFlow") {
  setMethod(HttpRequest::Method::Post);
}

StartDataFlowRequest::~StartDataFlowRequest() {}

std::string StartDataFlowRequest::getClientToken() const {
  return clientToken_;
}

void StartDataFlowRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string StartDataFlowRequest::getFileSystemId() const {
  return fileSystemId_;
}

void StartDataFlowRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool StartDataFlowRequest::getDryRun() const {
  return dryRun_;
}

void StartDataFlowRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string StartDataFlowRequest::getDataFlowId() const {
  return dataFlowId_;
}

void StartDataFlowRequest::setDataFlowId(const std::string &dataFlowId) {
  dataFlowId_ = dataFlowId;
  setParameter(std::string("DataFlowId"), dataFlowId);
}

