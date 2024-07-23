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

#include <alibabacloud/mts/model/ListFpShotImportJobRequest.h>

using AlibabaCloud::Mts::Model::ListFpShotImportJobRequest;

ListFpShotImportJobRequest::ListFpShotImportJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListFpShotImportJob") {
  setMethod(HttpRequest::Method::Post);
}

ListFpShotImportJobRequest::~ListFpShotImportJobRequest() {}

long ListFpShotImportJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListFpShotImportJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListFpShotImportJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListFpShotImportJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListFpShotImportJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListFpShotImportJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListFpShotImportJobRequest::getOwnerId() const {
  return ownerId_;
}

void ListFpShotImportJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListFpShotImportJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListFpShotImportJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListFpShotImportJobRequest::getJobIds() const {
  return jobIds_;
}

void ListFpShotImportJobRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

