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

#include <alibabacloud/gpdb/model/DescribeDBInstanceNetInfoRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstanceNetInfoRequest;

DescribeDBInstanceNetInfoRequest::DescribeDBInstanceNetInfoRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstanceNetInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceNetInfoRequest::~DescribeDBInstanceNetInfoRequest() {}

std::string DescribeDBInstanceNetInfoRequest::getConnectionString() const {
  return connectionString_;
}

void DescribeDBInstanceNetInfoRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string DescribeDBInstanceNetInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceNetInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceNetInfoRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceNetInfoRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

