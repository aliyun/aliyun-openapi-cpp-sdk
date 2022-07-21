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

#include <alibabacloud/domain/model/QueryDnsHostRequest.h>

using AlibabaCloud::Domain::Model::QueryDnsHostRequest;

QueryDnsHostRequest::QueryDnsHostRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryDnsHost") {
  setMethod(HttpRequest::Method::Post);
}

QueryDnsHostRequest::~QueryDnsHostRequest() {}

std::string QueryDnsHostRequest::getInstanceId() const {
  return instanceId_;
}

void QueryDnsHostRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryDnsHostRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryDnsHostRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string QueryDnsHostRequest::getLang() const {
  return lang_;
}

void QueryDnsHostRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

