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

#include <alibabacloud/oos/model/ListPatchBaselinesRequest.h>

using AlibabaCloud::Oos::Model::ListPatchBaselinesRequest;

ListPatchBaselinesRequest::ListPatchBaselinesRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListPatchBaselines") {
  setMethod(HttpRequest::Method::Post);
}

ListPatchBaselinesRequest::~ListPatchBaselinesRequest() {}

std::vector<ListPatchBaselinesRequest::std::string> ListPatchBaselinesRequest::getSources() const {
  return sources_;
}

void ListPatchBaselinesRequest::setSources(const std::vector<ListPatchBaselinesRequest::std::string> &sources) {
  sources_ = sources;
  for(int dep1 = 0; dep1 != sources.size(); dep1++) {
    setParameter(std::string("Sources") + "." + std::to_string(dep1 + 1), sources[dep1]);
  }
}

std::string ListPatchBaselinesRequest::getRegionId() const {
  return regionId_;
}

void ListPatchBaselinesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPatchBaselinesRequest::getNextToken() const {
  return nextToken_;
}

void ListPatchBaselinesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListPatchBaselinesRequest::getShareType() const {
  return shareType_;
}

void ListPatchBaselinesRequest::setShareType(const std::string &shareType) {
  shareType_ = shareType;
  setParameter(std::string("ShareType"), shareType);
}

bool ListPatchBaselinesRequest::getApprovedPatchesEnableNonSecurity() const {
  return approvedPatchesEnableNonSecurity_;
}

void ListPatchBaselinesRequest::setApprovedPatchesEnableNonSecurity(bool approvedPatchesEnableNonSecurity) {
  approvedPatchesEnableNonSecurity_ = approvedPatchesEnableNonSecurity;
  setParameter(std::string("ApprovedPatchesEnableNonSecurity"), approvedPatchesEnableNonSecurity ? "true" : "false");
}

std::vector<ListPatchBaselinesRequest::Tags> ListPatchBaselinesRequest::getTags() const {
  return tags_;
}

void ListPatchBaselinesRequest::setTags(const std::vector<ListPatchBaselinesRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string ListPatchBaselinesRequest::getOperationSystem() const {
  return operationSystem_;
}

void ListPatchBaselinesRequest::setOperationSystem(const std::string &operationSystem) {
  operationSystem_ = operationSystem;
  setParameter(std::string("OperationSystem"), operationSystem);
}

std::string ListPatchBaselinesRequest::getName() const {
  return name_;
}

void ListPatchBaselinesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListPatchBaselinesRequest::getMaxResults() const {
  return maxResults_;
}

void ListPatchBaselinesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListPatchBaselinesRequest::std::string> ListPatchBaselinesRequest::getApprovedPatches() const {
  return approvedPatches_;
}

void ListPatchBaselinesRequest::setApprovedPatches(const std::vector<ListPatchBaselinesRequest::std::string> &approvedPatches) {
  approvedPatches_ = approvedPatches;
  for(int dep1 = 0; dep1 != approvedPatches.size(); dep1++) {
    setParameter(std::string("ApprovedPatches") + "." + std::to_string(dep1 + 1), approvedPatches[dep1]);
  }
}

