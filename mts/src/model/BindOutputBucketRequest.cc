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

#include <alibabacloud/mts/model/BindOutputBucketRequest.h>

using AlibabaCloud::Mts::Model::BindOutputBucketRequest;

BindOutputBucketRequest::BindOutputBucketRequest()
    : RpcServiceRequest("mts", "2014-06-18", "BindOutputBucket") {
  setMethod(HttpRequest::Method::Post);
}

BindOutputBucketRequest::~BindOutputBucketRequest() {}

long BindOutputBucketRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BindOutputBucketRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string BindOutputBucketRequest::getDepositorCredentials() const {
  return depositorCredentials_;
}

void BindOutputBucketRequest::setDepositorCredentials(const std::string &depositorCredentials) {
  depositorCredentials_ = depositorCredentials;
  setParameter(std::string("DepositorCredentials"), depositorCredentials);
}

std::string BindOutputBucketRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BindOutputBucketRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BindOutputBucketRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BindOutputBucketRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string BindOutputBucketRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BindOutputBucketRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BindOutputBucketRequest::getOwnerId() const {
  return ownerId_;
}

void BindOutputBucketRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BindOutputBucketRequest::getBucket() const {
  return bucket_;
}

void BindOutputBucketRequest::setBucket(const std::string &bucket) {
  bucket_ = bucket;
  setParameter(std::string("Bucket"), bucket);
}

std::string BindOutputBucketRequest::getRoleArn() const {
  return roleArn_;
}

void BindOutputBucketRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

