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

#include <alibabacloud/arms/model/QueryMetricByPageRequest.h>

using AlibabaCloud::ARMS::Model::QueryMetricByPageRequest;

QueryMetricByPageRequest::QueryMetricByPageRequest()
    : RpcServiceRequest("arms", "2019-08-08", "QueryMetricByPage") {
  setMethod(HttpRequest::Method::Post);
}

QueryMetricByPageRequest::~QueryMetricByPageRequest() {}

std::string QueryMetricByPageRequest::getConsistencyQueryStrategy() const {
  return consistencyQueryStrategy_;
}

void QueryMetricByPageRequest::setConsistencyQueryStrategy(const std::string &consistencyQueryStrategy) {
  consistencyQueryStrategy_ = consistencyQueryStrategy;
  setParameter(std::string("ConsistencyQueryStrategy"), consistencyQueryStrategy);
}

long QueryMetricByPageRequest::getEndTime() const {
  return endTime_;
}

void QueryMetricByPageRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string QueryMetricByPageRequest::getOrderBy() const {
  return orderBy_;
}

void QueryMetricByPageRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int QueryMetricByPageRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryMetricByPageRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long QueryMetricByPageRequest::getStartTime() const {
  return startTime_;
}

void QueryMetricByPageRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string QueryMetricByPageRequest::getConsistencyDataKey() const {
  return consistencyDataKey_;
}

void QueryMetricByPageRequest::setConsistencyDataKey(const std::string &consistencyDataKey) {
  consistencyDataKey_ = consistencyDataKey;
  setParameter(std::string("ConsistencyDataKey"), consistencyDataKey);
}

std::vector<QueryMetricByPageRequest::Filters> QueryMetricByPageRequest::getFilters() const {
  return filters_;
}

void QueryMetricByPageRequest::setFilters(const std::vector<QueryMetricByPageRequest::Filters> &filters) {
  filters_ = filters;
  for(int dep1 = 0; dep1 != filters.size(); dep1++) {
  auto filtersObj = filters.at(dep1);
  std::string filtersObjStr = std::string("Filters") + "." + std::to_string(dep1 + 1);
    setParameter(filtersObjStr + ".Value", filtersObj.value);
    setParameter(filtersObjStr + ".Key", filtersObj.key);
  }
}

std::string QueryMetricByPageRequest::getProxyUserId() const {
  return proxyUserId_;
}

void QueryMetricByPageRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::vector<std::string> QueryMetricByPageRequest::getMeasures() const {
  return measures_;
}

void QueryMetricByPageRequest::setMeasures(const std::vector<std::string> &measures) {
  measures_ = measures;
}

int QueryMetricByPageRequest::getIntervalInSec() const {
  return intervalInSec_;
}

void QueryMetricByPageRequest::setIntervalInSec(int intervalInSec) {
  intervalInSec_ = intervalInSec;
  setParameter(std::string("IntervalInSec"), std::to_string(intervalInSec));
}

std::string QueryMetricByPageRequest::getMetric() const {
  return metric_;
}

void QueryMetricByPageRequest::setMetric(const std::string &metric) {
  metric_ = metric;
  setParameter(std::string("Metric"), metric);
}

std::vector<std::string> QueryMetricByPageRequest::getCustomFilters() const {
  return customFilters_;
}

void QueryMetricByPageRequest::setCustomFilters(const std::vector<std::string> &customFilters) {
  customFilters_ = customFilters;
}

int QueryMetricByPageRequest::getPageSize() const {
  return pageSize_;
}

void QueryMetricByPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryMetricByPageRequest::getOrder() const {
  return order_;
}

void QueryMetricByPageRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::vector<std::string> QueryMetricByPageRequest::getDimensions() const {
  return dimensions_;
}

void QueryMetricByPageRequest::setDimensions(const std::vector<std::string> &dimensions) {
  dimensions_ = dimensions;
}

