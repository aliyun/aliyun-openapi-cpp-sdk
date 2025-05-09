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

#include <alibabacloud/drds/model/DescribeDrdsRdsInstancesRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsRdsInstancesRequest;

DescribeDrdsRdsInstancesRequest::DescribeDrdsRdsInstancesRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsRdsInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsRdsInstancesRequest::~DescribeDrdsRdsInstancesRequest() {}

std::string DescribeDrdsRdsInstancesRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsRdsInstancesRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

int DescribeDrdsRdsInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDrdsRdsInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDrdsRdsInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDrdsRdsInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeDrdsRdsInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDrdsRdsInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDrdsRdsInstancesRequest::getDbInstType() const {
  return dbInstType_;
}

void DescribeDrdsRdsInstancesRequest::setDbInstType(const std::string &dbInstType) {
  dbInstType_ = dbInstType;
  setParameter(std::string("DbInstType"), dbInstType);
}

