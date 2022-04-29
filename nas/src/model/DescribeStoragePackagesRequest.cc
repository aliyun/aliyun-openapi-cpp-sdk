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

#include <alibabacloud/nas/model/DescribeStoragePackagesRequest.h>

using AlibabaCloud::NAS::Model::DescribeStoragePackagesRequest;

DescribeStoragePackagesRequest::DescribeStoragePackagesRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeStoragePackages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStoragePackagesRequest::~DescribeStoragePackagesRequest() {}

bool DescribeStoragePackagesRequest::getUseUTCDateTime() const {
  return useUTCDateTime_;
}

void DescribeStoragePackagesRequest::setUseUTCDateTime(bool useUTCDateTime) {
  useUTCDateTime_ = useUTCDateTime;
  setParameter(std::string("UseUTCDateTime"), useUTCDateTime ? "true" : "false");
}

int DescribeStoragePackagesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeStoragePackagesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeStoragePackagesRequest::getRegionId() const {
  return regionId_;
}

void DescribeStoragePackagesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeStoragePackagesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStoragePackagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

