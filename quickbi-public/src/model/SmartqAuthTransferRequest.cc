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

#include <alibabacloud/quickbi-public/model/SmartqAuthTransferRequest.h>

using AlibabaCloud::Quickbi_public::Model::SmartqAuthTransferRequest;

SmartqAuthTransferRequest::SmartqAuthTransferRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "SmartqAuthTransfer") {
  setMethod(HttpRequest::Method::Post);
}

SmartqAuthTransferRequest::~SmartqAuthTransferRequest() {}

std::string SmartqAuthTransferRequest::getAccessPoint() const {
  return accessPoint_;
}

void SmartqAuthTransferRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string SmartqAuthTransferRequest::getTargetUserIds() const {
  return targetUserIds_;
}

void SmartqAuthTransferRequest::setTargetUserIds(const std::string &targetUserIds) {
  targetUserIds_ = targetUserIds;
  setParameter(std::string("TargetUserIds"), targetUserIds);
}

std::string SmartqAuthTransferRequest::getSignType() const {
  return signType_;
}

void SmartqAuthTransferRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string SmartqAuthTransferRequest::getOriginUserId() const {
  return originUserId_;
}

void SmartqAuthTransferRequest::setOriginUserId(const std::string &originUserId) {
  originUserId_ = originUserId;
  setParameter(std::string("OriginUserId"), originUserId);
}

