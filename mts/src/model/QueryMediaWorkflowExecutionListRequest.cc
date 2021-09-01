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

#include <alibabacloud/mts/model/QueryMediaWorkflowExecutionListRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaWorkflowExecutionListRequest;

QueryMediaWorkflowExecutionListRequest::QueryMediaWorkflowExecutionListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryMediaWorkflowExecutionList") {
  setMethod(HttpRequest::Method::Post);
}

QueryMediaWorkflowExecutionListRequest::~QueryMediaWorkflowExecutionListRequest() {}

std::string QueryMediaWorkflowExecutionListRequest::getRunIds() const {
  return runIds_;
}

void QueryMediaWorkflowExecutionListRequest::setRunIds(const std::string &runIds) {
  runIds_ = runIds;
  setParameter(std::string("RunIds"), runIds);
}

long QueryMediaWorkflowExecutionListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMediaWorkflowExecutionListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryMediaWorkflowExecutionListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMediaWorkflowExecutionListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryMediaWorkflowExecutionListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryMediaWorkflowExecutionListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryMediaWorkflowExecutionListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMediaWorkflowExecutionListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryMediaWorkflowExecutionListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMediaWorkflowExecutionListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

