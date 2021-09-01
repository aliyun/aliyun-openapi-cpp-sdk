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

#include <alibabacloud/mts/model/StopIProductionJobRequest.h>

using AlibabaCloud::Mts::Model::StopIProductionJobRequest;

StopIProductionJobRequest::StopIProductionJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "StopIProductionJob") {
  setMethod(HttpRequest::Method::Post);
}

StopIProductionJobRequest::~StopIProductionJobRequest() {}

long StopIProductionJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StopIProductionJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StopIProductionJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StopIProductionJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StopIProductionJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StopIProductionJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StopIProductionJobRequest::getOwnerId() const {
  return ownerId_;
}

void StopIProductionJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StopIProductionJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void StopIProductionJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string StopIProductionJobRequest::getJobId() const {
  return jobId_;
}

void StopIProductionJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

