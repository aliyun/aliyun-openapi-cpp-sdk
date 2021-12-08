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

#include <alibabacloud/dyplsapi/model/InitFaceVerifyRequest.h>

using AlibabaCloud::Dyplsapi::Model::InitFaceVerifyRequest;

InitFaceVerifyRequest::InitFaceVerifyRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "InitFaceVerify") {
  setMethod(HttpRequest::Method::Post);
}

InitFaceVerifyRequest::~InitFaceVerifyRequest() {}

long InitFaceVerifyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void InitFaceVerifyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string InitFaceVerifyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void InitFaceVerifyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string InitFaceVerifyRequest::getMetaInfo() const {
  return metaInfo_;
}

void InitFaceVerifyRequest::setMetaInfo(const std::string &metaInfo) {
  metaInfo_ = metaInfo;
  setParameter(std::string("MetaInfo"), metaInfo);
}

std::string InitFaceVerifyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void InitFaceVerifyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string InitFaceVerifyRequest::getProdCode() const {
  return prodCode_;
}

void InitFaceVerifyRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long InitFaceVerifyRequest::getOwnerId() const {
  return ownerId_;
}

void InitFaceVerifyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

