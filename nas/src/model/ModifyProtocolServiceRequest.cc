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

#include <alibabacloud/nas/model/ModifyProtocolServiceRequest.h>

using AlibabaCloud::NAS::Model::ModifyProtocolServiceRequest;

ModifyProtocolServiceRequest::ModifyProtocolServiceRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyProtocolService") {
  setMethod(HttpRequest::Method::Post);
}

ModifyProtocolServiceRequest::~ModifyProtocolServiceRequest() {}

std::string ModifyProtocolServiceRequest::getProtocolServiceId() const {
  return protocolServiceId_;
}

void ModifyProtocolServiceRequest::setProtocolServiceId(const std::string &protocolServiceId) {
  protocolServiceId_ = protocolServiceId;
  setParameter(std::string("ProtocolServiceId"), protocolServiceId);
}

std::string ModifyProtocolServiceRequest::getClientToken() const {
  return clientToken_;
}

void ModifyProtocolServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyProtocolServiceRequest::getDescription() const {
  return description_;
}

void ModifyProtocolServiceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyProtocolServiceRequest::getThroughput() const {
  return throughput_;
}

void ModifyProtocolServiceRequest::setThroughput(const std::string &throughput) {
  throughput_ = throughput;
  setParameter(std::string("Throughput"), throughput);
}

std::string ModifyProtocolServiceRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyProtocolServiceRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool ModifyProtocolServiceRequest::getDryRun() const {
  return dryRun_;
}

void ModifyProtocolServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyProtocolServiceRequest::getProtocolSpec() const {
  return protocolSpec_;
}

void ModifyProtocolServiceRequest::setProtocolSpec(const std::string &protocolSpec) {
  protocolSpec_ = protocolSpec;
  setParameter(std::string("ProtocolSpec"), protocolSpec);
}

