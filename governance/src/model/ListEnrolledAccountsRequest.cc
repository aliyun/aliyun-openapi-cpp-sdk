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

#include <alibabacloud/governance/model/ListEnrolledAccountsRequest.h>

using AlibabaCloud::Governance::Model::ListEnrolledAccountsRequest;

ListEnrolledAccountsRequest::ListEnrolledAccountsRequest()
    : RpcServiceRequest("governance", "2021-01-20", "ListEnrolledAccounts") {
  setMethod(HttpRequest::Method::Post);
}

ListEnrolledAccountsRequest::~ListEnrolledAccountsRequest() {}

std::string ListEnrolledAccountsRequest::getNextToken() const {
  return nextToken_;
}

void ListEnrolledAccountsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListEnrolledAccountsRequest::getRegionId() const {
  return regionId_;
}

void ListEnrolledAccountsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListEnrolledAccountsRequest::getMaxResults() const {
  return maxResults_;
}

void ListEnrolledAccountsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

