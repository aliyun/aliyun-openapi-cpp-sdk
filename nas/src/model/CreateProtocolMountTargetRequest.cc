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

#include <alibabacloud/nas/model/CreateProtocolMountTargetRequest.h>

using AlibabaCloud::NAS::Model::CreateProtocolMountTargetRequest;

CreateProtocolMountTargetRequest::CreateProtocolMountTargetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateProtocolMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

CreateProtocolMountTargetRequest::~CreateProtocolMountTargetRequest() {}

std::string CreateProtocolMountTargetRequest::getProtocolServiceId() const {
  return protocolServiceId_;
}

void CreateProtocolMountTargetRequest::setProtocolServiceId(const std::string &protocolServiceId) {
  protocolServiceId_ = protocolServiceId;
  setParameter(std::string("ProtocolServiceId"), protocolServiceId);
}

std::string CreateProtocolMountTargetRequest::getFsetId() const {
  return fsetId_;
}

void CreateProtocolMountTargetRequest::setFsetId(const std::string &fsetId) {
  fsetId_ = fsetId;
  setParameter(std::string("FsetId"), fsetId);
}

std::string CreateProtocolMountTargetRequest::getClientToken() const {
  return clientToken_;
}

void CreateProtocolMountTargetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateProtocolMountTargetRequest::getDescription() const {
  return description_;
}

void CreateProtocolMountTargetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateProtocolMountTargetRequest::getPath() const {
  return path_;
}

void CreateProtocolMountTargetRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string CreateProtocolMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateProtocolMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CreateProtocolMountTargetRequest::getDryRun() const {
  return dryRun_;
}

void CreateProtocolMountTargetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateProtocolMountTargetRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void CreateProtocolMountTargetRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

std::string CreateProtocolMountTargetRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateProtocolMountTargetRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateProtocolMountTargetRequest::getVpcId() const {
  return vpcId_;
}

void CreateProtocolMountTargetRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

