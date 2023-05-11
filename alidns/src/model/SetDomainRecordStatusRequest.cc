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

#include <alibabacloud/alidns/model/SetDomainRecordStatusRequest.h>

using AlibabaCloud::Alidns::Model::SetDomainRecordStatusRequest;

SetDomainRecordStatusRequest::SetDomainRecordStatusRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "SetDomainRecordStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetDomainRecordStatusRequest::~SetDomainRecordStatusRequest() {}

std::string SetDomainRecordStatusRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetDomainRecordStatusRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetDomainRecordStatusRequest::getRecordId() const {
  return recordId_;
}

void SetDomainRecordStatusRequest::setRecordId(const std::string &recordId) {
  recordId_ = recordId;
  setParameter(std::string("RecordId"), recordId);
}

std::string SetDomainRecordStatusRequest::getUserClientIp() const {
  return userClientIp_;
}

void SetDomainRecordStatusRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SetDomainRecordStatusRequest::getLang() const {
  return lang_;
}

void SetDomainRecordStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SetDomainRecordStatusRequest::getStatus() const {
  return status_;
}

void SetDomainRecordStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

