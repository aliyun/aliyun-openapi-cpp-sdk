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

#include <alibabacloud/ice/model/SearchPublicMediaInfoRequest.h>

using AlibabaCloud::ICE::Model::SearchPublicMediaInfoRequest;

SearchPublicMediaInfoRequest::SearchPublicMediaInfoRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SearchPublicMediaInfo") {
  setMethod(HttpRequest::Method::Post);
}

SearchPublicMediaInfoRequest::~SearchPublicMediaInfoRequest() {}

std::string SearchPublicMediaInfoRequest::getEntityId() const {
  return entityId_;
}

void SearchPublicMediaInfoRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

bool SearchPublicMediaInfoRequest::getAuthorized() const {
  return authorized_;
}

void SearchPublicMediaInfoRequest::setAuthorized(bool authorized) {
  authorized_ = authorized;
  setParameter(std::string("Authorized"), authorized ? "true" : "false");
}

int SearchPublicMediaInfoRequest::getPageSize() const {
  return pageSize_;
}

void SearchPublicMediaInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchPublicMediaInfoRequest::getMediaIds() const {
  return mediaIds_;
}

void SearchPublicMediaInfoRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

std::string SearchPublicMediaInfoRequest::getDynamicMetaDataMatchFields() const {
  return dynamicMetaDataMatchFields_;
}

void SearchPublicMediaInfoRequest::setDynamicMetaDataMatchFields(const std::string &dynamicMetaDataMatchFields) {
  dynamicMetaDataMatchFields_ = dynamicMetaDataMatchFields;
  setParameter(std::string("DynamicMetaDataMatchFields"), dynamicMetaDataMatchFields);
}

int SearchPublicMediaInfoRequest::getPageNo() const {
  return pageNo_;
}

void SearchPublicMediaInfoRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string SearchPublicMediaInfoRequest::getSortBy() const {
  return sortBy_;
}

void SearchPublicMediaInfoRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

bool SearchPublicMediaInfoRequest::getFavorite() const {
  return favorite_;
}

void SearchPublicMediaInfoRequest::setFavorite(bool favorite) {
  favorite_ = favorite;
  setParameter(std::string("Favorite"), favorite ? "true" : "false");
}

