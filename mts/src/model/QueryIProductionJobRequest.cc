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

#include <alibabacloud/mts/model/QueryIProductionJobRequest.h>

using AlibabaCloud::Mts::Model::QueryIProductionJobRequest;

QueryIProductionJobRequest::QueryIProductionJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryIProductionJob") {
  setMethod(HttpRequest::Method::Post);
}

QueryIProductionJobRequest::~QueryIProductionJobRequest() {}

long QueryIProductionJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryIProductionJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryIProductionJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryIProductionJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryIProductionJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryIProductionJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryIProductionJobRequest::getOwnerId() const {
  return ownerId_;
}

void QueryIProductionJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryIProductionJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryIProductionJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryIProductionJobRequest::getJobId() const {
  return jobId_;
}

void QueryIProductionJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

