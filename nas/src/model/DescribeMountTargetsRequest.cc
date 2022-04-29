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

#include <alibabacloud/nas/model/DescribeMountTargetsRequest.h>

using AlibabaCloud::NAS::Model::DescribeMountTargetsRequest;

DescribeMountTargetsRequest::DescribeMountTargetsRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeMountTargets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMountTargetsRequest::~DescribeMountTargetsRequest() {}

int DescribeMountTargetsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMountTargetsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
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

std::string DescribeMountTargetsRequest::getMountTargetDomain() const {
  return mountTargetDomain_;
}

void DescribeMountTargetsRequest::setMountTargetDomain(const std::string &mountTargetDomain) {
  mountTargetDomain_ = mountTargetDomain;
  setParameter(std::string("MountTargetDomain"), mountTargetDomain);
}

std::string DescribeMountTargetsRequest::getDualStackMountTargetDomain() const {
  return dualStackMountTargetDomain_;
}

void DescribeMountTargetsRequest::setDualStackMountTargetDomain(const std::string &dualStackMountTargetDomain) {
  dualStackMountTargetDomain_ = dualStackMountTargetDomain;
  setParameter(std::string("DualStackMountTargetDomain"), dualStackMountTargetDomain);
}

