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

#include <alibabacloud/rds/model/AddTagsToResourceRequest.h>

using AlibabaCloud::Rds::Model::AddTagsToResourceRequest;

AddTagsToResourceRequest::AddTagsToResourceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "AddTagsToResource") {
  setMethod(HttpRequest::Method::Post);
}

AddTagsToResourceRequest::~AddTagsToResourceRequest() {}

std::string AddTagsToResourceRequest::getTag4value() const {
  return tag4value_;
}

void AddTagsToResourceRequest::setTag4value(const std::string &tag4value) {
  tag4value_ = tag4value;
  setParameter(std::string("Tag.4.value"), tag4value);
}

long AddTagsToResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddTagsToResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddTagsToResourceRequest::getTag2key() const {
  return tag2key_;
}

void AddTagsToResourceRequest::setTag2key(const std::string &tag2key) {
  tag2key_ = tag2key;
  setParameter(std::string("Tag.2.key"), tag2key);
}

std::string AddTagsToResourceRequest::getClientToken() const {
  return clientToken_;
}

void AddTagsToResourceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddTagsToResourceRequest::getTag3key() const {
  return tag3key_;
}

void AddTagsToResourceRequest::setTag3key(const std::string &tag3key) {
  tag3key_ = tag3key;
  setParameter(std::string("Tag.3.key"), tag3key);
}

std::string AddTagsToResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddTagsToResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddTagsToResourceRequest::getTag1value() const {
  return tag1value_;
}

void AddTagsToResourceRequest::setTag1value(const std::string &tag1value) {
  tag1value_ = tag1value;
  setParameter(std::string("Tag.1.value"), tag1value);
}

std::string AddTagsToResourceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddTagsToResourceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AddTagsToResourceRequest::getRegionId() const {
  return regionId_;
}

void AddTagsToResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddTagsToResourceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void AddTagsToResourceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string AddTagsToResourceRequest::getTag3value() const {
  return tag3value_;
}

void AddTagsToResourceRequest::setTag3value(const std::string &tag3value) {
  tag3value_ = tag3value;
  setParameter(std::string("Tag.3.value"), tag3value);
}

std::string AddTagsToResourceRequest::getProxyId() const {
  return proxyId_;
}

void AddTagsToResourceRequest::setProxyId(const std::string &proxyId) {
  proxyId_ = proxyId;
  setParameter(std::string("proxyId"), proxyId);
}

std::string AddTagsToResourceRequest::getTag5key() const {
  return tag5key_;
}

void AddTagsToResourceRequest::setTag5key(const std::string &tag5key) {
  tag5key_ = tag5key;
  setParameter(std::string("Tag.5.key"), tag5key);
}

std::string AddTagsToResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddTagsToResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddTagsToResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddTagsToResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddTagsToResourceRequest::getOwnerId() const {
  return ownerId_;
}

void AddTagsToResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddTagsToResourceRequest::getTag5value() const {
  return tag5value_;
}

void AddTagsToResourceRequest::setTag5value(const std::string &tag5value) {
  tag5value_ = tag5value;
  setParameter(std::string("Tag.5.value"), tag5value);
}

std::string AddTagsToResourceRequest::getTags() const {
  return tags_;
}

void AddTagsToResourceRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string AddTagsToResourceRequest::getTag1key() const {
  return tag1key_;
}

void AddTagsToResourceRequest::setTag1key(const std::string &tag1key) {
  tag1key_ = tag1key;
  setParameter(std::string("Tag.1.key"), tag1key);
}

std::string AddTagsToResourceRequest::getTag2value() const {
  return tag2value_;
}

void AddTagsToResourceRequest::setTag2value(const std::string &tag2value) {
  tag2value_ = tag2value;
  setParameter(std::string("Tag.2.value"), tag2value);
}

std::string AddTagsToResourceRequest::getTag4key() const {
  return tag4key_;
}

void AddTagsToResourceRequest::setTag4key(const std::string &tag4key) {
  tag4key_ = tag4key;
  setParameter(std::string("Tag.4.key"), tag4key);
}

