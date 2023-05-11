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

#include <alibabacloud/alidns/model/UpdateDNSSLBWeightRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDNSSLBWeightRequest;

UpdateDNSSLBWeightRequest::UpdateDNSSLBWeightRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateDNSSLBWeight") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDNSSLBWeightRequest::~UpdateDNSSLBWeightRequest() {}

int UpdateDNSSLBWeightRequest::getWeight() const {
  return weight_;
}

void UpdateDNSSLBWeightRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string UpdateDNSSLBWeightRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateDNSSLBWeightRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateDNSSLBWeightRequest::getRecordId() const {
  return recordId_;
}

void UpdateDNSSLBWeightRequest::setRecordId(const std::string &recordId) {
  recordId_ = recordId;
  setParameter(std::string("RecordId"), recordId);
}

std::string UpdateDNSSLBWeightRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDNSSLBWeightRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateDNSSLBWeightRequest::getLang() const {
  return lang_;
}

void UpdateDNSSLBWeightRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

