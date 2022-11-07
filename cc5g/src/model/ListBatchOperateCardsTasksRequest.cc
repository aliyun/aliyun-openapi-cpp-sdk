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

#include <alibabacloud/cc5g/model/ListBatchOperateCardsTasksRequest.h>

using AlibabaCloud::CC5G::Model::ListBatchOperateCardsTasksRequest;

ListBatchOperateCardsTasksRequest::ListBatchOperateCardsTasksRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListBatchOperateCardsTasks") {
  setMethod(HttpRequest::Method::Get);
}

ListBatchOperateCardsTasksRequest::~ListBatchOperateCardsTasksRequest() {}

std::string ListBatchOperateCardsTasksRequest::getRegionId() const {
  return regionId_;
}

void ListBatchOperateCardsTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListBatchOperateCardsTasksRequest::getNextToken() const {
  return nextToken_;
}

void ListBatchOperateCardsTasksRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListBatchOperateCardsTasksRequest::std::string> ListBatchOperateCardsTasksRequest::getBatchOperateCardsTaskIds() const {
  return batchOperateCardsTaskIds_;
}

void ListBatchOperateCardsTasksRequest::setBatchOperateCardsTaskIds(const std::vector<ListBatchOperateCardsTasksRequest::std::string> &batchOperateCardsTaskIds) {
  batchOperateCardsTaskIds_ = batchOperateCardsTaskIds;
  for(int dep1 = 0; dep1 != batchOperateCardsTaskIds.size(); dep1++) {
    setParameter(std::string("BatchOperateCardsTaskIds") + "." + std::to_string(dep1 + 1), batchOperateCardsTaskIds[dep1]);
  }
}

std::vector<ListBatchOperateCardsTasksRequest::std::string> ListBatchOperateCardsTasksRequest::getNames() const {
  return names_;
}

void ListBatchOperateCardsTasksRequest::setNames(const std::vector<ListBatchOperateCardsTasksRequest::std::string> &names) {
  names_ = names;
  for(int dep1 = 0; dep1 != names.size(); dep1++) {
    setParameter(std::string("Names") + "." + std::to_string(dep1 + 1), names[dep1]);
  }
}

long ListBatchOperateCardsTasksRequest::getMaxResults() const {
  return maxResults_;
}

void ListBatchOperateCardsTasksRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListBatchOperateCardsTasksRequest::std::string> ListBatchOperateCardsTasksRequest::getStatuses() const {
  return statuses_;
}

void ListBatchOperateCardsTasksRequest::setStatuses(const std::vector<ListBatchOperateCardsTasksRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

