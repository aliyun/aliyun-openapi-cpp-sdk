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

#include <alibabacloud/gpdb/model/DescribeUserEncryptionKeyListRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeUserEncryptionKeyListRequest;

DescribeUserEncryptionKeyListRequest::DescribeUserEncryptionKeyListRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeUserEncryptionKeyList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUserEncryptionKeyListRequest::~DescribeUserEncryptionKeyListRequest() {}

std::string DescribeUserEncryptionKeyListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeUserEncryptionKeyListRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeUserEncryptionKeyListRequest::getRegionId() const {
  return regionId_;
}

void DescribeUserEncryptionKeyListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeUserEncryptionKeyListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUserEncryptionKeyListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

