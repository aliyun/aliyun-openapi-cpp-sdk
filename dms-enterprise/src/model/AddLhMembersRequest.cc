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

#include <alibabacloud/dms-enterprise/model/AddLhMembersRequest.h>

using AlibabaCloud::Dms_enterprise::Model::AddLhMembersRequest;

AddLhMembersRequest::AddLhMembersRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "AddLhMembers") {
  setMethod(HttpRequest::Method::Post);
}

AddLhMembersRequest::~AddLhMembersRequest() {}

long AddLhMembersRequest::getTid() const {
  return tid_;
}

void AddLhMembersRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<AddLhMembersRequest::Members> AddLhMembersRequest::getMembers() const {
  return members_;
}

void AddLhMembersRequest::setMembers(const std::vector<AddLhMembersRequest::Members> &members) {
  members_ = members;
  for(int dep1 = 0; dep1 != members.size(); dep1++) {
    for(int dep2 = 0; dep2 != members[dep1].roles.size(); dep2++) {
      setParameter(std::string("Members") + "." + std::to_string(dep1 + 1) + ".Roles." + std::to_string(dep2 + 1), members[dep1].roles[dep2]);
    }
    setParameter(std::string("Members") + "." + std::to_string(dep1 + 1) + ".UserId", std::to_string(members[dep1].userId));
  }
}

int AddLhMembersRequest::getObjectType() const {
  return objectType_;
}

void AddLhMembersRequest::setObjectType(int objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), std::to_string(objectType));
}

long AddLhMembersRequest::getObjectId() const {
  return objectId_;
}

void AddLhMembersRequest::setObjectId(long objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), std::to_string(objectId));
}

