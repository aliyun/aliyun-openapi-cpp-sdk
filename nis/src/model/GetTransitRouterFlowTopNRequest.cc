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

#include <alibabacloud/nis/model/GetTransitRouterFlowTopNRequest.h>

using AlibabaCloud::Nis::Model::GetTransitRouterFlowTopNRequest;

GetTransitRouterFlowTopNRequest::GetTransitRouterFlowTopNRequest()
    : RpcServiceRequest("nis", "2021-12-16", "GetTransitRouterFlowTopN") {
  setMethod(HttpRequest::Method::Post);
}

GetTransitRouterFlowTopNRequest::~GetTransitRouterFlowTopNRequest() {}

std::string GetTransitRouterFlowTopNRequest::getOtherPort() const {
  return otherPort_;
}

void GetTransitRouterFlowTopNRequest::setOtherPort(const std::string &otherPort) {
  otherPort_ = otherPort;
  setParameter(std::string("OtherPort"), otherPort);
}

int GetTransitRouterFlowTopNRequest::getTopN() const {
  return topN_;
}

void GetTransitRouterFlowTopNRequest::setTopN(int topN) {
  topN_ = topN;
  setParameter(std::string("TopN"), std::to_string(topN));
}

std::string GetTransitRouterFlowTopNRequest::getProtocol() const {
  return protocol_;
}

void GetTransitRouterFlowTopNRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string GetTransitRouterFlowTopNRequest::getThisIp() const {
  return thisIp_;
}

void GetTransitRouterFlowTopNRequest::setThisIp(const std::string &thisIp) {
  thisIp_ = thisIp;
  setParameter(std::string("ThisIp"), thisIp);
}

std::string GetTransitRouterFlowTopNRequest::getOtherIp() const {
  return otherIp_;
}

void GetTransitRouterFlowTopNRequest::setOtherIp(const std::string &otherIp) {
  otherIp_ = otherIp;
  setParameter(std::string("OtherIp"), otherIp);
}

std::string GetTransitRouterFlowTopNRequest::getBandwithPackageId() const {
  return bandwithPackageId_;
}

void GetTransitRouterFlowTopNRequest::setBandwithPackageId(const std::string &bandwithPackageId) {
  bandwithPackageId_ = bandwithPackageId;
  setParameter(std::string("BandwithPackageId"), bandwithPackageId);
}

std::string GetTransitRouterFlowTopNRequest::getOrderBy() const {
  return orderBy_;
}

void GetTransitRouterFlowTopNRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string GetTransitRouterFlowTopNRequest::getSort() const {
  return sort_;
}

void GetTransitRouterFlowTopNRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

bool GetTransitRouterFlowTopNRequest::getUseMultiAccount() const {
  return useMultiAccount_;
}

void GetTransitRouterFlowTopNRequest::setUseMultiAccount(bool useMultiAccount) {
  useMultiAccount_ = useMultiAccount;
  setParameter(std::string("UseMultiAccount"), useMultiAccount ? "true" : "false");
}

std::string GetTransitRouterFlowTopNRequest::getThisRegion() const {
  return thisRegion_;
}

void GetTransitRouterFlowTopNRequest::setThisRegion(const std::string &thisRegion) {
  thisRegion_ = thisRegion;
  setParameter(std::string("ThisRegion"), thisRegion);
}

std::string GetTransitRouterFlowTopNRequest::getCenId() const {
  return cenId_;
}

void GetTransitRouterFlowTopNRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string GetTransitRouterFlowTopNRequest::getThisPort() const {
  return thisPort_;
}

void GetTransitRouterFlowTopNRequest::setThisPort(const std::string &thisPort) {
  thisPort_ = thisPort;
  setParameter(std::string("ThisPort"), thisPort);
}

std::string GetTransitRouterFlowTopNRequest::getDirection() const {
  return direction_;
}

void GetTransitRouterFlowTopNRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string GetTransitRouterFlowTopNRequest::getOtherRegion() const {
  return otherRegion_;
}

void GetTransitRouterFlowTopNRequest::setOtherRegion(const std::string &otherRegion) {
  otherRegion_ = otherRegion;
  setParameter(std::string("OtherRegion"), otherRegion);
}

long GetTransitRouterFlowTopNRequest::getEndTime() const {
  return endTime_;
}

void GetTransitRouterFlowTopNRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetTransitRouterFlowTopNRequest::getBeginTime() const {
  return beginTime_;
}

void GetTransitRouterFlowTopNRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string GetTransitRouterFlowTopNRequest::getGroupBy() const {
  return groupBy_;
}

void GetTransitRouterFlowTopNRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::vector<GetTransitRouterFlowTopNRequest::long> GetTransitRouterFlowTopNRequest::getAccountIds() const {
  return accountIds_;
}

void GetTransitRouterFlowTopNRequest::setAccountIds(const std::vector<GetTransitRouterFlowTopNRequest::long> &accountIds) {
  accountIds_ = accountIds;
  for(int dep1 = 0; dep1 != accountIds.size(); dep1++) {
    setParameter(std::string("AccountIds") + "." + std::to_string(dep1 + 1), std::to_string(accountIds[dep1]));
  }
}

