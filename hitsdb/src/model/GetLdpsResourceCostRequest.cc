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

#include <alibabacloud/hitsdb/model/GetLdpsResourceCostRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLdpsResourceCostRequest;

GetLdpsResourceCostRequest::GetLdpsResourceCostRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetLdpsResourceCost") {
  setMethod(HttpRequest::Method::Post);
}

GetLdpsResourceCostRequest::~GetLdpsResourceCostRequest() {}

long GetLdpsResourceCostRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetLdpsResourceCostRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long GetLdpsResourceCostRequest::getStartTime() const {
  return startTime_;
}

void GetLdpsResourceCostRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetLdpsResourceCostRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetLdpsResourceCostRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetLdpsResourceCostRequest::getJobId() const {
  return jobId_;
}

void GetLdpsResourceCostRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string GetLdpsResourceCostRequest::getSecurityToken() const {
  return securityToken_;
}

void GetLdpsResourceCostRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetLdpsResourceCostRequest::getRegionId() const {
  return regionId_;
}

void GetLdpsResourceCostRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetLdpsResourceCostRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetLdpsResourceCostRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetLdpsResourceCostRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetLdpsResourceCostRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetLdpsResourceCostRequest::getEndTime() const {
  return endTime_;
}

void GetLdpsResourceCostRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetLdpsResourceCostRequest::getOwnerId() const {
  return ownerId_;
}

void GetLdpsResourceCostRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetLdpsResourceCostRequest::getInstanceId() const {
  return instanceId_;
}

void GetLdpsResourceCostRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

