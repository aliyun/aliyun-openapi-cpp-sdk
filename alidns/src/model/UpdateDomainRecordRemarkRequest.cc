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

#include <alibabacloud/alidns/model/UpdateDomainRecordRemarkRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDomainRecordRemarkRequest;

UpdateDomainRecordRemarkRequest::UpdateDomainRecordRemarkRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateDomainRecordRemark") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDomainRecordRemarkRequest::~UpdateDomainRecordRemarkRequest() {}

std::string UpdateDomainRecordRemarkRequest::getRemark() const {
  return remark_;
}

void UpdateDomainRecordRemarkRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string UpdateDomainRecordRemarkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateDomainRecordRemarkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateDomainRecordRemarkRequest::getRecordId() const {
  return recordId_;
}

void UpdateDomainRecordRemarkRequest::setRecordId(const std::string &recordId) {
  recordId_ = recordId;
  setParameter(std::string("RecordId"), recordId);
}

std::string UpdateDomainRecordRemarkRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDomainRecordRemarkRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateDomainRecordRemarkRequest::getLang() const {
  return lang_;
}

void UpdateDomainRecordRemarkRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

