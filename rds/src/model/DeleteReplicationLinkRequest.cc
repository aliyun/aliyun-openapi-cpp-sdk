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

#include <alibabacloud/rds/model/DeleteReplicationLinkRequest.h>

using AlibabaCloud::Rds::Model::DeleteReplicationLinkRequest;

DeleteReplicationLinkRequest::DeleteReplicationLinkRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteReplicationLink") {
  setMethod(HttpRequest::Method::Post);
}

DeleteReplicationLinkRequest::~DeleteReplicationLinkRequest() {}

long DeleteReplicationLinkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteReplicationLinkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteReplicationLinkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteReplicationLinkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool DeleteReplicationLinkRequest::getPromoteToMaster() const {
  return promoteToMaster_;
}

void DeleteReplicationLinkRequest::setPromoteToMaster(bool promoteToMaster) {
  promoteToMaster_ = promoteToMaster;
  setParameter(std::string("PromoteToMaster"), promoteToMaster ? "true" : "false");
}

std::string DeleteReplicationLinkRequest::getRegionId() const {
  return regionId_;
}

void DeleteReplicationLinkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteReplicationLinkRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteReplicationLinkRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteReplicationLinkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteReplicationLinkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteReplicationLinkRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteReplicationLinkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

