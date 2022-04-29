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

#include <alibabacloud/nas/model/DescribeMountedClientsRequest.h>

using AlibabaCloud::NAS::Model::DescribeMountedClientsRequest;

DescribeMountedClientsRequest::DescribeMountedClientsRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeMountedClients") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMountedClientsRequest::~DescribeMountedClientsRequest() {}

int DescribeMountedClientsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMountedClientsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMountedClientsRequest::getRegionId() const {
  return regionId_;
}

void DescribeMountedClientsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeMountedClientsRequest::getClientIP() const {
  return clientIP_;
}

void DescribeMountedClientsRequest::setClientIP(const std::string &clientIP) {
  clientIP_ = clientIP;
  setParameter(std::string("ClientIP"), clientIP);
}

int DescribeMountedClientsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMountedClientsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMountedClientsRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeMountedClientsRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string DescribeMountedClientsRequest::getMountTargetDomain() const {
  return mountTargetDomain_;
}

void DescribeMountedClientsRequest::setMountTargetDomain(const std::string &mountTargetDomain) {
  mountTargetDomain_ = mountTargetDomain;
  setParameter(std::string("MountTargetDomain"), mountTargetDomain);
}

