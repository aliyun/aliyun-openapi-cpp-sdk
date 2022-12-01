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

#include <alibabacloud/opensearch/model/ListAppGroupMetricsRequest.h>

using AlibabaCloud::OpenSearch::Model::ListAppGroupMetricsRequest;

ListAppGroupMetricsRequest::ListAppGroupMetricsRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/metrics"};
  setMethod(HttpRequest::Method::Get);
}

ListAppGroupMetricsRequest::~ListAppGroupMetricsRequest() {}

std::string ListAppGroupMetricsRequest::getMetricType() const {
  return metricType_;
}

void ListAppGroupMetricsRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("metricType"), metricType);
}

std::string ListAppGroupMetricsRequest::getIndexes() const {
  return indexes_;
}

void ListAppGroupMetricsRequest::setIndexes(const std::string &indexes) {
  indexes_ = indexes;
  setParameter(std::string("indexes"), indexes);
}

int ListAppGroupMetricsRequest::getEndTime() const {
  return endTime_;
}

void ListAppGroupMetricsRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

int ListAppGroupMetricsRequest::getStartTime() const {
  return startTime_;
}

void ListAppGroupMetricsRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

std::string ListAppGroupMetricsRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void ListAppGroupMetricsRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

