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

#include <alibabacloud/dyplsapi/model/CancelPickUpWaybillRequest.h>

using AlibabaCloud::Dyplsapi::Model::CancelPickUpWaybillRequest;

CancelPickUpWaybillRequest::CancelPickUpWaybillRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "CancelPickUpWaybill") {
  setMethod(HttpRequest::Method::Post);
}

CancelPickUpWaybillRequest::~CancelPickUpWaybillRequest() {}

long CancelPickUpWaybillRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CancelPickUpWaybillRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CancelPickUpWaybillRequest::getOuterOrderCode() const {
  return outerOrderCode_;
}

void CancelPickUpWaybillRequest::setOuterOrderCode(const std::string &outerOrderCode) {
  outerOrderCode_ = outerOrderCode;
  setParameter(std::string("OuterOrderCode"), outerOrderCode);
}

std::string CancelPickUpWaybillRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CancelPickUpWaybillRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CancelPickUpWaybillRequest::getCancelDesc() const {
  return cancelDesc_;
}

void CancelPickUpWaybillRequest::setCancelDesc(const std::string &cancelDesc) {
  cancelDesc_ = cancelDesc;
  setParameter(std::string("CancelDesc"), cancelDesc);
}

std::string CancelPickUpWaybillRequest::getContentType() const {
  return contentType_;
}

void CancelPickUpWaybillRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setHeader(std::string("Content-Type"), contentType);
}

std::string CancelPickUpWaybillRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CancelPickUpWaybillRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CancelPickUpWaybillRequest::getOwnerId() const {
  return ownerId_;
}

void CancelPickUpWaybillRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

