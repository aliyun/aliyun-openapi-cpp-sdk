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

#include <alibabacloud/opensearch/model/ListInterventionDictionaryEntriesRequest.h>

using AlibabaCloud::OpenSearch::Model::ListInterventionDictionaryEntriesRequest;

ListInterventionDictionaryEntriesRequest::ListInterventionDictionaryEntriesRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/intervention-dictionaries/[name]/entries"};
  setMethod(HttpRequest::Method::Get);
}

ListInterventionDictionaryEntriesRequest::~ListInterventionDictionaryEntriesRequest() {}

std::string ListInterventionDictionaryEntriesRequest::getName() const {
  return name_;
}

void ListInterventionDictionaryEntriesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

int ListInterventionDictionaryEntriesRequest::getPageSize() const {
  return pageSize_;
}

void ListInterventionDictionaryEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListInterventionDictionaryEntriesRequest::getWord() const {
  return word_;
}

void ListInterventionDictionaryEntriesRequest::setWord(const std::string &word) {
  word_ = word;
  setParameter(std::string("word"), word);
}

int ListInterventionDictionaryEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInterventionDictionaryEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

