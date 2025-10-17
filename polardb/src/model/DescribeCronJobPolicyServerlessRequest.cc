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

#include <alibabacloud/polardb/model/DescribeCronJobPolicyServerlessRequest.h>

using AlibabaCloud::Polardb::Model::DescribeCronJobPolicyServerlessRequest;

DescribeCronJobPolicyServerlessRequest::DescribeCronJobPolicyServerlessRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeCronJobPolicyServerless") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCronJobPolicyServerlessRequest::~DescribeCronJobPolicyServerlessRequest() {}

long DescribeCronJobPolicyServerlessRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCronJobPolicyServerlessRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeCronJobPolicyServerlessRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCronJobPolicyServerlessRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCronJobPolicyServerlessRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCronJobPolicyServerlessRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeCronJobPolicyServerlessRequest::getJobId() const {
  return jobId_;
}

void DescribeCronJobPolicyServerlessRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string DescribeCronJobPolicyServerlessRequest::getRegionId() const {
  return regionId_;
}

void DescribeCronJobPolicyServerlessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeCronJobPolicyServerlessRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCronJobPolicyServerlessRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCronJobPolicyServerlessRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCronJobPolicyServerlessRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCronJobPolicyServerlessRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeCronJobPolicyServerlessRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeCronJobPolicyServerlessRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCronJobPolicyServerlessRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCronJobPolicyServerlessRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCronJobPolicyServerlessRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

