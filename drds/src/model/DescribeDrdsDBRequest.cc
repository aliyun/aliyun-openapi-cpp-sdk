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

#include <alibabacloud/drds/model/DescribeDrdsDBRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsDBRequest;

DescribeDrdsDBRequest::DescribeDrdsDBRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsDB") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsDBRequest::~DescribeDrdsDBRequest() {}

std::string DescribeDrdsDBRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsDBRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeDrdsDBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDrdsDBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDrdsDBRequest::getDbName() const {
  return dbName_;
}

void DescribeDrdsDBRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

