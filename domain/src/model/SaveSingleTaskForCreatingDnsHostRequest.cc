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

#include <alibabacloud/domain/model/SaveSingleTaskForCreatingDnsHostRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForCreatingDnsHostRequest;

SaveSingleTaskForCreatingDnsHostRequest::SaveSingleTaskForCreatingDnsHostRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForCreatingDnsHost") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForCreatingDnsHostRequest::~SaveSingleTaskForCreatingDnsHostRequest() {}

std::vector<std::string> SaveSingleTaskForCreatingDnsHostRequest::getIp() const {
  return ip_;
}

void SaveSingleTaskForCreatingDnsHostRequest::setIp(const std::vector<std::string> &ip) {
  ip_ = ip;
}

std::string SaveSingleTaskForCreatingDnsHostRequest::getInstanceId() const {
  return instanceId_;
}

void SaveSingleTaskForCreatingDnsHostRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveSingleTaskForCreatingDnsHostRequest::getDnsName() const {
  return dnsName_;
}

void SaveSingleTaskForCreatingDnsHostRequest::setDnsName(const std::string &dnsName) {
  dnsName_ = dnsName;
  setParameter(std::string("DnsName"), dnsName);
}

std::string SaveSingleTaskForCreatingDnsHostRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForCreatingDnsHostRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveSingleTaskForCreatingDnsHostRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForCreatingDnsHostRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

