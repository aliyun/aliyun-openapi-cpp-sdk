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

#include <alibabacloud/nas/model/ModifyProtocolMountTargetRequest.h>

using AlibabaCloud::NAS::Model::ModifyProtocolMountTargetRequest;

ModifyProtocolMountTargetRequest::ModifyProtocolMountTargetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyProtocolMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

ModifyProtocolMountTargetRequest::~ModifyProtocolMountTargetRequest() {}

std::string ModifyProtocolMountTargetRequest::getProtocolServiceId() const {
  return protocolServiceId_;
}

void ModifyProtocolMountTargetRequest::setProtocolServiceId(const std::string &protocolServiceId) {
  protocolServiceId_ = protocolServiceId;
  setParameter(std::string("ProtocolServiceId"), protocolServiceId);
}

std::string ModifyProtocolMountTargetRequest::getClientToken() const {
  return clientToken_;
}

void ModifyProtocolMountTargetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyProtocolMountTargetRequest::getDescription() const {
  return description_;
}

void ModifyProtocolMountTargetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyProtocolMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyProtocolMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool ModifyProtocolMountTargetRequest::getDryRun() const {
  return dryRun_;
}

void ModifyProtocolMountTargetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyProtocolMountTargetRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void ModifyProtocolMountTargetRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

std::string ModifyProtocolMountTargetRequest::getExportId() const {
  return exportId_;
}

void ModifyProtocolMountTargetRequest::setExportId(const std::string &exportId) {
  exportId_ = exportId;
  setParameter(std::string("ExportId"), exportId);
}

