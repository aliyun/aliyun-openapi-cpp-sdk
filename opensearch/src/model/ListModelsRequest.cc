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

#include <alibabacloud/opensearch/model/ListModelsRequest.h>

using AlibabaCloud::OpenSearch::Model::ListModelsRequest;

ListModelsRequest::ListModelsRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/algorithm/models"};
  setMethod(HttpRequest::Method::Get);
}

ListModelsRequest::~ListModelsRequest() {}

int ListModelsRequest::getPageSize() const {
  return pageSize_;
}

void ListModelsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListModelsRequest::getType() const {
  return type_;
}

void ListModelsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

std::string ListModelsRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void ListModelsRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

int ListModelsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListModelsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

