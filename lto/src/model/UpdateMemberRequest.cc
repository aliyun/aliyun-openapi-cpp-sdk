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

#include <alibabacloud/lto/model/UpdateMemberRequest.h>

using AlibabaCloud::Lto::Model::UpdateMemberRequest;

UpdateMemberRequest::UpdateMemberRequest()
    : RpcServiceRequest("lto", "2021-07-07", "UpdateMember") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMemberRequest::~UpdateMemberRequest() {}

std::string UpdateMemberRequest::getRemark() const {
  return remark_;
}

void UpdateMemberRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string UpdateMemberRequest::getUid() const {
  return uid_;
}

void UpdateMemberRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

std::string UpdateMemberRequest::getRegionId() const {
  return regionId_;
}

void UpdateMemberRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateMemberRequest::getTelephony() const {
  return telephony_;
}

void UpdateMemberRequest::setTelephony(const std::string &telephony) {
  telephony_ = telephony;
  setParameter(std::string("Telephony"), telephony);
}

std::string UpdateMemberRequest::getName() const {
  return name_;
}

void UpdateMemberRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int UpdateMemberRequest::getAuthorizedDeviceCount() const {
  return authorizedDeviceCount_;
}

void UpdateMemberRequest::setAuthorizedDeviceCount(int authorizedDeviceCount) {
  authorizedDeviceCount_ = authorizedDeviceCount;
  setParameter(std::string("AuthorizedDeviceCount"), std::to_string(authorizedDeviceCount));
}

std::string UpdateMemberRequest::getContactor() const {
  return contactor_;
}

void UpdateMemberRequest::setContactor(const std::string &contactor) {
  contactor_ = contactor;
  setParameter(std::string("Contactor"), contactor);
}

long UpdateMemberRequest::getAuthorizedCount() const {
  return authorizedCount_;
}

void UpdateMemberRequest::setAuthorizedCount(long authorizedCount) {
  authorizedCount_ = authorizedCount;
  setParameter(std::string("AuthorizedCount"), std::to_string(authorizedCount));
}

std::string UpdateMemberRequest::getMemberId() const {
  return memberId_;
}

void UpdateMemberRequest::setMemberId(const std::string &memberId) {
  memberId_ = memberId;
  setParameter(std::string("MemberId"), memberId);
}

