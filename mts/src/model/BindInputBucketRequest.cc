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

#include <alibabacloud/mts/model/BindInputBucketRequest.h>

using AlibabaCloud::Mts::Model::BindInputBucketRequest;

BindInputBucketRequest::BindInputBucketRequest()
    : RpcServiceRequest("mts", "2014-06-18", "BindInputBucket") {
  setMethod(HttpRequest::Method::Post);
}

BindInputBucketRequest::~BindInputBucketRequest() {}

std::string BindInputBucketRequest::getReferer() const {
  return referer_;
}

void BindInputBucketRequest::setReferer(const std::string &referer) {
  referer_ = referer;
  setParameter(std::string("Referer"), referer);
}

long BindInputBucketRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BindInputBucketRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string BindInputBucketRequest::getDepositorCredentials() const {
  return depositorCredentials_;
}

void BindInputBucketRequest::setDepositorCredentials(const std::string &depositorCredentials) {
  depositorCredentials_ = depositorCredentials;
  setParameter(std::string("DepositorCredentials"), depositorCredentials);
}

std::string BindInputBucketRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BindInputBucketRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BindInputBucketRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BindInputBucketRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string BindInputBucketRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BindInputBucketRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BindInputBucketRequest::getOwnerId() const {
  return ownerId_;
}

void BindInputBucketRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BindInputBucketRequest::getBucket() const {
  return bucket_;
}

void BindInputBucketRequest::setBucket(const std::string &bucket) {
  bucket_ = bucket;
  setParameter(std::string("Bucket"), bucket);
}

std::string BindInputBucketRequest::getRoleArn() const {
  return roleArn_;
}

void BindInputBucketRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

