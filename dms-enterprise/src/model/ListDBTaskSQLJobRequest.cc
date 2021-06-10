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

#include <alibabacloud/dms-enterprise/model/ListDBTaskSQLJobRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDBTaskSQLJobRequest;

ListDBTaskSQLJobRequest::ListDBTaskSQLJobRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDBTaskSQLJob") {
  setMethod(HttpRequest::Method::Post);
}

ListDBTaskSQLJobRequest::~ListDBTaskSQLJobRequest() {}

long ListDBTaskSQLJobRequest::getDBTaskGroupId() const {
  return dBTaskGroupId_;
}

void ListDBTaskSQLJobRequest::setDBTaskGroupId(long dBTaskGroupId) {
  dBTaskGroupId_ = dBTaskGroupId;
  setParameter(std::string("DBTaskGroupId"), std::to_string(dBTaskGroupId));
}

long ListDBTaskSQLJobRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDBTaskSQLJobRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListDBTaskSQLJobRequest::getTid() const {
  return tid_;
}

void ListDBTaskSQLJobRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long ListDBTaskSQLJobRequest::getPageSize() const {
  return pageSize_;
}

void ListDBTaskSQLJobRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

