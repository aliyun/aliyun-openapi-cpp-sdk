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

#include <alibabacloud/polardb/model/DescribeCrossCloudLevelsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeCrossCloudLevelsRequest;

DescribeCrossCloudLevelsRequest::DescribeCrossCloudLevelsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeCrossCloudLevels") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCrossCloudLevelsRequest::~DescribeCrossCloudLevelsRequest() {}

std::string DescribeCrossCloudLevelsRequest::getStorageType() const {
  return storageType_;
}

void DescribeCrossCloudLevelsRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string DescribeCrossCloudLevelsRequest::getProjectId() const {
  return projectId_;
}

void DescribeCrossCloudLevelsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string DescribeCrossCloudLevelsRequest::getDBType() const {
  return dBType_;
}

void DescribeCrossCloudLevelsRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string DescribeCrossCloudLevelsRequest::getDBVersion() const {
  return dBVersion_;
}

void DescribeCrossCloudLevelsRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

