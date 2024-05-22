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

#include <alibabacloud/polardbx/model/UpdatePolarDBXInstanceNodeRequest.h>

using AlibabaCloud::Polardbx::Model::UpdatePolarDBXInstanceNodeRequest;

UpdatePolarDBXInstanceNodeRequest::UpdatePolarDBXInstanceNodeRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "UpdatePolarDBXInstanceNode") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePolarDBXInstanceNodeRequest::~UpdatePolarDBXInstanceNodeRequest() {}

std::string UpdatePolarDBXInstanceNodeRequest::getAddDNSpec() const {
  return addDNSpec_;
}

void UpdatePolarDBXInstanceNodeRequest::setAddDNSpec(const std::string &addDNSpec) {
  addDNSpec_ = addDNSpec;
  setParameter(std::string("AddDNSpec"), addDNSpec);
}

std::string UpdatePolarDBXInstanceNodeRequest::getStoragePoolName() const {
  return storagePoolName_;
}

void UpdatePolarDBXInstanceNodeRequest::setStoragePoolName(const std::string &storagePoolName) {
  storagePoolName_ = storagePoolName;
  setParameter(std::string("StoragePoolName"), storagePoolName);
}

std::string UpdatePolarDBXInstanceNodeRequest::getDbInstanceNodeCount() const {
  return dbInstanceNodeCount_;
}

void UpdatePolarDBXInstanceNodeRequest::setDbInstanceNodeCount(const std::string &dbInstanceNodeCount) {
  dbInstanceNodeCount_ = dbInstanceNodeCount;
  setParameter(std::string("DbInstanceNodeCount"), dbInstanceNodeCount);
}

std::string UpdatePolarDBXInstanceNodeRequest::getCNNodeCount() const {
  return cNNodeCount_;
}

void UpdatePolarDBXInstanceNodeRequest::setCNNodeCount(const std::string &cNNodeCount) {
  cNNodeCount_ = cNNodeCount;
  setParameter(std::string("CNNodeCount"), cNNodeCount);
}

std::string UpdatePolarDBXInstanceNodeRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void UpdatePolarDBXInstanceNodeRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string UpdatePolarDBXInstanceNodeRequest::getClientToken() const {
  return clientToken_;
}

void UpdatePolarDBXInstanceNodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdatePolarDBXInstanceNodeRequest::getDeleteDNIds() const {
  return deleteDNIds_;
}

void UpdatePolarDBXInstanceNodeRequest::setDeleteDNIds(const std::string &deleteDNIds) {
  deleteDNIds_ = deleteDNIds;
  setParameter(std::string("DeleteDNIds"), deleteDNIds);
}

std::string UpdatePolarDBXInstanceNodeRequest::getRegionId() const {
  return regionId_;
}

void UpdatePolarDBXInstanceNodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdatePolarDBXInstanceNodeRequest::getDNNodeCount() const {
  return dNNodeCount_;
}

void UpdatePolarDBXInstanceNodeRequest::setDNNodeCount(const std::string &dNNodeCount) {
  dNNodeCount_ = dNNodeCount;
  setParameter(std::string("DNNodeCount"), dNNodeCount);
}

