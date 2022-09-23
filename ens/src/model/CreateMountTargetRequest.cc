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

#include <alibabacloud/ens/model/CreateMountTargetRequest.h>

using AlibabaCloud::Ens::Model::CreateMountTargetRequest;

CreateMountTargetRequest::CreateMountTargetRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

CreateMountTargetRequest::~CreateMountTargetRequest() {}

std::string CreateMountTargetRequest::getMountTargetName() const {
  return mountTargetName_;
}

void CreateMountTargetRequest::setMountTargetName(const std::string &mountTargetName) {
  mountTargetName_ = mountTargetName;
  setParameter(std::string("MountTargetName"), mountTargetName);
}

std::string CreateMountTargetRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateMountTargetRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string CreateMountTargetRequest::getNetWorkId() const {
  return netWorkId_;
}

void CreateMountTargetRequest::setNetWorkId(const std::string &netWorkId) {
  netWorkId_ = netWorkId;
  setParameter(std::string("NetWorkId"), netWorkId);
}

