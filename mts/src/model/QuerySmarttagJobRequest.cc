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

#include <alibabacloud/mts/model/QuerySmarttagJobRequest.h>

using AlibabaCloud::Mts::Model::QuerySmarttagJobRequest;

QuerySmarttagJobRequest::QuerySmarttagJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QuerySmarttagJob") {
  setMethod(HttpRequest::Method::Post);
}

QuerySmarttagJobRequest::~QuerySmarttagJobRequest() {}

long QuerySmarttagJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QuerySmarttagJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QuerySmarttagJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QuerySmarttagJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QuerySmarttagJobRequest::getJobId() const {
  return jobId_;
}

void QuerySmarttagJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string QuerySmarttagJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QuerySmarttagJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QuerySmarttagJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QuerySmarttagJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QuerySmarttagJobRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySmarttagJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QuerySmarttagJobRequest::getParams() const {
  return params_;
}

void QuerySmarttagJobRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

