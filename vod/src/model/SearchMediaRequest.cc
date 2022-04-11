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

#include <alibabacloud/vod/model/SearchMediaRequest.h>

using AlibabaCloud::Vod::Model::SearchMediaRequest;

SearchMediaRequest::SearchMediaRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SearchMedia") {
  setMethod(HttpRequest::Method::Post);
}

SearchMediaRequest::~SearchMediaRequest() {}

std::string SearchMediaRequest::getSessionId() const {
  return sessionId_;
}

void SearchMediaRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string SearchMediaRequest::getScrollToken() const {
  return scrollToken_;
}

void SearchMediaRequest::setScrollToken(const std::string &scrollToken) {
  scrollToken_ = scrollToken;
  setParameter(std::string("ScrollToken"), scrollToken);
}

std::string SearchMediaRequest::getSearchType() const {
  return searchType_;
}

void SearchMediaRequest::setSearchType(const std::string &searchType) {
  searchType_ = searchType;
  setParameter(std::string("SearchType"), searchType);
}

int SearchMediaRequest::getPageSize() const {
  return pageSize_;
}

void SearchMediaRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchMediaRequest::getResultTypes() const {
  return resultTypes_;
}

void SearchMediaRequest::setResultTypes(const std::string &resultTypes) {
  resultTypes_ = resultTypes;
  setParameter(std::string("ResultTypes"), resultTypes);
}

std::string SearchMediaRequest::getMatch() const {
  return match_;
}

void SearchMediaRequest::setMatch(const std::string &match) {
  match_ = match;
  setParameter(std::string("Match"), match);
}

int SearchMediaRequest::getPageNo() const {
  return pageNo_;
}

void SearchMediaRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string SearchMediaRequest::getSortBy() const {
  return sortBy_;
}

void SearchMediaRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string SearchMediaRequest::getFields() const {
  return fields_;
}

void SearchMediaRequest::setFields(const std::string &fields) {
  fields_ = fields;
  setParameter(std::string("Fields"), fields);
}

