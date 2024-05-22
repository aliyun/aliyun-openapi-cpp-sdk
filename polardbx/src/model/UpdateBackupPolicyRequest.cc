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

#include <alibabacloud/polardbx/model/UpdateBackupPolicyRequest.h>

using AlibabaCloud::Polardbx::Model::UpdateBackupPolicyRequest;

UpdateBackupPolicyRequest::UpdateBackupPolicyRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "UpdateBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBackupPolicyRequest::~UpdateBackupPolicyRequest() {}

std::string UpdateBackupPolicyRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void UpdateBackupPolicyRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

int UpdateBackupPolicyRequest::getCrossRegionDataBackupRetention() const {
  return crossRegionDataBackupRetention_;
}

void UpdateBackupPolicyRequest::setCrossRegionDataBackupRetention(int crossRegionDataBackupRetention) {
  crossRegionDataBackupRetention_ = crossRegionDataBackupRetention;
  setParameter(std::string("CrossRegionDataBackupRetention"), std::to_string(crossRegionDataBackupRetention));
}

int UpdateBackupPolicyRequest::getForceCleanOnHighSpaceUsage() const {
  return forceCleanOnHighSpaceUsage_;
}

void UpdateBackupPolicyRequest::setForceCleanOnHighSpaceUsage(int forceCleanOnHighSpaceUsage) {
  forceCleanOnHighSpaceUsage_ = forceCleanOnHighSpaceUsage;
  setParameter(std::string("ForceCleanOnHighSpaceUsage"), std::to_string(forceCleanOnHighSpaceUsage));
}

std::string UpdateBackupPolicyRequest::getBackupPlanBegin() const {
  return backupPlanBegin_;
}

void UpdateBackupPolicyRequest::setBackupPlanBegin(const std::string &backupPlanBegin) {
  backupPlanBegin_ = backupPlanBegin;
  setParameter(std::string("BackupPlanBegin"), backupPlanBegin);
}

int UpdateBackupPolicyRequest::getRemoveLogRetention() const {
  return removeLogRetention_;
}

void UpdateBackupPolicyRequest::setRemoveLogRetention(int removeLogRetention) {
  removeLogRetention_ = removeLogRetention;
  setParameter(std::string("RemoveLogRetention"), std::to_string(removeLogRetention));
}

std::string UpdateBackupPolicyRequest::getRegionId() const {
  return regionId_;
}

void UpdateBackupPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpdateBackupPolicyRequest::getColdDataBackupRetention() const {
  return coldDataBackupRetention_;
}

void UpdateBackupPolicyRequest::setColdDataBackupRetention(int coldDataBackupRetention) {
  coldDataBackupRetention_ = coldDataBackupRetention;
  setParameter(std::string("ColdDataBackupRetention"), std::to_string(coldDataBackupRetention));
}

int UpdateBackupPolicyRequest::getLocalLogRetentionNumber() const {
  return localLogRetentionNumber_;
}

void UpdateBackupPolicyRequest::setLocalLogRetentionNumber(int localLogRetentionNumber) {
  localLogRetentionNumber_ = localLogRetentionNumber;
  setParameter(std::string("LocalLogRetentionNumber"), std::to_string(localLogRetentionNumber));
}

std::string UpdateBackupPolicyRequest::getBackupType() const {
  return backupType_;
}

void UpdateBackupPolicyRequest::setBackupType(const std::string &backupType) {
  backupType_ = backupType;
  setParameter(std::string("BackupType"), backupType);
}

int UpdateBackupPolicyRequest::getIsEnabled() const {
  return isEnabled_;
}

void UpdateBackupPolicyRequest::setIsEnabled(int isEnabled) {
  isEnabled_ = isEnabled;
  setParameter(std::string("IsEnabled"), std::to_string(isEnabled));
}

int UpdateBackupPolicyRequest::getColdDataBackupInterval() const {
  return coldDataBackupInterval_;
}

void UpdateBackupPolicyRequest::setColdDataBackupInterval(int coldDataBackupInterval) {
  coldDataBackupInterval_ = coldDataBackupInterval;
  setParameter(std::string("ColdDataBackupInterval"), std::to_string(coldDataBackupInterval));
}

std::string UpdateBackupPolicyRequest::getBackupWay() const {
  return backupWay_;
}

void UpdateBackupPolicyRequest::setBackupWay(const std::string &backupWay) {
  backupWay_ = backupWay;
  setParameter(std::string("BackupWay"), backupWay);
}

std::string UpdateBackupPolicyRequest::getDestCrossRegion() const {
  return destCrossRegion_;
}

void UpdateBackupPolicyRequest::setDestCrossRegion(const std::string &destCrossRegion) {
  destCrossRegion_ = destCrossRegion;
  setParameter(std::string("DestCrossRegion"), destCrossRegion);
}

int UpdateBackupPolicyRequest::getBackupSetRetention() const {
  return backupSetRetention_;
}

void UpdateBackupPolicyRequest::setBackupSetRetention(int backupSetRetention) {
  backupSetRetention_ = backupSetRetention;
  setParameter(std::string("BackupSetRetention"), std::to_string(backupSetRetention));
}

bool UpdateBackupPolicyRequest::getIsCrossRegionDataBackupEnabled() const {
  return isCrossRegionDataBackupEnabled_;
}

void UpdateBackupPolicyRequest::setIsCrossRegionDataBackupEnabled(bool isCrossRegionDataBackupEnabled) {
  isCrossRegionDataBackupEnabled_ = isCrossRegionDataBackupEnabled;
  setParameter(std::string("IsCrossRegionDataBackupEnabled"), isCrossRegionDataBackupEnabled ? "true" : "false");
}

int UpdateBackupPolicyRequest::getCrossRegionLogBackupRetention() const {
  return crossRegionLogBackupRetention_;
}

void UpdateBackupPolicyRequest::setCrossRegionLogBackupRetention(int crossRegionLogBackupRetention) {
  crossRegionLogBackupRetention_ = crossRegionLogBackupRetention;
  setParameter(std::string("CrossRegionLogBackupRetention"), std::to_string(crossRegionLogBackupRetention));
}

std::string UpdateBackupPolicyRequest::getBackupPeriod() const {
  return backupPeriod_;
}

void UpdateBackupPolicyRequest::setBackupPeriod(const std::string &backupPeriod) {
  backupPeriod_ = backupPeriod;
  setParameter(std::string("BackupPeriod"), backupPeriod);
}

bool UpdateBackupPolicyRequest::getIsCrossRegionLogBackupEnabled() const {
  return isCrossRegionLogBackupEnabled_;
}

void UpdateBackupPolicyRequest::setIsCrossRegionLogBackupEnabled(bool isCrossRegionLogBackupEnabled) {
  isCrossRegionLogBackupEnabled_ = isCrossRegionLogBackupEnabled;
  setParameter(std::string("IsCrossRegionLogBackupEnabled"), isCrossRegionLogBackupEnabled ? "true" : "false");
}

int UpdateBackupPolicyRequest::getLocalLogRetention() const {
  return localLogRetention_;
}

void UpdateBackupPolicyRequest::setLocalLogRetention(int localLogRetention) {
  localLogRetention_ = localLogRetention;
  setParameter(std::string("LocalLogRetention"), std::to_string(localLogRetention));
}

int UpdateBackupPolicyRequest::getLogLocalRetentionSpace() const {
  return logLocalRetentionSpace_;
}

void UpdateBackupPolicyRequest::setLogLocalRetentionSpace(int logLocalRetentionSpace) {
  logLocalRetentionSpace_ = logLocalRetentionSpace;
  setParameter(std::string("LogLocalRetentionSpace"), std::to_string(logLocalRetentionSpace));
}

