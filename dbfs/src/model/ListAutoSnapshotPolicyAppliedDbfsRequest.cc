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

#include <alibabacloud/dbfs/model/ListAutoSnapshotPolicyAppliedDbfsRequest.h>

using AlibabaCloud::DBFS::Model::ListAutoSnapshotPolicyAppliedDbfsRequest;

ListAutoSnapshotPolicyAppliedDbfsRequest::ListAutoSnapshotPolicyAppliedDbfsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ListAutoSnapshotPolicyAppliedDbfs") {
  setMethod(HttpRequest::Method::Post);
}

ListAutoSnapshotPolicyAppliedDbfsRequest::~ListAutoSnapshotPolicyAppliedDbfsRequest() {}

std::string ListAutoSnapshotPolicyAppliedDbfsRequest::getFilterValue() const {
  return filterValue_;
}

void ListAutoSnapshotPolicyAppliedDbfsRequest::setFilterValue(const std::string &filterValue) {
  filterValue_ = filterValue;
  setParameter(std::string("FilterValue"), filterValue);
}

int ListAutoSnapshotPolicyAppliedDbfsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAutoSnapshotPolicyAppliedDbfsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListAutoSnapshotPolicyAppliedDbfsRequest::getFilterKey() const {
  return filterKey_;
}

void ListAutoSnapshotPolicyAppliedDbfsRequest::setFilterKey(const std::string &filterKey) {
  filterKey_ = filterKey;
  setParameter(std::string("FilterKey"), filterKey);
}

std::string ListAutoSnapshotPolicyAppliedDbfsRequest::getPolicyId() const {
  return policyId_;
}

void ListAutoSnapshotPolicyAppliedDbfsRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string ListAutoSnapshotPolicyAppliedDbfsRequest::getRegionId() const {
  return regionId_;
}

void ListAutoSnapshotPolicyAppliedDbfsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListAutoSnapshotPolicyAppliedDbfsRequest::getPageSize() const {
  return pageSize_;
}

void ListAutoSnapshotPolicyAppliedDbfsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

