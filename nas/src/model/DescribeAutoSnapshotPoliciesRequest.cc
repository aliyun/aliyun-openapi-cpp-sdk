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

#include <alibabacloud/nas/model/DescribeAutoSnapshotPoliciesRequest.h>

using AlibabaCloud::NAS::Model::DescribeAutoSnapshotPoliciesRequest;

DescribeAutoSnapshotPoliciesRequest::DescribeAutoSnapshotPoliciesRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeAutoSnapshotPolicies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoSnapshotPoliciesRequest::~DescribeAutoSnapshotPoliciesRequest() {}

std::string DescribeAutoSnapshotPoliciesRequest::getAutoSnapshotPolicyId() const {
  return autoSnapshotPolicyId_;
}

void DescribeAutoSnapshotPoliciesRequest::setAutoSnapshotPolicyId(const std::string &autoSnapshotPolicyId) {
  autoSnapshotPolicyId_ = autoSnapshotPolicyId;
  setParameter(std::string("AutoSnapshotPolicyId"), autoSnapshotPolicyId);
}

std::string DescribeAutoSnapshotPoliciesRequest::getFileSystemType() const {
  return fileSystemType_;
}

void DescribeAutoSnapshotPoliciesRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

int DescribeAutoSnapshotPoliciesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAutoSnapshotPoliciesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeAutoSnapshotPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAutoSnapshotPoliciesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

