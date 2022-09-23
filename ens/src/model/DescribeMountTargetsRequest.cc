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

#include <alibabacloud/ens/model/DescribeMountTargetsRequest.h>

using AlibabaCloud::Ens::Model::DescribeMountTargetsRequest;

DescribeMountTargetsRequest::DescribeMountTargetsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeMountTargets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMountTargetsRequest::~DescribeMountTargetsRequest() {}

std::string DescribeMountTargetsRequest::getMountTargetName() const {
  return mountTargetName_;
}

void DescribeMountTargetsRequest::setMountTargetName(const std::string &mountTargetName) {
  mountTargetName_ = mountTargetName;
  setParameter(std::string("MountTargetName"), mountTargetName);
}

int DescribeMountTargetsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMountTargetsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMountTargetsRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeMountTargetsRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

int DescribeMountTargetsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMountTargetsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMountTargetsRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeMountTargetsRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

