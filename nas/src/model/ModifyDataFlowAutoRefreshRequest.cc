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

#include <alibabacloud/nas/model/ModifyDataFlowAutoRefreshRequest.h>

using AlibabaCloud::NAS::Model::ModifyDataFlowAutoRefreshRequest;

ModifyDataFlowAutoRefreshRequest::ModifyDataFlowAutoRefreshRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyDataFlowAutoRefresh") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDataFlowAutoRefreshRequest::~ModifyDataFlowAutoRefreshRequest() {}

std::string ModifyDataFlowAutoRefreshRequest::getAutoRefreshPolicy() const {
  return autoRefreshPolicy_;
}

void ModifyDataFlowAutoRefreshRequest::setAutoRefreshPolicy(const std::string &autoRefreshPolicy) {
  autoRefreshPolicy_ = autoRefreshPolicy;
  setParameter(std::string("AutoRefreshPolicy"), autoRefreshPolicy);
}

std::string ModifyDataFlowAutoRefreshRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDataFlowAutoRefreshRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDataFlowAutoRefreshRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyDataFlowAutoRefreshRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool ModifyDataFlowAutoRefreshRequest::getDryRun() const {
  return dryRun_;
}

void ModifyDataFlowAutoRefreshRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyDataFlowAutoRefreshRequest::getDataFlowId() const {
  return dataFlowId_;
}

void ModifyDataFlowAutoRefreshRequest::setDataFlowId(const std::string &dataFlowId) {
  dataFlowId_ = dataFlowId;
  setParameter(std::string("DataFlowId"), dataFlowId);
}

long ModifyDataFlowAutoRefreshRequest::getAutoRefreshInterval() const {
  return autoRefreshInterval_;
}

void ModifyDataFlowAutoRefreshRequest::setAutoRefreshInterval(long autoRefreshInterval) {
  autoRefreshInterval_ = autoRefreshInterval;
  setParameter(std::string("AutoRefreshInterval"), std::to_string(autoRefreshInterval));
}

