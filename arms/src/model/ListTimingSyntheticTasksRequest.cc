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

#include <alibabacloud/arms/model/ListTimingSyntheticTasksRequest.h>

using AlibabaCloud::ARMS::Model::ListTimingSyntheticTasksRequest;

ListTimingSyntheticTasksRequest::ListTimingSyntheticTasksRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListTimingSyntheticTasks") {
  setMethod(HttpRequest::Method::Get);
}

ListTimingSyntheticTasksRequest::~ListTimingSyntheticTasksRequest() {}

std::string ListTimingSyntheticTasksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListTimingSyntheticTasksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

ListTimingSyntheticTasksRequest::Search ListTimingSyntheticTasksRequest::getSearch() const {
  return search_;
}

void ListTimingSyntheticTasksRequest::setSearch(const ListTimingSyntheticTasksRequest::Search &search) {
  search_ = search;
  for(int dep1 = 0; dep1 != search.taskTypes.size(); dep1++) {
    setParameter(std::string("Search") + ".TaskTypes." + std::to_string(dep1 + 1), std::to_string(search.taskTypes[dep1]));
  }
  setParameter(std::string("Search") + ".Name", search.name);
  setParameter(std::string("Search") + ".PageSize", std::to_string(search.pageSize));
  setParameter(std::string("Search") + ".Page", std::to_string(search.page));
  for(int dep1 = 0; dep1 != search.taskIds.size(); dep1++) {
    setParameter(std::string("Search") + ".TaskIds." + std::to_string(dep1 + 1), search.taskIds[dep1]);
  }
  setParameter(std::string("Search") + ".Status", search.status);
  setParameter(std::string("Search") + ".OrderField", search.orderField);
  setParameter(std::string("Search") + ".Order", std::to_string(search.order));
}

std::string ListTimingSyntheticTasksRequest::getRegionId() const {
  return regionId_;
}

void ListTimingSyntheticTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ListTimingSyntheticTasksRequest::Tags> ListTimingSyntheticTasksRequest::getTags() const {
  return tags_;
}

void ListTimingSyntheticTasksRequest::setTags(const std::vector<ListTimingSyntheticTasksRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

