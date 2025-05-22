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

#include <alibabacloud/rds/model/CopyDatabaseRequest.h>

using AlibabaCloud::Rds::Model::CopyDatabaseRequest;

CopyDatabaseRequest::CopyDatabaseRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CopyDatabase") {
  setMethod(HttpRequest::Method::Post);
}

CopyDatabaseRequest::~CopyDatabaseRequest() {}

std::string CopyDatabaseRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void CopyDatabaseRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long CopyDatabaseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CopyDatabaseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CopyDatabaseRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CopyDatabaseRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CopyDatabaseRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CopyDatabaseRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CopyDatabaseRequest::getRegionId() const {
  return regionId_;
}

void CopyDatabaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CopyDatabaseRequest::getReserveAccount() const {
  return reserveAccount_;
}

void CopyDatabaseRequest::setReserveAccount(int reserveAccount) {
  reserveAccount_ = reserveAccount;
  setParameter(std::string("ReserveAccount"), std::to_string(reserveAccount));
}

std::string CopyDatabaseRequest::getSrcDBName() const {
  return srcDBName_;
}

void CopyDatabaseRequest::setSrcDBName(const std::string &srcDBName) {
  srcDBName_ = srcDBName;
  setParameter(std::string("SrcDBName"), srcDBName);
}

std::string CopyDatabaseRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CopyDatabaseRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CopyDatabaseRequest::getOwnerId() const {
  return ownerId_;
}

void CopyDatabaseRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CopyDatabaseRequest::getDstDBName() const {
  return dstDBName_;
}

void CopyDatabaseRequest::setDstDBName(const std::string &dstDBName) {
  dstDBName_ = dstDBName;
  setParameter(std::string("DstDBName"), dstDBName);
}

