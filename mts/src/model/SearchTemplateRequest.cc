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

#include <alibabacloud/mts/model/SearchTemplateRequest.h>

using AlibabaCloud::Mts::Model::SearchTemplateRequest;

SearchTemplateRequest::SearchTemplateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SearchTemplate") {
  setMethod(HttpRequest::Method::Post);
}

SearchTemplateRequest::~SearchTemplateRequest() {}

long SearchTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SearchTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool SearchTemplateRequest::getForFrontend() const {
  return forFrontend_;
}

void SearchTemplateRequest::setForFrontend(bool forFrontend) {
  forFrontend_ = forFrontend;
  setParameter(std::string("ForFrontend"), forFrontend ? "true" : "false");
}

long SearchTemplateRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchTemplateRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string SearchTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SearchTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long SearchTemplateRequest::getPageSize() const {
  return pageSize_;
}

void SearchTemplateRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchTemplateRequest::getState() const {
  return state_;
}

void SearchTemplateRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string SearchTemplateRequest::getNamePrefix() const {
  return namePrefix_;
}

void SearchTemplateRequest::setNamePrefix(const std::string &namePrefix) {
  namePrefix_ = namePrefix;
  setParameter(std::string("NamePrefix"), namePrefix);
}

std::string SearchTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SearchTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SearchTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SearchTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SearchTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void SearchTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SearchTemplateRequest::getTemplateId() const {
  return templateId_;
}

void SearchTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

