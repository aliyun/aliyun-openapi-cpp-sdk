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

#include <alibabacloud/config/model/ListResourceEvaluationResultsRequest.h>

using AlibabaCloud::Config::Model::ListResourceEvaluationResultsRequest;

ListResourceEvaluationResultsRequest::ListResourceEvaluationResultsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListResourceEvaluationResults") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceEvaluationResultsRequest::~ListResourceEvaluationResultsRequest() {}

std::string ListResourceEvaluationResultsRequest::getResourceId() const {
  return resourceId_;
}

void ListResourceEvaluationResultsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListResourceEvaluationResultsRequest::getResourceType() const {
  return resourceType_;
}

void ListResourceEvaluationResultsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListResourceEvaluationResultsRequest::getNextToken() const {
  return nextToken_;
}

void ListResourceEvaluationResultsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListResourceEvaluationResultsRequest::getMaxResults() const {
  return maxResults_;
}

void ListResourceEvaluationResultsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListResourceEvaluationResultsRequest::getRegion() const {
  return region_;
}

void ListResourceEvaluationResultsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string ListResourceEvaluationResultsRequest::getComplianceType() const {
  return complianceType_;
}

void ListResourceEvaluationResultsRequest::setComplianceType(const std::string &complianceType) {
  complianceType_ = complianceType;
  setParameter(std::string("ComplianceType"), complianceType);
}

