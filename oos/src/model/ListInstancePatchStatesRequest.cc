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

#include <alibabacloud/oos/model/ListInstancePatchStatesRequest.h>

using AlibabaCloud::Oos::Model::ListInstancePatchStatesRequest;

ListInstancePatchStatesRequest::ListInstancePatchStatesRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListInstancePatchStates") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancePatchStatesRequest::~ListInstancePatchStatesRequest() {}

std::string ListInstancePatchStatesRequest::getRegionId() const {
  return regionId_;
}

void ListInstancePatchStatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListInstancePatchStatesRequest::getNextToken() const {
  return nextToken_;
}

void ListInstancePatchStatesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListInstancePatchStatesRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListInstancePatchStatesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

int ListInstancePatchStatesRequest::getMaxResults() const {
  return maxResults_;
}

void ListInstancePatchStatesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

