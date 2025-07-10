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

#include <alibabacloud/vpc/model/DescribeFailoverTestJobsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeFailoverTestJobsRequest;

DescribeFailoverTestJobsRequest::DescribeFailoverTestJobsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeFailoverTestJobs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFailoverTestJobsRequest::~DescribeFailoverTestJobsRequest() {}

std::string DescribeFailoverTestJobsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeFailoverTestJobsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeFailoverTestJobsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeFailoverTestJobsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeFailoverTestJobsRequest::getRegionId() const {
  return regionId_;
}

void DescribeFailoverTestJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeFailoverTestJobsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeFailoverTestJobsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeFailoverTestJobsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeFailoverTestJobsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeFailoverTestJobsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeFailoverTestJobsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeFailoverTestJobsRequest::Filter> DescribeFailoverTestJobsRequest::getFilter() const {
  return filter_;
}

void DescribeFailoverTestJobsRequest::setFilter(const std::vector<DescribeFailoverTestJobsRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

int DescribeFailoverTestJobsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeFailoverTestJobsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

