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

#include <alibabacloud/nas/model/CreateProtocolServiceRequest.h>

using AlibabaCloud::NAS::Model::CreateProtocolServiceRequest;

CreateProtocolServiceRequest::CreateProtocolServiceRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateProtocolService") {
  setMethod(HttpRequest::Method::Post);
}

CreateProtocolServiceRequest::~CreateProtocolServiceRequest() {}

std::string CreateProtocolServiceRequest::getClientToken() const {
  return clientToken_;
}

void CreateProtocolServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateProtocolServiceRequest::getDescription() const {
  return description_;
}

void CreateProtocolServiceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateProtocolServiceRequest::getMountTargetDescription() const {
  return mountTargetDescription_;
}

void CreateProtocolServiceRequest::setMountTargetDescription(const std::string &mountTargetDescription) {
  mountTargetDescription_ = mountTargetDescription;
  setParameter(std::string("MountTargetDescription"), mountTargetDescription);
}

std::string CreateProtocolServiceRequest::getMountTargetAccessGroupName() const {
  return mountTargetAccessGroupName_;
}

void CreateProtocolServiceRequest::setMountTargetAccessGroupName(const std::string &mountTargetAccessGroupName) {
  mountTargetAccessGroupName_ = mountTargetAccessGroupName;
  setParameter(std::string("MountTargetAccessGroupName"), mountTargetAccessGroupName);
}

std::string CreateProtocolServiceRequest::getMountTargetVSwitchId() const {
  return mountTargetVSwitchId_;
}

void CreateProtocolServiceRequest::setMountTargetVSwitchId(const std::string &mountTargetVSwitchId) {
  mountTargetVSwitchId_ = mountTargetVSwitchId;
  setParameter(std::string("MountTargetVSwitchId"), mountTargetVSwitchId);
}

int CreateProtocolServiceRequest::getThroughput() const {
  return throughput_;
}

void CreateProtocolServiceRequest::setThroughput(int throughput) {
  throughput_ = throughput;
  setParameter(std::string("Throughput"), std::to_string(throughput));
}

std::string CreateProtocolServiceRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateProtocolServiceRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CreateProtocolServiceRequest::getDryRun() const {
  return dryRun_;
}

void CreateProtocolServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateProtocolServiceRequest::getMountTargetFsetId() const {
  return mountTargetFsetId_;
}

void CreateProtocolServiceRequest::setMountTargetFsetId(const std::string &mountTargetFsetId) {
  mountTargetFsetId_ = mountTargetFsetId;
  setParameter(std::string("MountTargetFsetId"), mountTargetFsetId);
}

std::string CreateProtocolServiceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateProtocolServiceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateProtocolServiceRequest::getMountTargetVpcId() const {
  return mountTargetVpcId_;
}

void CreateProtocolServiceRequest::setMountTargetVpcId(const std::string &mountTargetVpcId) {
  mountTargetVpcId_ = mountTargetVpcId;
  setParameter(std::string("MountTargetVpcId"), mountTargetVpcId);
}

std::string CreateProtocolServiceRequest::getMountTargetPath() const {
  return mountTargetPath_;
}

void CreateProtocolServiceRequest::setMountTargetPath(const std::string &mountTargetPath) {
  mountTargetPath_ = mountTargetPath;
  setParameter(std::string("MountTargetPath"), mountTargetPath);
}

std::string CreateProtocolServiceRequest::getProtocolSpec() const {
  return protocolSpec_;
}

void CreateProtocolServiceRequest::setProtocolSpec(const std::string &protocolSpec) {
  protocolSpec_ = protocolSpec;
  setParameter(std::string("ProtocolSpec"), protocolSpec);
}

std::string CreateProtocolServiceRequest::getVpcId() const {
  return vpcId_;
}

void CreateProtocolServiceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateProtocolServiceRequest::getProtocolType() const {
  return protocolType_;
}

void CreateProtocolServiceRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

