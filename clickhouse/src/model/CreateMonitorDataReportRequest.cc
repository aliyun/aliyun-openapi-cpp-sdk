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

#include <alibabacloud/clickhouse/model/CreateMonitorDataReportRequest.h>

using AlibabaCloud::Clickhouse::Model::CreateMonitorDataReportRequest;

CreateMonitorDataReportRequest::CreateMonitorDataReportRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreateMonitorDataReport") {
  setMethod(HttpRequest::Method::Post);
}

CreateMonitorDataReportRequest::~CreateMonitorDataReportRequest() {}

long CreateMonitorDataReportRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateMonitorDataReportRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateMonitorDataReportRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateMonitorDataReportRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateMonitorDataReportRequest::getRegionId() const {
  return regionId_;
}

void CreateMonitorDataReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateMonitorDataReportRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateMonitorDataReportRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateMonitorDataReportRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateMonitorDataReportRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateMonitorDataReportRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateMonitorDataReportRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateMonitorDataReportRequest::getOwnerId() const {
  return ownerId_;
}

void CreateMonitorDataReportRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

