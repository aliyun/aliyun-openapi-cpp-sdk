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

#include <alibabacloud/selectdb/model/ModifySecurityIPListRequest.h>

using AlibabaCloud::Selectdb::Model::ModifySecurityIPListRequest;

ModifySecurityIPListRequest::ModifySecurityIPListRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "ModifySecurityIPList") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityIPListRequest::~ModifySecurityIPListRequest() {}

std::string ModifySecurityIPListRequest::getModifyMode() const {
  return modifyMode_;
}

void ModifySecurityIPListRequest::setModifyMode(const std::string &modifyMode) {
  modifyMode_ = modifyMode;
  setParameter(std::string("ModifyMode"), modifyMode);
}

long ModifySecurityIPListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityIPListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySecurityIPListRequest::getGroupName() const {
  return groupName_;
}

void ModifySecurityIPListRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ModifySecurityIPListRequest::getSecurityIPList() const {
  return securityIPList_;
}

void ModifySecurityIPListRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string ModifySecurityIPListRequest::getRegionId() const {
  return regionId_;
}

void ModifySecurityIPListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySecurityIPListRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifySecurityIPListRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

