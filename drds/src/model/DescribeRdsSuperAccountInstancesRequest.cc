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

#include <alibabacloud/drds/model/DescribeRdsSuperAccountInstancesRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsSuperAccountInstancesRequest;

DescribeRdsSuperAccountInstancesRequest::DescribeRdsSuperAccountInstancesRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeRdsSuperAccountInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRdsSuperAccountInstancesRequest::~DescribeRdsSuperAccountInstancesRequest() {}

std::vector<std::string> DescribeRdsSuperAccountInstancesRequest::getRdsInstance() const {
  return rdsInstance_;
}

void DescribeRdsSuperAccountInstancesRequest::setRdsInstance(const std::vector<std::string> &rdsInstance) {
  rdsInstance_ = rdsInstance;
}

std::string DescribeRdsSuperAccountInstancesRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeRdsSuperAccountInstancesRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeRdsSuperAccountInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRdsSuperAccountInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRdsSuperAccountInstancesRequest::getDbInstType() const {
  return dbInstType_;
}

void DescribeRdsSuperAccountInstancesRequest::setDbInstType(const std::string &dbInstType) {
  dbInstType_ = dbInstType;
  setParameter(std::string("DbInstType"), dbInstType);
}

