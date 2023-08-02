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

#include <alibabacloud/gpdb/model/DescribeHealthStatusRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeHealthStatusRequest;

DescribeHealthStatusRequest::DescribeHealthStatusRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeHealthStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHealthStatusRequest::~DescribeHealthStatusRequest() {}

std::string DescribeHealthStatusRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeHealthStatusRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeHealthStatusRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeHealthStatusRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeHealthStatusRequest::getKey() const {
  return key_;
}

void DescribeHealthStatusRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

