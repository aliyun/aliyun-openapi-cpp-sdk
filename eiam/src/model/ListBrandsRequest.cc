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

#include <alibabacloud/eiam/model/ListBrandsRequest.h>

using AlibabaCloud::Eiam::Model::ListBrandsRequest;

ListBrandsRequest::ListBrandsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListBrands") {
  setMethod(HttpRequest::Method::Post);
}

ListBrandsRequest::~ListBrandsRequest() {}

std::string ListBrandsRequest::getNextToken() const {
  return nextToken_;
}

void ListBrandsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListBrandsRequest::getPreviousToken() const {
  return previousToken_;
}

void ListBrandsRequest::setPreviousToken(const std::string &previousToken) {
  previousToken_ = previousToken;
  setParameter(std::string("PreviousToken"), previousToken);
}

std::string ListBrandsRequest::getInstanceId() const {
  return instanceId_;
}

void ListBrandsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListBrandsRequest::getMaxResults() const {
  return maxResults_;
}

void ListBrandsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

