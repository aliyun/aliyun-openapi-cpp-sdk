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

#include <alibabacloud/linkvisual/model/AddFaceUserGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::AddFaceUserGroupRequest;

AddFaceUserGroupRequest::AddFaceUserGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddFaceUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceUserGroupRequest::~AddFaceUserGroupRequest() {}

std::string AddFaceUserGroupRequest::getIsolationId() const {
  return isolationId_;
}

void AddFaceUserGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string AddFaceUserGroupRequest::getUserGroupName() const {
  return userGroupName_;
}

void AddFaceUserGroupRequest::setUserGroupName(const std::string &userGroupName) {
  userGroupName_ = userGroupName;
  setParameter(std::string("UserGroupName"), userGroupName);
}

std::string AddFaceUserGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void AddFaceUserGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddFaceUserGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void AddFaceUserGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

