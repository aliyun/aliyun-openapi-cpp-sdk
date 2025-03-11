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

#include <alibabacloud/drds/model/DescribeDrdsDbInstancesRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsDbInstancesRequest;

DescribeDrdsDbInstancesRequest::DescribeDrdsDbInstancesRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsDbInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsDbInstancesRequest::~DescribeDrdsDbInstancesRequest() {}

std::string DescribeDrdsDbInstancesRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsDbInstancesRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

int DescribeDrdsDbInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDrdsDbInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDrdsDbInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDrdsDbInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDrdsDbInstancesRequest::getDbName() const {
  return dbName_;
}

void DescribeDrdsDbInstancesRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

int DescribeDrdsDbInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDrdsDbInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

