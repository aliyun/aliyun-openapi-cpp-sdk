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

#include <alibabacloud/nas/model/DeleteProtocolMountTargetRequest.h>

using AlibabaCloud::NAS::Model::DeleteProtocolMountTargetRequest;

DeleteProtocolMountTargetRequest::DeleteProtocolMountTargetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DeleteProtocolMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

DeleteProtocolMountTargetRequest::~DeleteProtocolMountTargetRequest() {}

std::string DeleteProtocolMountTargetRequest::getProtocolServiceId() const {
  return protocolServiceId_;
}

void DeleteProtocolMountTargetRequest::setProtocolServiceId(const std::string &protocolServiceId) {
  protocolServiceId_ = protocolServiceId;
  setParameter(std::string("ProtocolServiceId"), protocolServiceId);
}

std::string DeleteProtocolMountTargetRequest::getClientToken() const {
  return clientToken_;
}

void DeleteProtocolMountTargetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteProtocolMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DeleteProtocolMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool DeleteProtocolMountTargetRequest::getDryRun() const {
  return dryRun_;
}

void DeleteProtocolMountTargetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteProtocolMountTargetRequest::getExportId() const {
  return exportId_;
}

void DeleteProtocolMountTargetRequest::setExportId(const std::string &exportId) {
  exportId_ = exportId;
  setParameter(std::string("ExportId"), exportId);
}

