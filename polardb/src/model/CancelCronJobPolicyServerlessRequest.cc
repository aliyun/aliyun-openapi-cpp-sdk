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

#include <alibabacloud/polardb/model/CancelCronJobPolicyServerlessRequest.h>

using AlibabaCloud::Polardb::Model::CancelCronJobPolicyServerlessRequest;

CancelCronJobPolicyServerlessRequest::CancelCronJobPolicyServerlessRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CancelCronJobPolicyServerless") {
  setMethod(HttpRequest::Method::Post);
}

CancelCronJobPolicyServerlessRequest::~CancelCronJobPolicyServerlessRequest() {}

long CancelCronJobPolicyServerlessRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CancelCronJobPolicyServerlessRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CancelCronJobPolicyServerlessRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CancelCronJobPolicyServerlessRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CancelCronJobPolicyServerlessRequest::getJobId() const {
  return jobId_;
}

void CancelCronJobPolicyServerlessRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string CancelCronJobPolicyServerlessRequest::getRegionId() const {
  return regionId_;
}

void CancelCronJobPolicyServerlessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CancelCronJobPolicyServerlessRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CancelCronJobPolicyServerlessRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CancelCronJobPolicyServerlessRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CancelCronJobPolicyServerlessRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CancelCronJobPolicyServerlessRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CancelCronJobPolicyServerlessRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CancelCronJobPolicyServerlessRequest::getOwnerId() const {
  return ownerId_;
}

void CancelCronJobPolicyServerlessRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

