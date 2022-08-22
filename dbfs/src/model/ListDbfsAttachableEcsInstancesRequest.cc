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

#include <alibabacloud/dbfs/model/ListDbfsAttachableEcsInstancesRequest.h>

using AlibabaCloud::DBFS::Model::ListDbfsAttachableEcsInstancesRequest;

ListDbfsAttachableEcsInstancesRequest::ListDbfsAttachableEcsInstancesRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ListDbfsAttachableEcsInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListDbfsAttachableEcsInstancesRequest::~ListDbfsAttachableEcsInstancesRequest() {}

std::string ListDbfsAttachableEcsInstancesRequest::getFilterKey() const {
  return filterKey_;
}

void ListDbfsAttachableEcsInstancesRequest::setFilterKey(const std::string &filterKey) {
  filterKey_ = filterKey;
  setParameter(std::string("FilterKey"), filterKey);
}

std::string ListDbfsAttachableEcsInstancesRequest::getRegionId() const {
  return regionId_;
}

void ListDbfsAttachableEcsInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListDbfsAttachableEcsInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListDbfsAttachableEcsInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDbfsAttachableEcsInstancesRequest::getFilterValue() const {
  return filterValue_;
}

void ListDbfsAttachableEcsInstancesRequest::setFilterValue(const std::string &filterValue) {
  filterValue_ = filterValue;
  setParameter(std::string("FilterValue"), filterValue);
}

int ListDbfsAttachableEcsInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDbfsAttachableEcsInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

