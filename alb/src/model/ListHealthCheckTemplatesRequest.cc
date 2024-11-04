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

#include <alibabacloud/alb/model/ListHealthCheckTemplatesRequest.h>

using AlibabaCloud::Alb::Model::ListHealthCheckTemplatesRequest;

ListHealthCheckTemplatesRequest::ListHealthCheckTemplatesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListHealthCheckTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListHealthCheckTemplatesRequest::~ListHealthCheckTemplatesRequest() {}

std::string ListHealthCheckTemplatesRequest::getNextToken() const {
  return nextToken_;
}

void ListHealthCheckTemplatesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListHealthCheckTemplatesRequest::Tag> ListHealthCheckTemplatesRequest::getTag() const {
  return tag_;
}

void ListHealthCheckTemplatesRequest::setTag(const std::vector<ListHealthCheckTemplatesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::vector<ListHealthCheckTemplatesRequest::std::string> ListHealthCheckTemplatesRequest::getHealthCheckTemplateNames() const {
  return healthCheckTemplateNames_;
}

void ListHealthCheckTemplatesRequest::setHealthCheckTemplateNames(const std::vector<ListHealthCheckTemplatesRequest::std::string> &healthCheckTemplateNames) {
  healthCheckTemplateNames_ = healthCheckTemplateNames;
  for(int dep1 = 0; dep1 != healthCheckTemplateNames.size(); dep1++) {
    setParameter(std::string("HealthCheckTemplateNames") + "." + std::to_string(dep1 + 1), healthCheckTemplateNames[dep1]);
  }
}

int ListHealthCheckTemplatesRequest::getMaxResults() const {
  return maxResults_;
}

void ListHealthCheckTemplatesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListHealthCheckTemplatesRequest::std::string> ListHealthCheckTemplatesRequest::getHealthCheckTemplateIds() const {
  return healthCheckTemplateIds_;
}

void ListHealthCheckTemplatesRequest::setHealthCheckTemplateIds(const std::vector<ListHealthCheckTemplatesRequest::std::string> &healthCheckTemplateIds) {
  healthCheckTemplateIds_ = healthCheckTemplateIds;
  for(int dep1 = 0; dep1 != healthCheckTemplateIds.size(); dep1++) {
    setParameter(std::string("HealthCheckTemplateIds") + "." + std::to_string(dep1 + 1), healthCheckTemplateIds[dep1]);
  }
}

