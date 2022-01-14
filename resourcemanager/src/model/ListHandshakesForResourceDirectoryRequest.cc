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

#include <alibabacloud/resourcemanager/model/ListHandshakesForResourceDirectoryRequest.h>

using AlibabaCloud::ResourceManager::Model::ListHandshakesForResourceDirectoryRequest;

ListHandshakesForResourceDirectoryRequest::ListHandshakesForResourceDirectoryRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListHandshakesForResourceDirectory") {
  setMethod(HttpRequest::Method::Post);
}

ListHandshakesForResourceDirectoryRequest::~ListHandshakesForResourceDirectoryRequest() {}

int ListHandshakesForResourceDirectoryRequest::getPageNumber() const {
  return pageNumber_;
}

void ListHandshakesForResourceDirectoryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListHandshakesForResourceDirectoryRequest::getPageSize() const {
  return pageSize_;
}

void ListHandshakesForResourceDirectoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

