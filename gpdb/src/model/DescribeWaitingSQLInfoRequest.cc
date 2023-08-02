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

#include <alibabacloud/gpdb/model/DescribeWaitingSQLInfoRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeWaitingSQLInfoRequest;

DescribeWaitingSQLInfoRequest::DescribeWaitingSQLInfoRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeWaitingSQLInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWaitingSQLInfoRequest::~DescribeWaitingSQLInfoRequest() {}

std::string DescribeWaitingSQLInfoRequest::getPID() const {
  return pID_;
}

void DescribeWaitingSQLInfoRequest::setPID(const std::string &pID) {
  pID_ = pID;
  setParameter(std::string("PID"), pID);
}

std::string DescribeWaitingSQLInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeWaitingSQLInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeWaitingSQLInfoRequest::getDatabase() const {
  return database_;
}

void DescribeWaitingSQLInfoRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeWaitingSQLInfoRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeWaitingSQLInfoRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

