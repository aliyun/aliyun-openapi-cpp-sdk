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

#include <alibabacloud/mts/model/QueryCopyrightJobRequest.h>

using AlibabaCloud::Mts::Model::QueryCopyrightJobRequest;

QueryCopyrightJobRequest::QueryCopyrightJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryCopyrightJob") {
  setMethod(HttpRequest::Method::Post);
}

QueryCopyrightJobRequest::~QueryCopyrightJobRequest() {}

long QueryCopyrightJobRequest::getLevel() const {
  return level_;
}

void QueryCopyrightJobRequest::setLevel(long level) {
  level_ = level;
  setParameter(std::string("Level"), std::to_string(level));
}

long QueryCopyrightJobRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryCopyrightJobRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long QueryCopyrightJobRequest::getCreateTimeEnd() const {
  return createTimeEnd_;
}

void QueryCopyrightJobRequest::setCreateTimeEnd(long createTimeEnd) {
  createTimeEnd_ = createTimeEnd;
  setParameter(std::string("CreateTimeEnd"), std::to_string(createTimeEnd));
}

std::string QueryCopyrightJobRequest::getJobId() const {
  return jobId_;
}

void QueryCopyrightJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

long QueryCopyrightJobRequest::getPageSize() const {
  return pageSize_;
}

void QueryCopyrightJobRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryCopyrightJobRequest::getCreateTimeStart() const {
  return createTimeStart_;
}

void QueryCopyrightJobRequest::setCreateTimeStart(long createTimeStart) {
  createTimeStart_ = createTimeStart;
  setParameter(std::string("CreateTimeStart"), std::to_string(createTimeStart));
}

