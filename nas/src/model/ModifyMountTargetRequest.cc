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

#include <alibabacloud/nas/model/ModifyMountTargetRequest.h>

using AlibabaCloud::NAS::Model::ModifyMountTargetRequest;

ModifyMountTargetRequest::ModifyMountTargetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMountTargetRequest::~ModifyMountTargetRequest() {}

std::string ModifyMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string ModifyMountTargetRequest::getMountTargetDomain() const {
  return mountTargetDomain_;
}

void ModifyMountTargetRequest::setMountTargetDomain(const std::string &mountTargetDomain) {
  mountTargetDomain_ = mountTargetDomain;
  setParameter(std::string("MountTargetDomain"), mountTargetDomain);
}

std::string ModifyMountTargetRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void ModifyMountTargetRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

std::string ModifyMountTargetRequest::getDualStackMountTargetDomain() const {
  return dualStackMountTargetDomain_;
}

void ModifyMountTargetRequest::setDualStackMountTargetDomain(const std::string &dualStackMountTargetDomain) {
  dualStackMountTargetDomain_ = dualStackMountTargetDomain;
  setParameter(std::string("DualStackMountTargetDomain"), dualStackMountTargetDomain);
}

std::string ModifyMountTargetRequest::getStatus() const {
  return status_;
}

void ModifyMountTargetRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

