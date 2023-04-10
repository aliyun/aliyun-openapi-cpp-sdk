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

#include <alibabacloud/datalake/model/GetQueryResultRequest.h>

using AlibabaCloud::DataLake::Model::GetQueryResultRequest;

GetQueryResultRequest::GetQueryResultRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/webapi/query/getQueryResult"};
  setMethod(HttpRequest::Method::Get);
}

GetQueryResultRequest::~GetQueryResultRequest() {}

int GetQueryResultRequest::getPageSize() const {
  return pageSize_;
}

void GetQueryResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetQueryResultRequest::getPageNumber() const {
  return pageNumber_;
}

void GetQueryResultRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetQueryResultRequest::getQueryId() const {
  return queryId_;
}

void GetQueryResultRequest::setQueryId(const std::string &queryId) {
  queryId_ = queryId;
  setParameter(std::string("QueryId"), queryId);
}

