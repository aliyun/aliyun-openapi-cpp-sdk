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

#include <alibabacloud/mts/model/ListMediaWorkflowExecutionsRequest.h>

using AlibabaCloud::Mts::Model::ListMediaWorkflowExecutionsRequest;

ListMediaWorkflowExecutionsRequest::ListMediaWorkflowExecutionsRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListMediaWorkflowExecutions") {
  setMethod(HttpRequest::Method::Post);
}

ListMediaWorkflowExecutionsRequest::~ListMediaWorkflowExecutionsRequest() {}

long ListMediaWorkflowExecutionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListMediaWorkflowExecutionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListMediaWorkflowExecutionsRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListMediaWorkflowExecutionsRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListMediaWorkflowExecutionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListMediaWorkflowExecutionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListMediaWorkflowExecutionsRequest::getMediaWorkflowId() const {
  return mediaWorkflowId_;
}

void ListMediaWorkflowExecutionsRequest::setMediaWorkflowId(const std::string &mediaWorkflowId) {
  mediaWorkflowId_ = mediaWorkflowId;
  setParameter(std::string("MediaWorkflowId"), mediaWorkflowId);
}

std::string ListMediaWorkflowExecutionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListMediaWorkflowExecutionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListMediaWorkflowExecutionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListMediaWorkflowExecutionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListMediaWorkflowExecutionsRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void ListMediaWorkflowExecutionsRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long ListMediaWorkflowExecutionsRequest::getOwnerId() const {
  return ownerId_;
}

void ListMediaWorkflowExecutionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListMediaWorkflowExecutionsRequest::getMediaWorkflowName() const {
  return mediaWorkflowName_;
}

void ListMediaWorkflowExecutionsRequest::setMediaWorkflowName(const std::string &mediaWorkflowName) {
  mediaWorkflowName_ = mediaWorkflowName;
  setParameter(std::string("MediaWorkflowName"), mediaWorkflowName);
}

std::string ListMediaWorkflowExecutionsRequest::getInputFileURL() const {
  return inputFileURL_;
}

void ListMediaWorkflowExecutionsRequest::setInputFileURL(const std::string &inputFileURL) {
  inputFileURL_ = inputFileURL;
  setParameter(std::string("InputFileURL"), inputFileURL);
}

