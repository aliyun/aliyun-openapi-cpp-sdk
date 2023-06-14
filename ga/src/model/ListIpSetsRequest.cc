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

#include <alibabacloud/ga/model/ListIpSetsRequest.h>

using AlibabaCloud::Ga::Model::ListIpSetsRequest;

ListIpSetsRequest::ListIpSetsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListIpSets") {
  setMethod(HttpRequest::Method::Post);
}

ListIpSetsRequest::~ListIpSetsRequest() {}

int ListIpSetsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListIpSetsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListIpSetsRequest::getRegionId() const {
  return regionId_;
}

void ListIpSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListIpSetsRequest::getPageSize() const {
  return pageSize_;
}

void ListIpSetsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListIpSetsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListIpSetsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

