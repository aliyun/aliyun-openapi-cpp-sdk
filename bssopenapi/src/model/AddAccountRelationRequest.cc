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

#include <alibabacloud/bssopenapi/model/AddAccountRelationRequest.h>

using AlibabaCloud::BssOpenApi::Model::AddAccountRelationRequest;

AddAccountRelationRequest::AddAccountRelationRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "AddAccountRelation") {
  setMethod(HttpRequest::Method::Post);
}

AddAccountRelationRequest::~AddAccountRelationRequest() {}

std::string AddAccountRelationRequest::getChildNick() const {
  return childNick_;
}

void AddAccountRelationRequest::setChildNick(const std::string &childNick) {
  childNick_ = childNick;
  setParameter(std::string("ChildNick"), childNick);
}

std::string AddAccountRelationRequest::getRelationType() const {
  return relationType_;
}

void AddAccountRelationRequest::setRelationType(const std::string &relationType) {
  relationType_ = relationType;
  setParameter(std::string("RelationType"), relationType);
}

long AddAccountRelationRequest::getParentUserId() const {
  return parentUserId_;
}

void AddAccountRelationRequest::setParentUserId(long parentUserId) {
  parentUserId_ = parentUserId;
  setParameter(std::string("ParentUserId"), std::to_string(parentUserId));
}

long AddAccountRelationRequest::getChildUserId() const {
  return childUserId_;
}

void AddAccountRelationRequest::setChildUserId(long childUserId) {
  childUserId_ = childUserId;
  setParameter(std::string("ChildUserId"), std::to_string(childUserId));
}

std::string AddAccountRelationRequest::getRequestId() const {
  return requestId_;
}

void AddAccountRelationRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setParameter(std::string("RequestId"), requestId);
}

std::vector<std::string> AddAccountRelationRequest::getPermissionCodes() const {
  return permissionCodes_;
}

void AddAccountRelationRequest::setPermissionCodes(const std::vector<std::string> &permissionCodes) {
  permissionCodes_ = permissionCodes;
}

std::vector<std::string> AddAccountRelationRequest::getRoleCodes() const {
  return roleCodes_;
}

void AddAccountRelationRequest::setRoleCodes(const std::vector<std::string> &roleCodes) {
  roleCodes_ = roleCodes;
}

