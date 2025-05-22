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

#include <alibabacloud/rds/model/QueryRecommendByCodeRequest.h>

using AlibabaCloud::Rds::Model::QueryRecommendByCodeRequest;

QueryRecommendByCodeRequest::QueryRecommendByCodeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "QueryRecommendByCode") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecommendByCodeRequest::~QueryRecommendByCodeRequest() {}

long QueryRecommendByCodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryRecommendByCodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryRecommendByCodeRequest::getCode() const {
  return code_;
}

void QueryRecommendByCodeRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string QueryRecommendByCodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryRecommendByCodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryRecommendByCodeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void QueryRecommendByCodeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string QueryRecommendByCodeRequest::getRegionId() const {
  return regionId_;
}

void QueryRecommendByCodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryRecommendByCodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryRecommendByCodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryRecommendByCodeRequest::getOwnerId() const {
  return ownerId_;
}

void QueryRecommendByCodeRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

