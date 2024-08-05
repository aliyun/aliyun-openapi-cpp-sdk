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

#include <alibabacloud/arms/model/ListSyntheticDetailRequest.h>

using AlibabaCloud::ARMS::Model::ListSyntheticDetailRequest;

ListSyntheticDetailRequest::ListSyntheticDetailRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListSyntheticDetail") {
  setMethod(HttpRequest::Method::Get);
}

ListSyntheticDetailRequest::~ListSyntheticDetailRequest() {}

long ListSyntheticDetailRequest::getEndTime() const {
  return endTime_;
}

void ListSyntheticDetailRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListSyntheticDetailRequest::getOrderBy() const {
  return orderBy_;
}

void ListSyntheticDetailRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long ListSyntheticDetailRequest::getStartTime() const {
  return startTime_;
}

void ListSyntheticDetailRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::map<std::string, std::string> ListSyntheticDetailRequest::getFilters() const {
  return filters_;
}

void ListSyntheticDetailRequest::setFilters(const std::map<std::string, std::string> &filters) {
  filters_ = filters;
  for(auto const &iter1 : filters) {
    setParameter(std::string("Filters") + "." + iter1.first, iter1.second);
  }
}

std::vector<ListSyntheticDetailRequest::ExactFilters> ListSyntheticDetailRequest::getExactFilters() const {
  return exactFilters_;
}

void ListSyntheticDetailRequest::setExactFilters(const std::vector<ListSyntheticDetailRequest::ExactFilters> &exactFilters) {
  exactFilters_ = exactFilters;
  for(int dep1 = 0; dep1 != exactFilters.size(); dep1++) {
    setParameter(std::string("ExactFilters") + "." + std::to_string(dep1 + 1) + ".OpType", exactFilters[dep1].opType);
    setParameter(std::string("ExactFilters") + "." + std::to_string(dep1 + 1) + ".Value", std::to_string(exactFilters[dep1].value));
    setParameter(std::string("ExactFilters") + "." + std::to_string(dep1 + 1) + ".Key", exactFilters[dep1].key);
  }
}

int ListSyntheticDetailRequest::getSyntheticType() const {
  return syntheticType_;
}

void ListSyntheticDetailRequest::setSyntheticType(int syntheticType) {
  syntheticType_ = syntheticType;
  setParameter(std::string("SyntheticType"), std::to_string(syntheticType));
}

std::string ListSyntheticDetailRequest::getRegionId() const {
  return regionId_;
}

void ListSyntheticDetailRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ListSyntheticDetailRequest::AdvancedFilters> ListSyntheticDetailRequest::getAdvancedFilters() const {
  return advancedFilters_;
}

void ListSyntheticDetailRequest::setAdvancedFilters(const std::vector<ListSyntheticDetailRequest::AdvancedFilters> &advancedFilters) {
  advancedFilters_ = advancedFilters;
  for(int dep1 = 0; dep1 != advancedFilters.size(); dep1++) {
    setParameter(std::string("AdvancedFilters") + "." + std::to_string(dep1 + 1) + ".OpType", advancedFilters[dep1].opType);
    setParameter(std::string("AdvancedFilters") + "." + std::to_string(dep1 + 1) + ".Value", std::to_string(advancedFilters[dep1].value));
    setParameter(std::string("AdvancedFilters") + "." + std::to_string(dep1 + 1) + ".Key", advancedFilters[dep1].key);
  }
}

int ListSyntheticDetailRequest::getPageSize() const {
  return pageSize_;
}

void ListSyntheticDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSyntheticDetailRequest::getDetail() const {
  return detail_;
}

void ListSyntheticDetailRequest::setDetail(const std::string &detail) {
  detail_ = detail;
  setParameter(std::string("Detail"), detail);
}

int ListSyntheticDetailRequest::getPage() const {
  return page_;
}

void ListSyntheticDetailRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string ListSyntheticDetailRequest::getCategory() const {
  return category_;
}

void ListSyntheticDetailRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string ListSyntheticDetailRequest::getOrder() const {
  return order_;
}

void ListSyntheticDetailRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

