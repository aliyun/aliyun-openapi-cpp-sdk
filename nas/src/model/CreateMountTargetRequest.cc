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

#include <alibabacloud/nas/model/CreateMountTargetRequest.h>

using AlibabaCloud::NAS::Model::CreateMountTargetRequest;

CreateMountTargetRequest::CreateMountTargetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

CreateMountTargetRequest::~CreateMountTargetRequest() {}

std::string CreateMountTargetRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateMountTargetRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

bool CreateMountTargetRequest::getEnableIpv6() const {
  return enableIpv6_;
}

void CreateMountTargetRequest::setEnableIpv6(bool enableIpv6) {
  enableIpv6_ = enableIpv6;
  setParameter(std::string("EnableIpv6"), enableIpv6 ? "true" : "false");
}

std::string CreateMountTargetRequest::getNetworkType() const {
  return networkType_;
}

void CreateMountTargetRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CreateMountTargetRequest::getDryRun() const {
  return dryRun_;
}

void CreateMountTargetRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateMountTargetRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void CreateMountTargetRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

std::string CreateMountTargetRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateMountTargetRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateMountTargetRequest::getVpcId() const {
  return vpcId_;
}

void CreateMountTargetRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

