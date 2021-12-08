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

#include <alibabacloud/dyplsapi/model/QueryRecordFileDownloadUrlRequest.h>

using AlibabaCloud::Dyplsapi::Model::QueryRecordFileDownloadUrlRequest;

QueryRecordFileDownloadUrlRequest::QueryRecordFileDownloadUrlRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "QueryRecordFileDownloadUrl") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordFileDownloadUrlRequest::~QueryRecordFileDownloadUrlRequest() {}

std::string QueryRecordFileDownloadUrlRequest::getCallId() const {
  return callId_;
}

void QueryRecordFileDownloadUrlRequest::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

long QueryRecordFileDownloadUrlRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryRecordFileDownloadUrlRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryRecordFileDownloadUrlRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryRecordFileDownloadUrlRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryRecordFileDownloadUrlRequest::getProductType() const {
  return productType_;
}

void QueryRecordFileDownloadUrlRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string QueryRecordFileDownloadUrlRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryRecordFileDownloadUrlRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long QueryRecordFileDownloadUrlRequest::getOwnerId() const {
  return ownerId_;
}

void QueryRecordFileDownloadUrlRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryRecordFileDownloadUrlRequest::getCallTime() const {
  return callTime_;
}

void QueryRecordFileDownloadUrlRequest::setCallTime(const std::string &callTime) {
  callTime_ = callTime;
  setParameter(std::string("CallTime"), callTime);
}

std::string QueryRecordFileDownloadUrlRequest::getPoolKey() const {
  return poolKey_;
}

void QueryRecordFileDownloadUrlRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

