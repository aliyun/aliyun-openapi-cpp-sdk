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

#include <alibabacloud/ice/model/ListLiveRecordTemplatesRequest.h>

using AlibabaCloud::ICE::Model::ListLiveRecordTemplatesRequest;

ListLiveRecordTemplatesRequest::ListLiveRecordTemplatesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveRecordTemplates") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveRecordTemplatesRequest::~ListLiveRecordTemplatesRequest() {}

std::vector<std::string> ListLiveRecordTemplatesRequest::getTemplateIds() const {
  return templateIds_;
}

void ListLiveRecordTemplatesRequest::setTemplateIds(const std::vector<std::string> &templateIds) {
  templateIds_ = templateIds;
}

std::string ListLiveRecordTemplatesRequest::getType() const {
  return type_;
}

void ListLiveRecordTemplatesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

long ListLiveRecordTemplatesRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveRecordTemplatesRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

long ListLiveRecordTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveRecordTemplatesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveRecordTemplatesRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveRecordTemplatesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListLiveRecordTemplatesRequest::getKeyword() const {
  return keyword_;
}

void ListLiveRecordTemplatesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

