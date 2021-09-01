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

#include <alibabacloud/mts/model/ListPornPipelineRequest.h>

using AlibabaCloud::Mts::Model::ListPornPipelineRequest;

ListPornPipelineRequest::ListPornPipelineRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListPornPipeline") {
  setMethod(HttpRequest::Method::Post);
}

ListPornPipelineRequest::~ListPornPipelineRequest() {}

long ListPornPipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListPornPipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long ListPornPipelineRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPornPipelineRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListPornPipelineRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListPornPipelineRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long ListPornPipelineRequest::getPageSize() const {
  return pageSize_;
}

void ListPornPipelineRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPornPipelineRequest::getState() const {
  return state_;
}

void ListPornPipelineRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string ListPornPipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListPornPipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListPornPipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListPornPipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListPornPipelineRequest::getOwnerId() const {
  return ownerId_;
}

void ListPornPipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

