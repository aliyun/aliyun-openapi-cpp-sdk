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

#include <alibabacloud/oos/model/ListTemplateVersionsRequest.h>

using AlibabaCloud::Oos::Model::ListTemplateVersionsRequest;

ListTemplateVersionsRequest::ListTemplateVersionsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListTemplateVersions") {
  setMethod(HttpRequest::Method::Post);
}

ListTemplateVersionsRequest::~ListTemplateVersionsRequest() {}

std::string ListTemplateVersionsRequest::getRegionId() const {
  return regionId_;
}

void ListTemplateVersionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTemplateVersionsRequest::getNextToken() const {
  return nextToken_;
}

void ListTemplateVersionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListTemplateVersionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTemplateVersionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTemplateVersionsRequest::getTemplateName() const {
  return templateName_;
}

void ListTemplateVersionsRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string ListTemplateVersionsRequest::getShareType() const {
  return shareType_;
}

void ListTemplateVersionsRequest::setShareType(const std::string &shareType) {
  shareType_ = shareType;
  setParameter(std::string("ShareType"), shareType);
}

