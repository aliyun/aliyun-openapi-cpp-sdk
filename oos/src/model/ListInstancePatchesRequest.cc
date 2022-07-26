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

#include <alibabacloud/oos/model/ListInstancePatchesRequest.h>

using AlibabaCloud::Oos::Model::ListInstancePatchesRequest;

ListInstancePatchesRequest::ListInstancePatchesRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListInstancePatches") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancePatchesRequest::~ListInstancePatchesRequest() {}

std::string ListInstancePatchesRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstancePatchesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListInstancePatchesRequest::getRegionId() const {
  return regionId_;
}

void ListInstancePatchesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListInstancePatchesRequest::getNextToken() const {
  return nextToken_;
}

void ListInstancePatchesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListInstancePatchesRequest::getMaxResults() const {
  return maxResults_;
}

void ListInstancePatchesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListInstancePatchesRequest::getPatchStatuses() const {
  return patchStatuses_;
}

void ListInstancePatchesRequest::setPatchStatuses(const std::string &patchStatuses) {
  patchStatuses_ = patchStatuses;
  setParameter(std::string("PatchStatuses"), patchStatuses);
}

