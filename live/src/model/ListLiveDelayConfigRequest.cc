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

#include <alibabacloud/live/model/ListLiveDelayConfigRequest.h>

using AlibabaCloud::Live::Model::ListLiveDelayConfigRequest;

ListLiveDelayConfigRequest::ListLiveDelayConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveDelayConfig") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveDelayConfigRequest::~ListLiveDelayConfigRequest() {}

int ListLiveDelayConfigRequest::getPageNum() const {
  return pageNum_;
}

void ListLiveDelayConfigRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListLiveDelayConfigRequest::getRegionId() const {
  return regionId_;
}

void ListLiveDelayConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListLiveDelayConfigRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveDelayConfigRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListLiveDelayConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ListLiveDelayConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListLiveDelayConfigRequest::getDomain() const {
  return domain_;
}

void ListLiveDelayConfigRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

