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

#include <alibabacloud/ecs/model/DescribeDiagnosticMetricsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDiagnosticMetricsRequest;

DescribeDiagnosticMetricsRequest::DescribeDiagnosticMetricsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDiagnosticMetrics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosticMetricsRequest::~DescribeDiagnosticMetricsRequest() {}

std::vector<std::string> DescribeDiagnosticMetricsRequest::getMetricIds() const {
  return metricIds_;
}

void DescribeDiagnosticMetricsRequest::setMetricIds(const std::vector<std::string> &metricIds) {
  metricIds_ = metricIds;
}

std::string DescribeDiagnosticMetricsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosticMetricsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosticMetricsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDiagnosticMetricsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeDiagnosticMetricsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeDiagnosticMetricsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int DescribeDiagnosticMetricsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDiagnosticMetricsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

