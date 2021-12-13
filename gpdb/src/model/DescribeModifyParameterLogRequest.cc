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

#include <alibabacloud/gpdb/model/DescribeModifyParameterLogRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeModifyParameterLogRequest;

DescribeModifyParameterLogRequest::DescribeModifyParameterLogRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeModifyParameterLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeModifyParameterLogRequest::~DescribeModifyParameterLogRequest() {}

std::string DescribeModifyParameterLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeModifyParameterLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeModifyParameterLogRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeModifyParameterLogRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeModifyParameterLogRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeModifyParameterLogRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeModifyParameterLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeModifyParameterLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

