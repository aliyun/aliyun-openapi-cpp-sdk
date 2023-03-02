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

#include <alibabacloud/swas-open/model/ListDisksRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListDisksRequest;

ListDisksRequest::ListDisksRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListDisks") {
  setMethod(HttpRequest::Method::Post);
}

ListDisksRequest::~ListDisksRequest() {}

int ListDisksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDisksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDisksRequest::getInstanceId() const {
  return instanceId_;
}

void ListDisksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListDisksRequest::getRegionId() const {
  return regionId_;
}

void ListDisksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListDisksRequest::getPageSize() const {
  return pageSize_;
}

void ListDisksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDisksRequest::getDiskIds() const {
  return diskIds_;
}

void ListDisksRequest::setDiskIds(const std::string &diskIds) {
  diskIds_ = diskIds;
  setParameter(std::string("DiskIds"), diskIds);
}

