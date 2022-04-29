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

#include <alibabacloud/nas/model/ModifyDataFlowRequest.h>

using AlibabaCloud::NAS::Model::ModifyDataFlowRequest;

ModifyDataFlowRequest::ModifyDataFlowRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyDataFlow") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDataFlowRequest::~ModifyDataFlowRequest() {}

std::string ModifyDataFlowRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDataFlowRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDataFlowRequest::getDescription() const {
  return description_;
}

void ModifyDataFlowRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ModifyDataFlowRequest::getThroughput() const {
  return throughput_;
}

void ModifyDataFlowRequest::setThroughput(long throughput) {
  throughput_ = throughput;
  setParameter(std::string("Throughput"), std::to_string(throughput));
}

std::string ModifyDataFlowRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyDataFlowRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool ModifyDataFlowRequest::getDryRun() const {
  return dryRun_;
}

void ModifyDataFlowRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyDataFlowRequest::getDataFlowId() const {
  return dataFlowId_;
}

void ModifyDataFlowRequest::setDataFlowId(const std::string &dataFlowId) {
  dataFlowId_ = dataFlowId;
  setParameter(std::string("DataFlowId"), dataFlowId);
}

