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

#include <alibabacloud/mts/model/QueryCensorPipelineListRequest.h>

using AlibabaCloud::Mts::Model::QueryCensorPipelineListRequest;

QueryCensorPipelineListRequest::QueryCensorPipelineListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryCensorPipelineList") {
  setMethod(HttpRequest::Method::Post);
}

QueryCensorPipelineListRequest::~QueryCensorPipelineListRequest() {}

long QueryCensorPipelineListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryCensorPipelineListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryCensorPipelineListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryCensorPipelineListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryCensorPipelineListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryCensorPipelineListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryCensorPipelineListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryCensorPipelineListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryCensorPipelineListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryCensorPipelineListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryCensorPipelineListRequest::getPipelineIds() const {
  return pipelineIds_;
}

void QueryCensorPipelineListRequest::setPipelineIds(const std::string &pipelineIds) {
  pipelineIds_ = pipelineIds;
  setParameter(std::string("PipelineIds"), pipelineIds);
}

