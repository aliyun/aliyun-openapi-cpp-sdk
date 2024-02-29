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

#include <alibabacloud/sddp/model/CreateScanTaskRequest.h>

using AlibabaCloud::Sddp::Model::CreateScanTaskRequest;

CreateScanTaskRequest::CreateScanTaskRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "CreateScanTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateScanTaskRequest::~CreateScanTaskRequest() {}

int CreateScanTaskRequest::getRunHour() const {
  return runHour_;
}

void CreateScanTaskRequest::setRunHour(int runHour) {
  runHour_ = runHour;
  setParameter(std::string("RunHour"), std::to_string(runHour));
}

std::string CreateScanTaskRequest::getScanRangeContent() const {
  return scanRangeContent_;
}

void CreateScanTaskRequest::setScanRangeContent(const std::string &scanRangeContent) {
  scanRangeContent_ = scanRangeContent;
  setParameter(std::string("ScanRangeContent"), scanRangeContent);
}

std::string CreateScanTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateScanTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

long CreateScanTaskRequest::getDataLimitId() const {
  return dataLimitId_;
}

void CreateScanTaskRequest::setDataLimitId(long dataLimitId) {
  dataLimitId_ = dataLimitId;
  setParameter(std::string("DataLimitId"), std::to_string(dataLimitId));
}

int CreateScanTaskRequest::getRunMinute() const {
  return runMinute_;
}

void CreateScanTaskRequest::setRunMinute(int runMinute) {
  runMinute_ = runMinute;
  setParameter(std::string("RunMinute"), std::to_string(runMinute));
}

std::string CreateScanTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateScanTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int CreateScanTaskRequest::getIntervalDay() const {
  return intervalDay_;
}

void CreateScanTaskRequest::setIntervalDay(int intervalDay) {
  intervalDay_ = intervalDay;
  setParameter(std::string("IntervalDay"), std::to_string(intervalDay));
}

int CreateScanTaskRequest::getScanRange() const {
  return scanRange_;
}

void CreateScanTaskRequest::setScanRange(int scanRange) {
  scanRange_ = scanRange;
  setParameter(std::string("ScanRange"), std::to_string(scanRange));
}

std::string CreateScanTaskRequest::getLang() const {
  return lang_;
}

void CreateScanTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int CreateScanTaskRequest::getFeatureType() const {
  return featureType_;
}

void CreateScanTaskRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string CreateScanTaskRequest::getOssScanPath() const {
  return ossScanPath_;
}

void CreateScanTaskRequest::setOssScanPath(const std::string &ossScanPath) {
  ossScanPath_ = ossScanPath;
  setParameter(std::string("OssScanPath"), ossScanPath);
}

long CreateScanTaskRequest::getResourceType() const {
  return resourceType_;
}

void CreateScanTaskRequest::setResourceType(long resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), std::to_string(resourceType));
}

std::string CreateScanTaskRequest::getTaskUserName() const {
  return taskUserName_;
}

void CreateScanTaskRequest::setTaskUserName(const std::string &taskUserName) {
  taskUserName_ = taskUserName;
  setParameter(std::string("TaskUserName"), taskUserName);
}

