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

#include <alibabacloud/ice/model/SearchMediaRequest.h>

using AlibabaCloud::ICE::Model::SearchMediaRequest;

SearchMediaRequest::SearchMediaRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SearchMedia") {
  setMethod(HttpRequest::Method::Post);
}

SearchMediaRequest::~SearchMediaRequest() {}

std::string SearchMediaRequest::getEntityId() const {
  return entityId_;
}

void SearchMediaRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

std::string SearchMediaRequest::getBiz() const {
  return biz_;
}

void SearchMediaRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

int SearchMediaRequest::getPageSize() const {
  return pageSize_;
}

void SearchMediaRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
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

std::string SearchMediaRequest::getAppId() const {
  return appId_;
}

void SearchMediaRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
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

