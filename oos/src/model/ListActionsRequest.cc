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

#include <alibabacloud/oos/model/ListActionsRequest.h>

using AlibabaCloud::Oos::Model::ListActionsRequest;

ListActionsRequest::ListActionsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListActions") {
  setMethod(HttpRequest::Method::Post);
}

ListActionsRequest::~ListActionsRequest() {}

std::string ListActionsRequest::getOOSActionName() const {
  return oOSActionName_;
}

void ListActionsRequest::setOOSActionName(const std::string &oOSActionName) {
  oOSActionName_ = oOSActionName;
  setParameter(std::string("OOSActionName"), oOSActionName);
}

std::string ListActionsRequest::getRegionId() const {
  return regionId_;
}

void ListActionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListActionsRequest::getNextToken() const {
  return nextToken_;
}

void ListActionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListActionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListActionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

