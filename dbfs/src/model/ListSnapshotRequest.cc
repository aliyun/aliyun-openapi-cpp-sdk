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

#include <alibabacloud/dbfs/model/ListSnapshotRequest.h>

using AlibabaCloud::DBFS::Model::ListSnapshotRequest;

ListSnapshotRequest::ListSnapshotRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ListSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

ListSnapshotRequest::~ListSnapshotRequest() {}

std::string ListSnapshotRequest::getSortType() const {
  return sortType_;
}

void ListSnapshotRequest::setSortType(const std::string &sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), sortType);
}

std::string ListSnapshotRequest::getSnapshotIds() const {
  return snapshotIds_;
}

void ListSnapshotRequest::setSnapshotIds(const std::string &snapshotIds) {
  snapshotIds_ = snapshotIds;
  setParameter(std::string("SnapshotIds"), snapshotIds);
}

std::string ListSnapshotRequest::getFilterValue() const {
  return filterValue_;
}

void ListSnapshotRequest::setFilterValue(const std::string &filterValue) {
  filterValue_ = filterValue;
  setParameter(std::string("FilterValue"), filterValue);
}

std::string ListSnapshotRequest::getSnapshotName() const {
  return snapshotName_;
}

void ListSnapshotRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

int ListSnapshotRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSnapshotRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSnapshotRequest::getFilterKey() const {
  return filterKey_;
}

void ListSnapshotRequest::setFilterKey(const std::string &filterKey) {
  filterKey_ = filterKey;
  setParameter(std::string("FilterKey"), filterKey);
}

std::string ListSnapshotRequest::getSortKey() const {
  return sortKey_;
}

void ListSnapshotRequest::setSortKey(const std::string &sortKey) {
  sortKey_ = sortKey;
  setParameter(std::string("SortKey"), sortKey);
}

std::string ListSnapshotRequest::getRegionId() const {
  return regionId_;
}

void ListSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListSnapshotRequest::getPageSize() const {
  return pageSize_;
}

void ListSnapshotRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSnapshotRequest::getFsId() const {
  return fsId_;
}

void ListSnapshotRequest::setFsId(const std::string &fsId) {
  fsId_ = fsId;
  setParameter(std::string("FsId"), fsId);
}

std::string ListSnapshotRequest::getSnapshotType() const {
  return snapshotType_;
}

void ListSnapshotRequest::setSnapshotType(const std::string &snapshotType) {
  snapshotType_ = snapshotType;
  setParameter(std::string("SnapshotType"), snapshotType);
}

std::string ListSnapshotRequest::getStatus() const {
  return status_;
}

void ListSnapshotRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

