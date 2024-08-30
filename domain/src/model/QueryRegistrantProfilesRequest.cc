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

#include <alibabacloud/domain/model/QueryRegistrantProfilesRequest.h>

using AlibabaCloud::Domain::Model::QueryRegistrantProfilesRequest;

QueryRegistrantProfilesRequest::QueryRegistrantProfilesRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryRegistrantProfiles") {
  setMethod(HttpRequest::Method::Post);
}

QueryRegistrantProfilesRequest::~QueryRegistrantProfilesRequest() {}

long QueryRegistrantProfilesRequest::getRegistrantProfileId() const {
  return registrantProfileId_;
}

void QueryRegistrantProfilesRequest::setRegistrantProfileId(long registrantProfileId) {
  registrantProfileId_ = registrantProfileId;
  setParameter(std::string("RegistrantProfileId"), std::to_string(registrantProfileId));
}

std::string QueryRegistrantProfilesRequest::getRemark() const {
  return remark_;
}

void QueryRegistrantProfilesRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

int QueryRegistrantProfilesRequest::getPageNum() const {
  return pageNum_;
}

void QueryRegistrantProfilesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryRegistrantProfilesRequest::getPageSize() const {
  return pageSize_;
}

void QueryRegistrantProfilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryRegistrantProfilesRequest::getRealNameStatus() const {
  return realNameStatus_;
}

void QueryRegistrantProfilesRequest::setRealNameStatus(const std::string &realNameStatus) {
  realNameStatus_ = realNameStatus;
  setParameter(std::string("RealNameStatus"), realNameStatus);
}

std::string QueryRegistrantProfilesRequest::getLang() const {
  return lang_;
}

void QueryRegistrantProfilesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string QueryRegistrantProfilesRequest::getEmail() const {
  return email_;
}

void QueryRegistrantProfilesRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string QueryRegistrantProfilesRequest::getZhRegistrantOrganization() const {
  return zhRegistrantOrganization_;
}

void QueryRegistrantProfilesRequest::setZhRegistrantOrganization(const std::string &zhRegistrantOrganization) {
  zhRegistrantOrganization_ = zhRegistrantOrganization;
  setParameter(std::string("ZhRegistrantOrganization"), zhRegistrantOrganization);
}

std::string QueryRegistrantProfilesRequest::getRegistrantType() const {
  return registrantType_;
}

void QueryRegistrantProfilesRequest::setRegistrantType(const std::string &registrantType) {
  registrantType_ = registrantType;
  setParameter(std::string("RegistrantType"), registrantType);
}

std::string QueryRegistrantProfilesRequest::getRegistrantProfileType() const {
  return registrantProfileType_;
}

void QueryRegistrantProfilesRequest::setRegistrantProfileType(const std::string &registrantProfileType) {
  registrantProfileType_ = registrantProfileType;
  setParameter(std::string("RegistrantProfileType"), registrantProfileType);
}

bool QueryRegistrantProfilesRequest::getDefaultRegistrantProfile() const {
  return defaultRegistrantProfile_;
}

void QueryRegistrantProfilesRequest::setDefaultRegistrantProfile(bool defaultRegistrantProfile) {
  defaultRegistrantProfile_ = defaultRegistrantProfile;
  setParameter(std::string("DefaultRegistrantProfile"), defaultRegistrantProfile ? "true" : "false");
}

std::string QueryRegistrantProfilesRequest::getRegistrantOrganization() const {
  return registrantOrganization_;
}

void QueryRegistrantProfilesRequest::setRegistrantOrganization(const std::string &registrantOrganization) {
  registrantOrganization_ = registrantOrganization;
  setParameter(std::string("RegistrantOrganization"), registrantOrganization);
}

std::string QueryRegistrantProfilesRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryRegistrantProfilesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

