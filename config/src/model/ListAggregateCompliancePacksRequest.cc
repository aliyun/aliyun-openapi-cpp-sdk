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

#include <alibabacloud/config/model/ListAggregateCompliancePacksRequest.h>

using AlibabaCloud::Config::Model::ListAggregateCompliancePacksRequest;

ListAggregateCompliancePacksRequest::ListAggregateCompliancePacksRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListAggregateCompliancePacks") {
  setMethod(HttpRequest::Method::Post);
}

ListAggregateCompliancePacksRequest::~ListAggregateCompliancePacksRequest() {}

std::string ListAggregateCompliancePacksRequest::getAggregatorId() const {
  return aggregatorId_;
}

void ListAggregateCompliancePacksRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

int ListAggregateCompliancePacksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAggregateCompliancePacksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListAggregateCompliancePacksRequest::getPageSize() const {
  return pageSize_;
}

void ListAggregateCompliancePacksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAggregateCompliancePacksRequest::getStatus() const {
  return status_;
}

void ListAggregateCompliancePacksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

