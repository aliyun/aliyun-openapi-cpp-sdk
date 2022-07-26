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

#include <alibabacloud/oos/model/ListSecretParameterVersionsRequest.h>

using AlibabaCloud::Oos::Model::ListSecretParameterVersionsRequest;

ListSecretParameterVersionsRequest::ListSecretParameterVersionsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListSecretParameterVersions") {
  setMethod(HttpRequest::Method::Post);
}

ListSecretParameterVersionsRequest::~ListSecretParameterVersionsRequest() {}

bool ListSecretParameterVersionsRequest::getWithDecryption() const {
  return withDecryption_;
}

void ListSecretParameterVersionsRequest::setWithDecryption(bool withDecryption) {
  withDecryption_ = withDecryption;
  setParameter(std::string("WithDecryption"), withDecryption ? "true" : "false");
}

std::string ListSecretParameterVersionsRequest::getRegionId() const {
  return regionId_;
}

void ListSecretParameterVersionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListSecretParameterVersionsRequest::getNextToken() const {
  return nextToken_;
}

void ListSecretParameterVersionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListSecretParameterVersionsRequest::getName() const {
  return name_;
}

void ListSecretParameterVersionsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListSecretParameterVersionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListSecretParameterVersionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListSecretParameterVersionsRequest::getShareType() const {
  return shareType_;
}

void ListSecretParameterVersionsRequest::setShareType(const std::string &shareType) {
  shareType_ = shareType;
  setParameter(std::string("ShareType"), shareType);
}

