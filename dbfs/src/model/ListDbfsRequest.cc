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

#include <alibabacloud/dbfs/model/ListDbfsRequest.h>

using AlibabaCloud::DBFS::Model::ListDbfsRequest;

ListDbfsRequest::ListDbfsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ListDbfs") {
  setMethod(HttpRequest::Method::Post);
}

ListDbfsRequest::~ListDbfsRequest() {}

std::string ListDbfsRequest::getSortType() const {
  return sortType_;
}

void ListDbfsRequest::setSortType(const std::string &sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), sortType);
}

std::string ListDbfsRequest::getFilterValue() const {
  return filterValue_;
}

void ListDbfsRequest::setFilterValue(const std::string &filterValue) {
  filterValue_ = filterValue;
  setParameter(std::string("FilterValue"), filterValue);
}

int ListDbfsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDbfsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDbfsRequest::getTags() const {
  return tags_;
}

void ListDbfsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ListDbfsRequest::getFilterKey() const {
  return filterKey_;
}

void ListDbfsRequest::setFilterKey(const std::string &filterKey) {
  filterKey_ = filterKey;
  setParameter(std::string("FilterKey"), filterKey);
}

std::string ListDbfsRequest::getSortKey() const {
  return sortKey_;
}

void ListDbfsRequest::setSortKey(const std::string &sortKey) {
  sortKey_ = sortKey;
  setParameter(std::string("SortKey"), sortKey);
}

std::string ListDbfsRequest::getRegionId() const {
  return regionId_;
}

void ListDbfsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListDbfsRequest::getPageSize() const {
  return pageSize_;
}

void ListDbfsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

