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

#include <alibabacloud/nas/model/DescribeLifecyclePoliciesRequest.h>

using AlibabaCloud::NAS::Model::DescribeLifecyclePoliciesRequest;

DescribeLifecyclePoliciesRequest::DescribeLifecyclePoliciesRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeLifecyclePolicies") {
  setMethod(HttpRequest::Method::Get);
}

DescribeLifecyclePoliciesRequest::~DescribeLifecyclePoliciesRequest() {}

int DescribeLifecyclePoliciesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLifecyclePoliciesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLifecyclePoliciesRequest::getStorageType() const {
  return storageType_;
}

void DescribeLifecyclePoliciesRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string DescribeLifecyclePoliciesRequest::getLifecyclePolicyName() const {
  return lifecyclePolicyName_;
}

void DescribeLifecyclePoliciesRequest::setLifecyclePolicyName(const std::string &lifecyclePolicyName) {
  lifecyclePolicyName_ = lifecyclePolicyName;
  setParameter(std::string("LifecyclePolicyName"), lifecyclePolicyName);
}

int DescribeLifecyclePoliciesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLifecyclePoliciesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLifecyclePoliciesRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeLifecyclePoliciesRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

