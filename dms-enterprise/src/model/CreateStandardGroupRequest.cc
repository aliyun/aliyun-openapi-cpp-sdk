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

#include <alibabacloud/dms-enterprise/model/CreateStandardGroupRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateStandardGroupRequest;

CreateStandardGroupRequest::CreateStandardGroupRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateStandardGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateStandardGroupRequest::~CreateStandardGroupRequest() {}

std::string CreateStandardGroupRequest::getDescription() const {
  return description_;
}

void CreateStandardGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateStandardGroupRequest::getTid() const {
  return tid_;
}

void CreateStandardGroupRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateStandardGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateStandardGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateStandardGroupRequest::getDbType() const {
  return dbType_;
}

void CreateStandardGroupRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

