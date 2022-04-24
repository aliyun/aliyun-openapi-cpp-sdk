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

#include <alibabacloud/bssopenapi/model/ModifyAccountRelationRequest.h>

using AlibabaCloud::BssOpenApi::Model::ModifyAccountRelationRequest;

ModifyAccountRelationRequest::ModifyAccountRelationRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "ModifyAccountRelation") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountRelationRequest::~ModifyAccountRelationRequest() {}

std::string ModifyAccountRelationRequest::getChildNick() const {
  return childNick_;
}

void ModifyAccountRelationRequest::setChildNick(const std::string &childNick) {
  childNick_ = childNick;
  setParameter(std::string("ChildNick"), childNick);
}

long ModifyAccountRelationRequest::getParentUserId() const {
  return parentUserId_;
}

void ModifyAccountRelationRequest::setParentUserId(long parentUserId) {
  parentUserId_ = parentUserId;
  setParameter(std::string("ParentUserId"), std::to_string(parentUserId));
}

long ModifyAccountRelationRequest::getRelationId() const {
  return relationId_;
}

void ModifyAccountRelationRequest::setRelationId(long relationId) {
  relationId_ = relationId;
  setParameter(std::string("RelationId"), std::to_string(relationId));
}

std::vector<std::string> ModifyAccountRelationRequest::getRoleCodes() const {
  return roleCodes_;
}

void ModifyAccountRelationRequest::setRoleCodes(const std::vector<std::string> &roleCodes) {
  roleCodes_ = roleCodes;
}

std::string ModifyAccountRelationRequest::getRelationOperation() const {
  return relationOperation_;
}

void ModifyAccountRelationRequest::setRelationOperation(const std::string &relationOperation) {
  relationOperation_ = relationOperation;
  setParameter(std::string("RelationOperation"), relationOperation);
}

std::string ModifyAccountRelationRequest::getRelationType() const {
  return relationType_;
}

void ModifyAccountRelationRequest::setRelationType(const std::string &relationType) {
  relationType_ = relationType;
  setParameter(std::string("RelationType"), relationType);
}

long ModifyAccountRelationRequest::getChildUserId() const {
  return childUserId_;
}

void ModifyAccountRelationRequest::setChildUserId(long childUserId) {
  childUserId_ = childUserId;
  setParameter(std::string("ChildUserId"), std::to_string(childUserId));
}

std::string ModifyAccountRelationRequest::getRequestId() const {
  return requestId_;
}

void ModifyAccountRelationRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setParameter(std::string("RequestId"), requestId);
}

std::vector<std::string> ModifyAccountRelationRequest::getPermissionCodes() const {
  return permissionCodes_;
}

void ModifyAccountRelationRequest::setPermissionCodes(const std::vector<std::string> &permissionCodes) {
  permissionCodes_ = permissionCodes;
}

