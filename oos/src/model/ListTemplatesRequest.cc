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

#include <alibabacloud/oos/model/ListTemplatesRequest.h>

using AlibabaCloud::Oos::Model::ListTemplatesRequest;

ListTemplatesRequest::ListTemplatesRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListTemplatesRequest::~ListTemplatesRequest() {}

std::string ListTemplatesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListTemplatesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListTemplatesRequest::getCreatedDateBefore() const {
  return createdDateBefore_;
}

void ListTemplatesRequest::setCreatedDateBefore(const std::string &createdDateBefore) {
  createdDateBefore_ = createdDateBefore;
  setParameter(std::string("CreatedDateBefore"), createdDateBefore);
}

std::string ListTemplatesRequest::getRegionId() const {
  return regionId_;
}

void ListTemplatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTemplatesRequest::getCreatedBy() const {
  return createdBy_;
}

void ListTemplatesRequest::setCreatedBy(const std::string &createdBy) {
  createdBy_ = createdBy;
  setParameter(std::string("CreatedBy"), createdBy);
}

std::string ListTemplatesRequest::getNextToken() const {
  return nextToken_;
}

void ListTemplatesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTemplatesRequest::getTemplateType() const {
  return templateType_;
}

void ListTemplatesRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string ListTemplatesRequest::getTemplateName() const {
  return templateName_;
}

void ListTemplatesRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string ListTemplatesRequest::getSortOrder() const {
  return sortOrder_;
}

void ListTemplatesRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::string ListTemplatesRequest::getShareType() const {
  return shareType_;
}

void ListTemplatesRequest::setShareType(const std::string &shareType) {
  shareType_ = shareType;
  setParameter(std::string("ShareType"), shareType);
}

bool ListTemplatesRequest::getHasTrigger() const {
  return hasTrigger_;
}

void ListTemplatesRequest::setHasTrigger(bool hasTrigger) {
  hasTrigger_ = hasTrigger;
  setParameter(std::string("HasTrigger"), hasTrigger ? "true" : "false");
}

std::string ListTemplatesRequest::getCreatedDateAfter() const {
  return createdDateAfter_;
}

void ListTemplatesRequest::setCreatedDateAfter(const std::string &createdDateAfter) {
  createdDateAfter_ = createdDateAfter;
  setParameter(std::string("CreatedDateAfter"), createdDateAfter);
}

std::map<std::string, std::string> ListTemplatesRequest::getTags() const {
  return tags_;
}

void ListTemplatesRequest::setTags(std::map<std::string, std::string> tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

int ListTemplatesRequest::getMaxResults() const {
  return maxResults_;
}

void ListTemplatesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTemplatesRequest::getTemplateFormat() const {
  return templateFormat_;
}

void ListTemplatesRequest::setTemplateFormat(const std::string &templateFormat) {
  templateFormat_ = templateFormat;
  setParameter(std::string("TemplateFormat"), templateFormat);
}

std::string ListTemplatesRequest::getSortField() const {
  return sortField_;
}

void ListTemplatesRequest::setSortField(const std::string &sortField) {
  sortField_ = sortField;
  setParameter(std::string("SortField"), sortField);
}

std::string ListTemplatesRequest::getCategory() const {
  return category_;
}

void ListTemplatesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

