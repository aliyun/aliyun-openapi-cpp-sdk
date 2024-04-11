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

#include <alibabacloud/cams/model/DeleteFlowRequest.h>

using AlibabaCloud::Cams::Model::DeleteFlowRequest;

DeleteFlowRequest::DeleteFlowRequest()
    : RpcServiceRequest("cams", "2020-06-06", "DeleteFlow") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFlowRequest::~DeleteFlowRequest() {}

long DeleteFlowRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteFlowRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteFlowRequest::getCode() const {
  return code_;
}

void DeleteFlowRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string DeleteFlowRequest::getExtendFunction() const {
  return extendFunction_;
}

void DeleteFlowRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string DeleteFlowRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteFlowRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteFlowRequest::getRouteName() const {
  return routeName_;
}

void DeleteFlowRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string DeleteFlowRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteFlowRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteFlowRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteFlowRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

