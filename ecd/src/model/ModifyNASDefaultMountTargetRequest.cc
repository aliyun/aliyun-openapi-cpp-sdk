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

#include <alibabacloud/ecd/model/ModifyNASDefaultMountTargetRequest.h>

using AlibabaCloud::Ecd::Model::ModifyNASDefaultMountTargetRequest;

ModifyNASDefaultMountTargetRequest::ModifyNASDefaultMountTargetRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyNASDefaultMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNASDefaultMountTargetRequest::~ModifyNASDefaultMountTargetRequest() {}

std::string ModifyNASDefaultMountTargetRequest::getMountTargetDomain() const {
  return mountTargetDomain_;
}

void ModifyNASDefaultMountTargetRequest::setMountTargetDomain(const std::string &mountTargetDomain) {
  mountTargetDomain_ = mountTargetDomain;
  setParameter(std::string("MountTargetDomain"), mountTargetDomain);
}

std::string ModifyNASDefaultMountTargetRequest::getRegionId() const {
  return regionId_;
}

void ModifyNASDefaultMountTargetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyNASDefaultMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyNASDefaultMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

