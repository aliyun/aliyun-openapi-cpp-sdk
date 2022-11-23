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

#include <alibabacloud/dms-enterprise/model/DeleteLhMembersRequest.h>

using AlibabaCloud::Dms_enterprise::Model::DeleteLhMembersRequest;

DeleteLhMembersRequest::DeleteLhMembersRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "DeleteLhMembers") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLhMembersRequest::~DeleteLhMembersRequest() {}

long DeleteLhMembersRequest::getTid() const {
  return tid_;
}

void DeleteLhMembersRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int DeleteLhMembersRequest::getObjectType() const {
  return objectType_;
}

void DeleteLhMembersRequest::setObjectType(int objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), std::to_string(objectType));
}

std::vector<DeleteLhMembersRequest::int> DeleteLhMembersRequest::getMemberIds() const {
  return memberIds_;
}

void DeleteLhMembersRequest::setMemberIds(const std::vector<DeleteLhMembersRequest::int> &memberIds) {
  memberIds_ = memberIds;
  for(int dep1 = 0; dep1 != memberIds.size(); dep1++) {
    setParameter(std::string("MemberIds") + "." + std::to_string(dep1 + 1), std::to_string(memberIds[dep1]));
  }
}

long DeleteLhMembersRequest::getObjectId() const {
  return objectId_;
}

void DeleteLhMembersRequest::setObjectId(long objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), std::to_string(objectId));
}

