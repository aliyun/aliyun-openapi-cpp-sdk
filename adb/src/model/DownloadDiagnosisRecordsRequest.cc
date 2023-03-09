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

#include <alibabacloud/adb/model/DownloadDiagnosisRecordsRequest.h>

using AlibabaCloud::Adb::Model::DownloadDiagnosisRecordsRequest;

DownloadDiagnosisRecordsRequest::DownloadDiagnosisRecordsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DownloadDiagnosisRecords") {
  setMethod(HttpRequest::Method::Post);
}

DownloadDiagnosisRecordsRequest::~DownloadDiagnosisRecordsRequest() {}

std::string DownloadDiagnosisRecordsRequest::getQueryCondition() const {
  return queryCondition_;
}

void DownloadDiagnosisRecordsRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DownloadDiagnosisRecordsRequest::getStartTime() const {
  return startTime_;
}

void DownloadDiagnosisRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DownloadDiagnosisRecordsRequest::getRawStartTime() const {
  return rawStartTime_;
}

void DownloadDiagnosisRecordsRequest::setRawStartTime(const std::string &rawStartTime) {
  rawStartTime_ = rawStartTime;
  setParameter(std::string("RawStartTime"), rawStartTime);
}

std::string DownloadDiagnosisRecordsRequest::getRawEndTime() const {
  return rawEndTime_;
}

void DownloadDiagnosisRecordsRequest::setRawEndTime(const std::string &rawEndTime) {
  rawEndTime_ = rawEndTime;
  setParameter(std::string("RawEndTime"), rawEndTime);
}

std::string DownloadDiagnosisRecordsRequest::getDatabase() const {
  return database_;
}

void DownloadDiagnosisRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DownloadDiagnosisRecordsRequest::getRegionId() const {
  return regionId_;
}

void DownloadDiagnosisRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DownloadDiagnosisRecordsRequest::getClientIp() const {
  return clientIp_;
}

void DownloadDiagnosisRecordsRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setParameter(std::string("ClientIp"), clientIp);
}

std::string DownloadDiagnosisRecordsRequest::getKeyword() const {
  return keyword_;
}

void DownloadDiagnosisRecordsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DownloadDiagnosisRecordsRequest::getLang() const {
  return lang_;
}

void DownloadDiagnosisRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DownloadDiagnosisRecordsRequest::getMaxScanSize() const {
  return maxScanSize_;
}

void DownloadDiagnosisRecordsRequest::setMaxScanSize(long maxScanSize) {
  maxScanSize_ = maxScanSize;
  setParameter(std::string("MaxScanSize"), std::to_string(maxScanSize));
}

std::string DownloadDiagnosisRecordsRequest::getResourceGroup() const {
  return resourceGroup_;
}

void DownloadDiagnosisRecordsRequest::setResourceGroup(const std::string &resourceGroup) {
  resourceGroup_ = resourceGroup;
  setParameter(std::string("ResourceGroup"), resourceGroup);
}

std::string DownloadDiagnosisRecordsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DownloadDiagnosisRecordsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DownloadDiagnosisRecordsRequest::getEndTime() const {
  return endTime_;
}

void DownloadDiagnosisRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DownloadDiagnosisRecordsRequest::getMinPeakMemory() const {
  return minPeakMemory_;
}

void DownloadDiagnosisRecordsRequest::setMinPeakMemory(long minPeakMemory) {
  minPeakMemory_ = minPeakMemory;
  setParameter(std::string("MinPeakMemory"), std::to_string(minPeakMemory));
}

long DownloadDiagnosisRecordsRequest::getMinScanSize() const {
  return minScanSize_;
}

void DownloadDiagnosisRecordsRequest::setMinScanSize(long minScanSize) {
  minScanSize_ = minScanSize;
  setParameter(std::string("MinScanSize"), std::to_string(minScanSize));
}

long DownloadDiagnosisRecordsRequest::getMaxPeakMemory() const {
  return maxPeakMemory_;
}

void DownloadDiagnosisRecordsRequest::setMaxPeakMemory(long maxPeakMemory) {
  maxPeakMemory_ = maxPeakMemory;
  setParameter(std::string("MaxPeakMemory"), std::to_string(maxPeakMemory));
}

std::string DownloadDiagnosisRecordsRequest::getUserName() const {
  return userName_;
}

void DownloadDiagnosisRecordsRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

