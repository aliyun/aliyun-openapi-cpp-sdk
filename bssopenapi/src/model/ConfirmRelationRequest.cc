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

#include <alibabacloud/bssopenapi/model/ConfirmRelationRequest.h>

using AlibabaCloud::BssOpenApi::Model::ConfirmRelationRequest;

ConfirmRelationRequest::ConfirmRelationRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "ConfirmRelation") {
  setMethod(HttpRequest::Method::Post);
}

ConfirmRelationRequest::~ConfirmRelationRequest() {}

std::string ConfirmRelationRequest::getRelationType() const {
  return relationType_;
}

void ConfirmRelationRequest::setRelationType(const std::string &relationType) {
  relationType_ = relationType;
  setParameter(std::string("RelationType"), relationType);
}

long ConfirmRelationRequest::getParentUserId() const {
  return parentUserId_;
}

void ConfirmRelationRequest::setParentUserId(long parentUserId) {
  parentUserId_ = parentUserId;
  setParameter(std::string("ParentUserId"), std::to_string(parentUserId));
}

std::string ConfirmRelationRequest::getConfirmCode() const {
  return confirmCode_;
}

void ConfirmRelationRequest::setConfirmCode(const std::string &confirmCode) {
  confirmCode_ = confirmCode;
  setParameter(std::string("ConfirmCode"), confirmCode);
}

long ConfirmRelationRequest::getChildUserId() const {
  return childUserId_;
}

void ConfirmRelationRequest::setChildUserId(long childUserId) {
  childUserId_ = childUserId;
  setParameter(std::string("ChildUserId"), std::to_string(childUserId));
}

std::string ConfirmRelationRequest::getRequestId() const {
  return requestId_;
}

void ConfirmRelationRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setParameter(std::string("RequestId"), requestId);
}

std::vector<std::string> ConfirmRelationRequest::getPermissionCodes() const {
  return permissionCodes_;
}

void ConfirmRelationRequest::setPermissionCodes(const std::vector<std::string> &permissionCodes) {
  permissionCodes_ = permissionCodes;
}

long ConfirmRelationRequest::getRelationId() const {
  return relationId_;
}

void ConfirmRelationRequest::setRelationId(long relationId) {
  relationId_ = relationId;
  setParameter(std::string("RelationId"), std::to_string(relationId));
}

