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

#include <alibabacloud/dbfs/model/ListSnapshotLinksRequest.h>

using AlibabaCloud::DBFS::Model::ListSnapshotLinksRequest;

ListSnapshotLinksRequest::ListSnapshotLinksRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ListSnapshotLinks") {
  setMethod(HttpRequest::Method::Post);
}

ListSnapshotLinksRequest::~ListSnapshotLinksRequest() {}

std::string ListSnapshotLinksRequest::getFilterValue() const {
  return filterValue_;
}

void ListSnapshotLinksRequest::setFilterValue(const std::string &filterValue) {
  filterValue_ = filterValue;
  setParameter(std::string("FilterValue"), filterValue);
}

int ListSnapshotLinksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSnapshotLinksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSnapshotLinksRequest::getFilterKey() const {
  return filterKey_;
}

void ListSnapshotLinksRequest::setFilterKey(const std::string &filterKey) {
  filterKey_ = filterKey;
  setParameter(std::string("FilterKey"), filterKey);
}

std::string ListSnapshotLinksRequest::getLinkIds() const {
  return linkIds_;
}

void ListSnapshotLinksRequest::setLinkIds(const std::string &linkIds) {
  linkIds_ = linkIds;
  setParameter(std::string("LinkIds"), linkIds);
}

std::string ListSnapshotLinksRequest::getRegionId() const {
  return regionId_;
}

void ListSnapshotLinksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListSnapshotLinksRequest::getPageSize() const {
  return pageSize_;
}

void ListSnapshotLinksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSnapshotLinksRequest::getFsIds() const {
  return fsIds_;
}

void ListSnapshotLinksRequest::setFsIds(const std::string &fsIds) {
  fsIds_ = fsIds;
  setParameter(std::string("FsIds"), fsIds);
}

