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

#include <alibabacloud/bssopenapi/model/QueryRelationListRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryRelationListRequest;

QueryRelationListRequest::QueryRelationListRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryRelationList") {
  setMethod(HttpRequest::Method::Post);
}

QueryRelationListRequest::~QueryRelationListRequest() {}

std::vector<std::string> QueryRelationListRequest::getStatusList() const {
  return statusList_;
}

void QueryRelationListRequest::setStatusList(const std::vector<std::string> &statusList) {
  statusList_ = statusList;
}

int QueryRelationListRequest::getPageNum() const {
  return pageNum_;
}

void QueryRelationListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long QueryRelationListRequest::getUserId() const {
  return userId_;
}

void QueryRelationListRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

int QueryRelationListRequest::getPageSize() const {
  return pageSize_;
}

void QueryRelationListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

