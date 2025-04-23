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

#include <alibabacloud/eds-user/model/DescribeOrgsRequest.h>

using AlibabaCloud::Eds_user::Model::DescribeOrgsRequest;

DescribeOrgsRequest::DescribeOrgsRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "DescribeOrgs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOrgsRequest::~DescribeOrgsRequest() {}

std::string DescribeOrgsRequest::getOrgName() const {
  return orgName_;
}

void DescribeOrgsRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setParameter(std::string("OrgName"), orgName);
}

std::string DescribeOrgsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeOrgsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeOrgsRequest::getParentOrgId() const {
  return parentOrgId_;
}

void DescribeOrgsRequest::setParentOrgId(const std::string &parentOrgId) {
  parentOrgId_ = parentOrgId;
  setParameter(std::string("ParentOrgId"), parentOrgId);
}

long DescribeOrgsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeOrgsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

