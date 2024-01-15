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

#include <alibabacloud/linkvisual/model/AddFaceUserToUserGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::AddFaceUserToUserGroupRequest;

AddFaceUserToUserGroupRequest::AddFaceUserToUserGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddFaceUserToUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceUserToUserGroupRequest::~AddFaceUserToUserGroupRequest() {}

std::string AddFaceUserToUserGroupRequest::getIsolationId() const {
  return isolationId_;
}

void AddFaceUserToUserGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string AddFaceUserToUserGroupRequest::getUserId() const {
  return userId_;
}

void AddFaceUserToUserGroupRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string AddFaceUserToUserGroupRequest::getUserGroupId() const {
  return userGroupId_;
}

void AddFaceUserToUserGroupRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

std::string AddFaceUserToUserGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void AddFaceUserToUserGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddFaceUserToUserGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void AddFaceUserToUserGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

