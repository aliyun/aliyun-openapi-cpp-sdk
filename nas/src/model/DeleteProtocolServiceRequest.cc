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

#include <alibabacloud/nas/model/DeleteProtocolServiceRequest.h>

using AlibabaCloud::NAS::Model::DeleteProtocolServiceRequest;

DeleteProtocolServiceRequest::DeleteProtocolServiceRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DeleteProtocolService") {
  setMethod(HttpRequest::Method::Post);
}

DeleteProtocolServiceRequest::~DeleteProtocolServiceRequest() {}

std::string DeleteProtocolServiceRequest::getProtocolServiceId() const {
  return protocolServiceId_;
}

void DeleteProtocolServiceRequest::setProtocolServiceId(const std::string &protocolServiceId) {
  protocolServiceId_ = protocolServiceId;
  setParameter(std::string("ProtocolServiceId"), protocolServiceId);
}

std::string DeleteProtocolServiceRequest::getClientToken() const {
  return clientToken_;
}

void DeleteProtocolServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteProtocolServiceRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DeleteProtocolServiceRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool DeleteProtocolServiceRequest::getDryRun() const {
  return dryRun_;
}

void DeleteProtocolServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

