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

#include <alibabacloud/opensearch/model/ListInterventionDictionariesRequest.h>

using AlibabaCloud::OpenSearch::Model::ListInterventionDictionariesRequest;

ListInterventionDictionariesRequest::ListInterventionDictionariesRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/intervention-dictionaries"};
  setMethod(HttpRequest::Method::Get);
}

ListInterventionDictionariesRequest::~ListInterventionDictionariesRequest() {}

std::string ListInterventionDictionariesRequest::getTypes() const {
  return types_;
}

void ListInterventionDictionariesRequest::setTypes(const std::string &types) {
  types_ = types;
  setParameter(std::string("types"), types);
}

int ListInterventionDictionariesRequest::getPageSize() const {
  return pageSize_;
}

void ListInterventionDictionariesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

int ListInterventionDictionariesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInterventionDictionariesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

