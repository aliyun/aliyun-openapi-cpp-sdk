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

#include <alibabacloud/mts/model/QueryMediaWorkflowListRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaWorkflowListRequest;

QueryMediaWorkflowListRequest::QueryMediaWorkflowListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryMediaWorkflowList") {
  setMethod(HttpRequest::Method::Post);
}

QueryMediaWorkflowListRequest::~QueryMediaWorkflowListRequest() {}

std::string QueryMediaWorkflowListRequest::getMediaWorkflowIds() const {
  return mediaWorkflowIds_;
}

void QueryMediaWorkflowListRequest::setMediaWorkflowIds(const std::string &mediaWorkflowIds) {
  mediaWorkflowIds_ = mediaWorkflowIds;
  setParameter(std::string("MediaWorkflowIds"), mediaWorkflowIds);
}

long QueryMediaWorkflowListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMediaWorkflowListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryMediaWorkflowListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMediaWorkflowListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryMediaWorkflowListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryMediaWorkflowListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryMediaWorkflowListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMediaWorkflowListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryMediaWorkflowListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMediaWorkflowListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

