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

#include <alibabacloud/quickbi-public/model/DeleteUserRequest.h>

using AlibabaCloud::Quickbi_public::Model::DeleteUserRequest;

DeleteUserRequest::DeleteUserRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "DeleteUser") {
  setMethod(HttpRequest::Method::Post);
}

DeleteUserRequest::~DeleteUserRequest() {}

std::string DeleteUserRequest::getAccessPoint() const {
  return accessPoint_;
}

void DeleteUserRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string DeleteUserRequest::getUserId() const {
  return userId_;
}

void DeleteUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string DeleteUserRequest::getTransferUserId() const {
  return transferUserId_;
}

void DeleteUserRequest::setTransferUserId(const std::string &transferUserId) {
  transferUserId_ = transferUserId;
  setParameter(std::string("TransferUserId"), transferUserId);
}

std::string DeleteUserRequest::getSignType() const {
  return signType_;
}

void DeleteUserRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

