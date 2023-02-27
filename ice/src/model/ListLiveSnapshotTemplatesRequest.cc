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

#include <alibabacloud/ice/model/ListLiveSnapshotTemplatesRequest.h>

using AlibabaCloud::ICE::Model::ListLiveSnapshotTemplatesRequest;

ListLiveSnapshotTemplatesRequest::ListLiveSnapshotTemplatesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveSnapshotTemplates") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveSnapshotTemplatesRequest::~ListLiveSnapshotTemplatesRequest() {}

std::vector<std::string> ListLiveSnapshotTemplatesRequest::getTemplateIds() const {
  return templateIds_;
}

void ListLiveSnapshotTemplatesRequest::setTemplateIds(const std::vector<std::string> &templateIds) {
  templateIds_ = templateIds;
}

std::string ListLiveSnapshotTemplatesRequest::getType() const {
  return type_;
}

void ListLiveSnapshotTemplatesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListLiveSnapshotTemplatesRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void ListLiveSnapshotTemplatesRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setParameter(std::string("SearchKeyWord"), searchKeyWord);
}

int ListLiveSnapshotTemplatesRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveSnapshotTemplatesRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int ListLiveSnapshotTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveSnapshotTemplatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveSnapshotTemplatesRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveSnapshotTemplatesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

