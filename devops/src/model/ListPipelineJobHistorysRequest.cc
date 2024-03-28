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

#include <alibabacloud/devops/model/ListPipelineJobHistorysRequest.h>

using AlibabaCloud::Devops::Model::ListPipelineJobHistorysRequest;

ListPipelineJobHistorysRequest::ListPipelineJobHistorysRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipeline/[pipelineId]/job/historys"};
  setMethod(HttpRequest::Method::Post);
}

ListPipelineJobHistorysRequest::~ListPipelineJobHistorysRequest() {}

std::string ListPipelineJobHistorysRequest::getIdentifier() const {
  return identifier_;
}

void ListPipelineJobHistorysRequest::setIdentifier(const std::string &identifier) {
  identifier_ = identifier;
  setParameter(std::string("identifier"), identifier);
}

std::string ListPipelineJobHistorysRequest::getPipelineId() const {
  return pipelineId_;
}

void ListPipelineJobHistorysRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), pipelineId);
}

std::string ListPipelineJobHistorysRequest::getOrganizationId() const {
  return organizationId_;
}

void ListPipelineJobHistorysRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListPipelineJobHistorysRequest::getNextToken() const {
  return nextToken_;
}

void ListPipelineJobHistorysRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

long ListPipelineJobHistorysRequest::getMaxResults() const {
  return maxResults_;
}

void ListPipelineJobHistorysRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

std::string ListPipelineJobHistorysRequest::getCategory() const {
  return category_;
}

void ListPipelineJobHistorysRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("category"), category);
}

