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

#include <alibabacloud/vod/model/ListAIJobRequest.h>

using AlibabaCloud::Vod::Model::ListAIJobRequest;

ListAIJobRequest::ListAIJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "ListAIJob") {
  setMethod(HttpRequest::Method::Post);
}

ListAIJobRequest::~ListAIJobRequest() {}

std::string ListAIJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListAIJobRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string ListAIJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListAIJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListAIJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListAIJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListAIJobRequest::getOwnerId() const {
  return ownerId_;
}

void ListAIJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ListAIJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListAIJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListAIJobRequest::getJobIds() const {
  return jobIds_;
}

void ListAIJobRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

