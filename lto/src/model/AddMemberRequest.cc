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

#include <alibabacloud/lto/model/AddMemberRequest.h>

using AlibabaCloud::Lto::Model::AddMemberRequest;

AddMemberRequest::AddMemberRequest()
    : RpcServiceRequest("lto", "2021-07-07", "AddMember") {
  setMethod(HttpRequest::Method::Post);
}

AddMemberRequest::~AddMemberRequest() {}

std::string AddMemberRequest::getRemark() const {
  return remark_;
}

void AddMemberRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddMemberRequest::getUid() const {
  return uid_;
}

void AddMemberRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

std::string AddMemberRequest::getRegionId() const {
  return regionId_;
}

void AddMemberRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddMemberRequest::getTelephony() const {
  return telephony_;
}

void AddMemberRequest::setTelephony(const std::string &telephony) {
  telephony_ = telephony;
  setParameter(std::string("Telephony"), telephony);
}

std::string AddMemberRequest::getName() const {
  return name_;
}

void AddMemberRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int AddMemberRequest::getAuthorizedDeviceCount() const {
  return authorizedDeviceCount_;
}

void AddMemberRequest::setAuthorizedDeviceCount(int authorizedDeviceCount) {
  authorizedDeviceCount_ = authorizedDeviceCount;
  setParameter(std::string("AuthorizedDeviceCount"), std::to_string(authorizedDeviceCount));
}

std::string AddMemberRequest::getContactor() const {
  return contactor_;
}

void AddMemberRequest::setContactor(const std::string &contactor) {
  contactor_ = contactor;
  setParameter(std::string("Contactor"), contactor);
}

long AddMemberRequest::getAuthorizedCount() const {
  return authorizedCount_;
}

void AddMemberRequest::setAuthorizedCount(long authorizedCount) {
  authorizedCount_ = authorizedCount;
  setParameter(std::string("AuthorizedCount"), std::to_string(authorizedCount));
}

