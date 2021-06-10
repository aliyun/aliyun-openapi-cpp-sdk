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

#include <alibabacloud/dms-enterprise/model/ListDBTaskSQLJobDetailRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDBTaskSQLJobDetailRequest;

ListDBTaskSQLJobDetailRequest::ListDBTaskSQLJobDetailRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDBTaskSQLJobDetail") {
  setMethod(HttpRequest::Method::Post);
}

ListDBTaskSQLJobDetailRequest::~ListDBTaskSQLJobDetailRequest() {}

long ListDBTaskSQLJobDetailRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDBTaskSQLJobDetailRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListDBTaskSQLJobDetailRequest::getTid() const {
  return tid_;
}

void ListDBTaskSQLJobDetailRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long ListDBTaskSQLJobDetailRequest::getJobId() const {
  return jobId_;
}

void ListDBTaskSQLJobDetailRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

long ListDBTaskSQLJobDetailRequest::getPageSize() const {
  return pageSize_;
}

void ListDBTaskSQLJobDetailRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

