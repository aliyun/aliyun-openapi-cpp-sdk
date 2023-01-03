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

#include <alibabacloud/dbfs/model/ListAutoSnapshotPolicyUnappliedDbfsRequest.h>

using AlibabaCloud::DBFS::Model::ListAutoSnapshotPolicyUnappliedDbfsRequest;

ListAutoSnapshotPolicyUnappliedDbfsRequest::ListAutoSnapshotPolicyUnappliedDbfsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ListAutoSnapshotPolicyUnappliedDbfs") {
  setMethod(HttpRequest::Method::Post);
}

ListAutoSnapshotPolicyUnappliedDbfsRequest::~ListAutoSnapshotPolicyUnappliedDbfsRequest() {}

std::string ListAutoSnapshotPolicyUnappliedDbfsRequest::getFilterValue() const {
  return filterValue_;
}

void ListAutoSnapshotPolicyUnappliedDbfsRequest::setFilterValue(const std::string &filterValue) {
  filterValue_ = filterValue;
  setParameter(std::string("FilterValue"), filterValue);
}

int ListAutoSnapshotPolicyUnappliedDbfsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAutoSnapshotPolicyUnappliedDbfsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListAutoSnapshotPolicyUnappliedDbfsRequest::getFilterKey() const {
  return filterKey_;
}

void ListAutoSnapshotPolicyUnappliedDbfsRequest::setFilterKey(const std::string &filterKey) {
  filterKey_ = filterKey;
  setParameter(std::string("FilterKey"), filterKey);
}

std::string ListAutoSnapshotPolicyUnappliedDbfsRequest::getRegionId() const {
  return regionId_;
}

void ListAutoSnapshotPolicyUnappliedDbfsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListAutoSnapshotPolicyUnappliedDbfsRequest::getPageSize() const {
  return pageSize_;
}

void ListAutoSnapshotPolicyUnappliedDbfsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

