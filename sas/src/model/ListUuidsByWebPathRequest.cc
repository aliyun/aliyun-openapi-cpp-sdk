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

#include <alibabacloud/sas/model/ListUuidsByWebPathRequest.h>

using AlibabaCloud::Sas::Model::ListUuidsByWebPathRequest;

ListUuidsByWebPathRequest::ListUuidsByWebPathRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListUuidsByWebPath") {
  setMethod(HttpRequest::Method::Post);
}

ListUuidsByWebPathRequest::~ListUuidsByWebPathRequest() {}

std::string ListUuidsByWebPathRequest::getWebPath() const {
  return webPath_;
}

void ListUuidsByWebPathRequest::setWebPath(const std::string &webPath) {
  webPath_ = webPath;
  setParameter(std::string("WebPath"), webPath);
}

std::string ListUuidsByWebPathRequest::getType() const {
  return type_;
}

void ListUuidsByWebPathRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListUuidsByWebPathRequest::getPageSize() const {
  return pageSize_;
}

void ListUuidsByWebPathRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListUuidsByWebPathRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUuidsByWebPathRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

