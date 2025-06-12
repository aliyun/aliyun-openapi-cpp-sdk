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

#include <alibabacloud/clickhouse/model/DescribeConfigHistoryRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeConfigHistoryRequest;

DescribeConfigHistoryRequest::DescribeConfigHistoryRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeConfigHistory") {
  setMethod(HttpRequest::Method::Get);
}

DescribeConfigHistoryRequest::~DescribeConfigHistoryRequest() {}

std::string DescribeConfigHistoryRequest::getStartTime() const {
  return startTime_;
}

void DescribeConfigHistoryRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeConfigHistoryRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeConfigHistoryRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeConfigHistoryRequest::getEndTime() const {
  return endTime_;
}

void DescribeConfigHistoryRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

