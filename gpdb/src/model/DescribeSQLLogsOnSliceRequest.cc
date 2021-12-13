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

#include <alibabacloud/gpdb/model/DescribeSQLLogsOnSliceRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSQLLogsOnSliceRequest;

DescribeSQLLogsOnSliceRequest::DescribeSQLLogsOnSliceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeSQLLogsOnSlice") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLLogsOnSliceRequest::~DescribeSQLLogsOnSliceRequest() {}

std::string DescribeSQLLogsOnSliceRequest::getSliceId() const {
  return sliceId_;
}

void DescribeSQLLogsOnSliceRequest::setSliceId(const std::string &sliceId) {
  sliceId_ = sliceId;
  setParameter(std::string("SliceId"), sliceId);
}

int DescribeSQLLogsOnSliceRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSQLLogsOnSliceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSQLLogsOnSliceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSQLLogsOnSliceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSQLLogsOnSliceRequest::getMinExecuteCost() const {
  return minExecuteCost_;
}

void DescribeSQLLogsOnSliceRequest::setMinExecuteCost(const std::string &minExecuteCost) {
  minExecuteCost_ = minExecuteCost;
  setParameter(std::string("MinExecuteCost"), minExecuteCost);
}

int DescribeSQLLogsOnSliceRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSQLLogsOnSliceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSQLLogsOnSliceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSQLLogsOnSliceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeSQLLogsOnSliceRequest::getMaxExecuteCost() const {
  return maxExecuteCost_;
}

void DescribeSQLLogsOnSliceRequest::setMaxExecuteCost(const std::string &maxExecuteCost) {
  maxExecuteCost_ = maxExecuteCost;
  setParameter(std::string("MaxExecuteCost"), maxExecuteCost);
}

std::string DescribeSQLLogsOnSliceRequest::getExecuteState() const {
  return executeState_;
}

void DescribeSQLLogsOnSliceRequest::setExecuteState(const std::string &executeState) {
  executeState_ = executeState;
  setParameter(std::string("ExecuteState"), executeState);
}

std::string DescribeSQLLogsOnSliceRequest::getQueryId() const {
  return queryId_;
}

void DescribeSQLLogsOnSliceRequest::setQueryId(const std::string &queryId) {
  queryId_ = queryId;
  setParameter(std::string("QueryId"), queryId);
}

