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

#include <alibabacloud/mts/model/SearchMediaWorkflowRequest.h>

using AlibabaCloud::Mts::Model::SearchMediaWorkflowRequest;

SearchMediaWorkflowRequest::SearchMediaWorkflowRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SearchMediaWorkflow") {
  setMethod(HttpRequest::Method::Post);
}

SearchMediaWorkflowRequest::~SearchMediaWorkflowRequest() {}

long SearchMediaWorkflowRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SearchMediaWorkflowRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long SearchMediaWorkflowRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchMediaWorkflowRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string SearchMediaWorkflowRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SearchMediaWorkflowRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long SearchMediaWorkflowRequest::getPageSize() const {
  return pageSize_;
}

void SearchMediaWorkflowRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchMediaWorkflowRequest::getStateList() const {
  return stateList_;
}

void SearchMediaWorkflowRequest::setStateList(const std::string &stateList) {
  stateList_ = stateList;
  setParameter(std::string("StateList"), stateList);
}

std::string SearchMediaWorkflowRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SearchMediaWorkflowRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SearchMediaWorkflowRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SearchMediaWorkflowRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SearchMediaWorkflowRequest::getOwnerId() const {
  return ownerId_;
}

void SearchMediaWorkflowRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

