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

#include <alibabacloud/nis/model/GetNisNetworkRankingRequest.h>

using AlibabaCloud::Nis::Model::GetNisNetworkRankingRequest;

GetNisNetworkRankingRequest::GetNisNetworkRankingRequest()
    : RpcServiceRequest("nis", "2021-12-16", "GetNisNetworkRanking") {
  setMethod(HttpRequest::Method::Post);
}

GetNisNetworkRankingRequest::~GetNisNetworkRankingRequest() {}

bool GetNisNetworkRankingRequest::getUseCrossAccount() const {
  return useCrossAccount_;
}

void GetNisNetworkRankingRequest::setUseCrossAccount(bool useCrossAccount) {
  useCrossAccount_ = useCrossAccount;
  setParameter(std::string("UseCrossAccount"), useCrossAccount ? "true" : "false");
}

int GetNisNetworkRankingRequest::getTopN() const {
  return topN_;
}

void GetNisNetworkRankingRequest::setTopN(int topN) {
  topN_ = topN;
  setParameter(std::string("TopN"), std::to_string(topN));
}

std::string GetNisNetworkRankingRequest::getDirection() const {
  return direction_;
}

void GetNisNetworkRankingRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string GetNisNetworkRankingRequest::getOrderBy() const {
  return orderBy_;
}

void GetNisNetworkRankingRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long GetNisNetworkRankingRequest::getEndTime() const {
  return endTime_;
}

void GetNisNetworkRankingRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetNisNetworkRankingRequest::getBeginTime() const {
  return beginTime_;
}

void GetNisNetworkRankingRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string GetNisNetworkRankingRequest::getGroupBy() const {
  return groupBy_;
}

void GetNisNetworkRankingRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::string GetNisNetworkRankingRequest::getSort() const {
  return sort_;
}

void GetNisNetworkRankingRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

std::string GetNisNetworkRankingRequest::getResourceType() const {
  return resourceType_;
}

void GetNisNetworkRankingRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string GetNisNetworkRankingRequest::getRegionNo() const {
  return regionNo_;
}

void GetNisNetworkRankingRequest::setRegionNo(const std::string &regionNo) {
  regionNo_ = regionNo;
  setParameter(std::string("RegionNo"), regionNo);
}

std::vector<GetNisNetworkRankingRequest::Filter> GetNisNetworkRankingRequest::getFilter() const {
  return filter_;
}

void GetNisNetworkRankingRequest::setFilter(const std::vector<GetNisNetworkRankingRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Name", filter[dep1].name);
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Value", filter[dep1].value);
  }
}

std::vector<std::string> GetNisNetworkRankingRequest::getAccountIds() const {
  return accountIds_;
}

void GetNisNetworkRankingRequest::setAccountIds(const std::vector<std::string> &accountIds) {
  accountIds_ = accountIds;
}

