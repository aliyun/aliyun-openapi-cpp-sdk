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

#include <alibabacloud/adb/model/DescribeDiagnosisRecordsRequest.h>

using AlibabaCloud::Adb::Model::DescribeDiagnosisRecordsRequest;

DescribeDiagnosisRecordsRequest::DescribeDiagnosisRecordsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDiagnosisRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosisRecordsRequest::~DescribeDiagnosisRecordsRequest() {}

std::string DescribeDiagnosisRecordsRequest::getQueryCondition() const {
  return queryCondition_;
}

void DescribeDiagnosisRecordsRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DescribeDiagnosisRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDiagnosisRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDiagnosisRecordsRequest::getRawStartTime() const {
  return rawStartTime_;
}

void DescribeDiagnosisRecordsRequest::setRawStartTime(const std::string &rawStartTime) {
  rawStartTime_ = rawStartTime;
  setParameter(std::string("RawStartTime"), rawStartTime);
}

int DescribeDiagnosisRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDiagnosisRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDiagnosisRecordsRequest::getRawEndTime() const {
  return rawEndTime_;
}

void DescribeDiagnosisRecordsRequest::setRawEndTime(const std::string &rawEndTime) {
  rawEndTime_ = rawEndTime;
  setParameter(std::string("RawEndTime"), rawEndTime);
}

std::string DescribeDiagnosisRecordsRequest::getDatabase() const {
  return database_;
}

void DescribeDiagnosisRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeDiagnosisRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosisRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosisRecordsRequest::getClientIp() const {
  return clientIp_;
}

void DescribeDiagnosisRecordsRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setParameter(std::string("ClientIp"), clientIp);
}

int DescribeDiagnosisRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDiagnosisRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDiagnosisRecordsRequest::getKeyword() const {
  return keyword_;
}

void DescribeDiagnosisRecordsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeDiagnosisRecordsRequest::getLang() const {
  return lang_;
}

void DescribeDiagnosisRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDiagnosisRecordsRequest::getOrder() const {
  return order_;
}

void DescribeDiagnosisRecordsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

long DescribeDiagnosisRecordsRequest::getMaxScanSize() const {
  return maxScanSize_;
}

void DescribeDiagnosisRecordsRequest::setMaxScanSize(long maxScanSize) {
  maxScanSize_ = maxScanSize;
  setParameter(std::string("MaxScanSize"), std::to_string(maxScanSize));
}

std::string DescribeDiagnosisRecordsRequest::getResourceGroup() const {
  return resourceGroup_;
}

void DescribeDiagnosisRecordsRequest::setResourceGroup(const std::string &resourceGroup) {
  resourceGroup_ = resourceGroup;
  setParameter(std::string("ResourceGroup"), resourceGroup);
}

std::string DescribeDiagnosisRecordsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDiagnosisRecordsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDiagnosisRecordsRequest::getPatternId() const {
  return patternId_;
}

void DescribeDiagnosisRecordsRequest::setPatternId(const std::string &patternId) {
  patternId_ = patternId;
  setParameter(std::string("PatternId"), patternId);
}

std::string DescribeDiagnosisRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDiagnosisRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDiagnosisRecordsRequest::getMinPeakMemory() const {
  return minPeakMemory_;
}

void DescribeDiagnosisRecordsRequest::setMinPeakMemory(long minPeakMemory) {
  minPeakMemory_ = minPeakMemory;
  setParameter(std::string("MinPeakMemory"), std::to_string(minPeakMemory));
}

long DescribeDiagnosisRecordsRequest::getMinScanSize() const {
  return minScanSize_;
}

void DescribeDiagnosisRecordsRequest::setMinScanSize(long minScanSize) {
  minScanSize_ = minScanSize;
  setParameter(std::string("MinScanSize"), std::to_string(minScanSize));
}

long DescribeDiagnosisRecordsRequest::getMaxPeakMemory() const {
  return maxPeakMemory_;
}

void DescribeDiagnosisRecordsRequest::setMaxPeakMemory(long maxPeakMemory) {
  maxPeakMemory_ = maxPeakMemory;
  setParameter(std::string("MaxPeakMemory"), std::to_string(maxPeakMemory));
}

std::string DescribeDiagnosisRecordsRequest::getUserName() const {
  return userName_;
}

void DescribeDiagnosisRecordsRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

