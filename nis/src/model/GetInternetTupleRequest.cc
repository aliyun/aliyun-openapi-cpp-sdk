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

#include <alibabacloud/nis/model/GetInternetTupleRequest.h>

using AlibabaCloud::Nis::Model::GetInternetTupleRequest;

GetInternetTupleRequest::GetInternetTupleRequest()
    : RpcServiceRequest("nis", "2021-12-16", "GetInternetTuple") {
  setMethod(HttpRequest::Method::Post);
}

GetInternetTupleRequest::~GetInternetTupleRequest() {}

std::string GetInternetTupleRequest::getOtherPort() const {
  return otherPort_;
}

void GetInternetTupleRequest::setOtherPort(const std::string &otherPort) {
  otherPort_ = otherPort;
  setParameter(std::string("OtherPort"), otherPort);
}

std::string GetInternetTupleRequest::getCloudIsp() const {
  return cloudIsp_;
}

void GetInternetTupleRequest::setCloudIsp(const std::string &cloudIsp) {
  cloudIsp_ = cloudIsp;
  setParameter(std::string("CloudIsp"), cloudIsp);
}

int GetInternetTupleRequest::getTopN() const {
  return topN_;
}

void GetInternetTupleRequest::setTopN(int topN) {
  topN_ = topN;
  setParameter(std::string("TopN"), std::to_string(topN));
}

std::string GetInternetTupleRequest::getCloudPort() const {
  return cloudPort_;
}

void GetInternetTupleRequest::setCloudPort(const std::string &cloudPort) {
  cloudPort_ = cloudPort;
  setParameter(std::string("CloudPort"), cloudPort);
}

std::string GetInternetTupleRequest::getProtocol() const {
  return protocol_;
}

void GetInternetTupleRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string GetInternetTupleRequest::getOtherIp() const {
  return otherIp_;
}

void GetInternetTupleRequest::setOtherIp(const std::string &otherIp) {
  otherIp_ = otherIp;
  setParameter(std::string("OtherIp"), otherIp);
}

std::vector<GetInternetTupleRequest::std::string> GetInternetTupleRequest::getInstanceList() const {
  return instanceList_;
}

void GetInternetTupleRequest::setInstanceList(const std::vector<GetInternetTupleRequest::std::string> &instanceList) {
  instanceList_ = instanceList;
  for(int dep1 = 0; dep1 != instanceList.size(); dep1++) {
    setParameter(std::string("InstanceList") + "." + std::to_string(dep1 + 1), instanceList[dep1]);
  }
}

std::string GetInternetTupleRequest::getOrderBy() const {
  return orderBy_;
}

void GetInternetTupleRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string GetInternetTupleRequest::getSort() const {
  return sort_;
}

void GetInternetTupleRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

bool GetInternetTupleRequest::getUseMultiAccount() const {
  return useMultiAccount_;
}

void GetInternetTupleRequest::setUseMultiAccount(bool useMultiAccount) {
  useMultiAccount_ = useMultiAccount;
  setParameter(std::string("UseMultiAccount"), useMultiAccount ? "true" : "false");
}

std::string GetInternetTupleRequest::getInstanceId() const {
  return instanceId_;
}

void GetInternetTupleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int GetInternetTupleRequest::getTupleType() const {
  return tupleType_;
}

void GetInternetTupleRequest::setTupleType(int tupleType) {
  tupleType_ = tupleType;
  setParameter(std::string("TupleType"), std::to_string(tupleType));
}

std::string GetInternetTupleRequest::getCloudIp() const {
  return cloudIp_;
}

void GetInternetTupleRequest::setCloudIp(const std::string &cloudIp) {
  cloudIp_ = cloudIp;
  setParameter(std::string("CloudIp"), cloudIp);
}

std::vector<GetInternetTupleRequest::std::string> GetInternetTupleRequest::getCloudIpList() const {
  return cloudIpList_;
}

void GetInternetTupleRequest::setCloudIpList(const std::vector<GetInternetTupleRequest::std::string> &cloudIpList) {
  cloudIpList_ = cloudIpList;
  for(int dep1 = 0; dep1 != cloudIpList.size(); dep1++) {
    setParameter(std::string("CloudIpList") + "." + std::to_string(dep1 + 1), cloudIpList[dep1]);
  }
}

std::string GetInternetTupleRequest::getOtherIsp() const {
  return otherIsp_;
}

void GetInternetTupleRequest::setOtherIsp(const std::string &otherIsp) {
  otherIsp_ = otherIsp;
  setParameter(std::string("OtherIsp"), otherIsp);
}

std::string GetInternetTupleRequest::getRegionId() const {
  return regionId_;
}

void GetInternetTupleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetInternetTupleRequest::getOtherCountry() const {
  return otherCountry_;
}

void GetInternetTupleRequest::setOtherCountry(const std::string &otherCountry) {
  otherCountry_ = otherCountry;
  setParameter(std::string("OtherCountry"), otherCountry);
}

std::string GetInternetTupleRequest::getDirection() const {
  return direction_;
}

void GetInternetTupleRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

long GetInternetTupleRequest::getEndTime() const {
  return endTime_;
}

void GetInternetTupleRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetInternetTupleRequest::getBeginTime() const {
  return beginTime_;
}

void GetInternetTupleRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string GetInternetTupleRequest::getOtherCity() const {
  return otherCity_;
}

void GetInternetTupleRequest::setOtherCity(const std::string &otherCity) {
  otherCity_ = otherCity;
  setParameter(std::string("OtherCity"), otherCity);
}

std::vector<long> GetInternetTupleRequest::getAccountIds() const {
  return accountIds_;
}

void GetInternetTupleRequest::setAccountIds(const std::vector<long> &accountIds) {
  accountIds_ = accountIds;
}

