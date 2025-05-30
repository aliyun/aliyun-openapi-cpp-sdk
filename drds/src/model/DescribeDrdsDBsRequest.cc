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

#include <alibabacloud/drds/model/DescribeDrdsDBsRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsDBsRequest;

DescribeDrdsDBsRequest::DescribeDrdsDBsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsDBs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsDBsRequest::~DescribeDrdsDBsRequest() {}

std::string DescribeDrdsDBsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsDBsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

int DescribeDrdsDBsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDrdsDBsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDrdsDBsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDrdsDBsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDrdsDBsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDrdsDBsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDrdsDBsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDrdsDBsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

