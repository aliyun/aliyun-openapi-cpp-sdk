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

#include <alibabacloud/polardbx/model/DescribeBackupSetRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeBackupSetRequest;

DescribeBackupSetRequest::DescribeBackupSetRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeBackupSet") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupSetRequest::~DescribeBackupSetRequest() {}

std::string DescribeBackupSetRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeBackupSetRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeBackupSetRequest::getRegionId() const {
  return regionId_;
}

void DescribeBackupSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeBackupSetRequest::getBackupSetId() const {
  return backupSetId_;
}

void DescribeBackupSetRequest::setBackupSetId(const std::string &backupSetId) {
  backupSetId_ = backupSetId;
  setParameter(std::string("BackupSetId"), backupSetId);
}

std::string DescribeBackupSetRequest::getDestCrossRegion() const {
  return destCrossRegion_;
}

void DescribeBackupSetRequest::setDestCrossRegion(const std::string &destCrossRegion) {
  destCrossRegion_ = destCrossRegion;
  setParameter(std::string("DestCrossRegion"), destCrossRegion);
}

