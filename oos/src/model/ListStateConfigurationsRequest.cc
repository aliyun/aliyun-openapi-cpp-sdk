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

#include <alibabacloud/oos/model/ListStateConfigurationsRequest.h>

using AlibabaCloud::Oos::Model::ListStateConfigurationsRequest;

ListStateConfigurationsRequest::ListStateConfigurationsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListStateConfigurations") {
  setMethod(HttpRequest::Method::Post);
}

ListStateConfigurationsRequest::~ListStateConfigurationsRequest() {}

std::string ListStateConfigurationsRequest::getStateConfigurationIds() const {
  return stateConfigurationIds_;
}

void ListStateConfigurationsRequest::setStateConfigurationIds(const std::string &stateConfigurationIds) {
  stateConfigurationIds_ = stateConfigurationIds;
  setParameter(std::string("StateConfigurationIds"), stateConfigurationIds);
}

std::string ListStateConfigurationsRequest::getTags() const {
  return tags_;
}

void ListStateConfigurationsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ListStateConfigurationsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListStateConfigurationsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListStateConfigurationsRequest::getTemplateVersion() const {
  return templateVersion_;
}

void ListStateConfigurationsRequest::setTemplateVersion(const std::string &templateVersion) {
  templateVersion_ = templateVersion;
  setParameter(std::string("TemplateVersion"), templateVersion);
}

std::string ListStateConfigurationsRequest::getRegionId() const {
  return regionId_;
}

void ListStateConfigurationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListStateConfigurationsRequest::getNextToken() const {
  return nextToken_;
}

void ListStateConfigurationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListStateConfigurationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListStateConfigurationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListStateConfigurationsRequest::getTemplateName() const {
  return templateName_;
}

void ListStateConfigurationsRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

