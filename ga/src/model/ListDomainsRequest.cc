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

#include <alibabacloud/ga/model/ListDomainsRequest.h>

using AlibabaCloud::Ga::Model::ListDomainsRequest;

ListDomainsRequest::ListDomainsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListDomains") {
  setMethod(HttpRequest::Method::Post);
}

ListDomainsRequest::~ListDomainsRequest() {}

int ListDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDomainsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDomainsRequest::getRegionId() const {
  return regionId_;
}

void ListDomainsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDomainsRequest::getDomain() const {
  return domain_;
}

void ListDomainsRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int ListDomainsRequest::getPageSize() const {
  return pageSize_;
}

void ListDomainsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDomainsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListDomainsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string ListDomainsRequest::getState() const {
  return state_;
}

void ListDomainsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

