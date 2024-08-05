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

#include <alibabacloud/arms/model/SearchRetcodeAppByPageRequest.h>

using AlibabaCloud::ARMS::Model::SearchRetcodeAppByPageRequest;

SearchRetcodeAppByPageRequest::SearchRetcodeAppByPageRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SearchRetcodeAppByPage") {
  setMethod(HttpRequest::Method::Post);
}

SearchRetcodeAppByPageRequest::~SearchRetcodeAppByPageRequest() {}

std::string SearchRetcodeAppByPageRequest::getRetcodeAppId() const {
  return retcodeAppId_;
}

void SearchRetcodeAppByPageRequest::setRetcodeAppId(const std::string &retcodeAppId) {
  retcodeAppId_ = retcodeAppId;
  setParameter(std::string("RetcodeAppId"), retcodeAppId);
}

int SearchRetcodeAppByPageRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchRetcodeAppByPageRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::vector<SearchRetcodeAppByPageRequest::Tags> SearchRetcodeAppByPageRequest::getTags() const {
  return tags_;
}

void SearchRetcodeAppByPageRequest::setTags(const std::vector<SearchRetcodeAppByPageRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string SearchRetcodeAppByPageRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void SearchRetcodeAppByPageRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string SearchRetcodeAppByPageRequest::getRegionId() const {
  return regionId_;
}

void SearchRetcodeAppByPageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SearchRetcodeAppByPageRequest::getRetcodeAppName() const {
  return retcodeAppName_;
}

void SearchRetcodeAppByPageRequest::setRetcodeAppName(const std::string &retcodeAppName) {
  retcodeAppName_ = retcodeAppName;
  setParameter(std::string("RetcodeAppName"), retcodeAppName);
}

int SearchRetcodeAppByPageRequest::getPageSize() const {
  return pageSize_;
}

void SearchRetcodeAppByPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

