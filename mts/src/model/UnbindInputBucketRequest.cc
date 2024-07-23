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

#include <alibabacloud/mts/model/UnbindInputBucketRequest.h>

using AlibabaCloud::Mts::Model::UnbindInputBucketRequest;

UnbindInputBucketRequest::UnbindInputBucketRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UnbindInputBucket") {
  setMethod(HttpRequest::Method::Post);
}

UnbindInputBucketRequest::~UnbindInputBucketRequest() {}

long UnbindInputBucketRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnbindInputBucketRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnbindInputBucketRequest::getDepositorCredentials() const {
  return depositorCredentials_;
}

void UnbindInputBucketRequest::setDepositorCredentials(const std::string &depositorCredentials) {
  depositorCredentials_ = depositorCredentials;
  setParameter(std::string("DepositorCredentials"), depositorCredentials);
}

std::string UnbindInputBucketRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UnbindInputBucketRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UnbindInputBucketRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnbindInputBucketRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnbindInputBucketRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnbindInputBucketRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnbindInputBucketRequest::getOwnerId() const {
  return ownerId_;
}

void UnbindInputBucketRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UnbindInputBucketRequest::getBucket() const {
  return bucket_;
}

void UnbindInputBucketRequest::setBucket(const std::string &bucket) {
  bucket_ = bucket;
  setParameter(std::string("Bucket"), bucket);
}

std::string UnbindInputBucketRequest::getRoleArn() const {
  return roleArn_;
}

void UnbindInputBucketRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

