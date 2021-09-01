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

#include <alibabacloud/mts/model/ListInferenceJobRequest.h>

using AlibabaCloud::Mts::Model::ListInferenceJobRequest;

ListInferenceJobRequest::ListInferenceJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListInferenceJob") {
  setMethod(HttpRequest::Method::Post);
}

ListInferenceJobRequest::~ListInferenceJobRequest() {}

long ListInferenceJobRequest::getMaxPageSize() const {
  return maxPageSize_;
}

void ListInferenceJobRequest::setMaxPageSize(long maxPageSize) {
  maxPageSize_ = maxPageSize;
  setParameter(std::string("MaxPageSize"), std::to_string(maxPageSize));
}

long ListInferenceJobRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInferenceJobRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListInferenceJobRequest::getServerName() const {
  return serverName_;
}

void ListInferenceJobRequest::setServerName(const std::string &serverName) {
  serverName_ = serverName;
  setParameter(std::string("ServerName"), serverName);
}

