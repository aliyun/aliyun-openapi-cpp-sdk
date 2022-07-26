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

#include <alibabacloud/oos/model/ListParameterVersionsRequest.h>

using AlibabaCloud::Oos::Model::ListParameterVersionsRequest;

ListParameterVersionsRequest::ListParameterVersionsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListParameterVersions") {
  setMethod(HttpRequest::Method::Post);
}

ListParameterVersionsRequest::~ListParameterVersionsRequest() {}

std::string ListParameterVersionsRequest::getRegionId() const {
  return regionId_;
}

void ListParameterVersionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListParameterVersionsRequest::getNextToken() const {
  return nextToken_;
}

void ListParameterVersionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListParameterVersionsRequest::getName() const {
  return name_;
}

void ListParameterVersionsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListParameterVersionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListParameterVersionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListParameterVersionsRequest::getShareType() const {
  return shareType_;
}

void ListParameterVersionsRequest::setShareType(const std::string &shareType) {
  shareType_ = shareType;
  setParameter(std::string("ShareType"), shareType);
}

