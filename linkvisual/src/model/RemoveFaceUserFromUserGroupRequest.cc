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

#include <alibabacloud/linkvisual/model/RemoveFaceUserFromUserGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::RemoveFaceUserFromUserGroupRequest;

RemoveFaceUserFromUserGroupRequest::RemoveFaceUserFromUserGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "RemoveFaceUserFromUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

RemoveFaceUserFromUserGroupRequest::~RemoveFaceUserFromUserGroupRequest() {}

std::string RemoveFaceUserFromUserGroupRequest::getIsolationId() const {
  return isolationId_;
}

void RemoveFaceUserFromUserGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string RemoveFaceUserFromUserGroupRequest::getUserId() const {
  return userId_;
}

void RemoveFaceUserFromUserGroupRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string RemoveFaceUserFromUserGroupRequest::getUserGroupId() const {
  return userGroupId_;
}

void RemoveFaceUserFromUserGroupRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

std::string RemoveFaceUserFromUserGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void RemoveFaceUserFromUserGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string RemoveFaceUserFromUserGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void RemoveFaceUserFromUserGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

