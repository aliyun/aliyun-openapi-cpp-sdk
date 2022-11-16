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

#include <alibabacloud/dataworks-public/model/ListProjectsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListProjectsRequest;

ListProjectsRequest::ListProjectsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListProjects") {
  setMethod(HttpRequest::Method::Post);
}

ListProjectsRequest::~ListProjectsRequest() {}

int ListProjectsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListProjectsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::vector<ListProjectsRequest::Tags> ListProjectsRequest::getTags() const {
  return tags_;
}

void ListProjectsRequest::setTags(const std::vector<ListProjectsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string ListProjectsRequest::getResourceManagerResourceGroupId() const {
  return resourceManagerResourceGroupId_;
}

void ListProjectsRequest::setResourceManagerResourceGroupId(const std::string &resourceManagerResourceGroupId) {
  resourceManagerResourceGroupId_ = resourceManagerResourceGroupId;
  setParameter(std::string("ResourceManagerResourceGroupId"), resourceManagerResourceGroupId);
}

int ListProjectsRequest::getPageSize() const {
  return pageSize_;
}

void ListProjectsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

