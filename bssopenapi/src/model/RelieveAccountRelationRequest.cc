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

#include <alibabacloud/bssopenapi/model/RelieveAccountRelationRequest.h>

using AlibabaCloud::BssOpenApi::Model::RelieveAccountRelationRequest;

RelieveAccountRelationRequest::RelieveAccountRelationRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "RelieveAccountRelation") {
  setMethod(HttpRequest::Method::Post);
}

RelieveAccountRelationRequest::~RelieveAccountRelationRequest() {}

std::string RelieveAccountRelationRequest::getRelationType() const {
  return relationType_;
}

void RelieveAccountRelationRequest::setRelationType(const std::string &relationType) {
  relationType_ = relationType;
  setParameter(std::string("RelationType"), relationType);
}

long RelieveAccountRelationRequest::getParentUserId() const {
  return parentUserId_;
}

void RelieveAccountRelationRequest::setParentUserId(long parentUserId) {
  parentUserId_ = parentUserId;
  setParameter(std::string("ParentUserId"), std::to_string(parentUserId));
}

long RelieveAccountRelationRequest::getChildUserId() const {
  return childUserId_;
}

void RelieveAccountRelationRequest::setChildUserId(long childUserId) {
  childUserId_ = childUserId;
  setParameter(std::string("ChildUserId"), std::to_string(childUserId));
}

std::string RelieveAccountRelationRequest::getRequestId() const {
  return requestId_;
}

void RelieveAccountRelationRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setParameter(std::string("RequestId"), requestId);
}

long RelieveAccountRelationRequest::getRelationId() const {
  return relationId_;
}

void RelieveAccountRelationRequest::setRelationId(long relationId) {
  relationId_ = relationId;
  setParameter(std::string("RelationId"), std::to_string(relationId));
}

