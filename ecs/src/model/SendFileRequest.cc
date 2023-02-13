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

#include <alibabacloud/ecs/model/SendFileRequest.h>

using AlibabaCloud::Ecs::Model::SendFileRequest;

SendFileRequest::SendFileRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "SendFile") {
  setMethod(HttpRequest::Method::Post);
}

SendFileRequest::~SendFileRequest() {}

long SendFileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SendFileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SendFileRequest::getDescription() const {
  return description_;
}

void SendFileRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long SendFileRequest::getTimeout() const {
  return timeout_;
}

void SendFileRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string SendFileRequest::getContent() const {
  return content_;
}

void SendFileRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string SendFileRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void SendFileRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string SendFileRequest::getRegionId() const {
  return regionId_;
}

void SendFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SendFileRequest::getFileOwner() const {
  return fileOwner_;
}

void SendFileRequest::setFileOwner(const std::string &fileOwner) {
  fileOwner_ = fileOwner;
  setParameter(std::string("FileOwner"), fileOwner);
}

std::vector<SendFileRequest::Tag> SendFileRequest::getTag() const {
  return tag_;
}

void SendFileRequest::setTag(const std::vector<SendFileRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool SendFileRequest::getOverwrite() const {
  return overwrite_;
}

void SendFileRequest::setOverwrite(bool overwrite) {
  overwrite_ = overwrite;
  setParameter(std::string("Overwrite"), overwrite ? "true" : "false");
}

std::string SendFileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SendFileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SendFileRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SendFileRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SendFileRequest::getFileMode() const {
  return fileMode_;
}

void SendFileRequest::setFileMode(const std::string &fileMode) {
  fileMode_ = fileMode;
  setParameter(std::string("FileMode"), fileMode);
}

long SendFileRequest::getOwnerId() const {
  return ownerId_;
}

void SendFileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SendFileRequest::getContentType() const {
  return contentType_;
}

void SendFileRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setParameter(std::string("ContentType"), contentType);
}

std::vector<std::string> SendFileRequest::getInstanceId() const {
  return instanceId_;
}

void SendFileRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string SendFileRequest::getName() const {
  return name_;
}

void SendFileRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string SendFileRequest::getFileGroup() const {
  return fileGroup_;
}

void SendFileRequest::setFileGroup(const std::string &fileGroup) {
  fileGroup_ = fileGroup;
  setParameter(std::string("FileGroup"), fileGroup);
}

std::string SendFileRequest::getTargetDir() const {
  return targetDir_;
}

void SendFileRequest::setTargetDir(const std::string &targetDir) {
  targetDir_ = targetDir;
  setParameter(std::string("TargetDir"), targetDir);
}

