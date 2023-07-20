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

#include <alibabacloud/sas/model/DescribeAlarmEventStackInfoRequest.h>

using AlibabaCloud::Sas::Model::DescribeAlarmEventStackInfoRequest;

DescribeAlarmEventStackInfoRequest::DescribeAlarmEventStackInfoRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAlarmEventStackInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlarmEventStackInfoRequest::~DescribeAlarmEventStackInfoRequest() {}

std::string DescribeAlarmEventStackInfoRequest::getUuid() const {
  return uuid_;
}

void DescribeAlarmEventStackInfoRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeAlarmEventStackInfoRequest::getEventName() const {
  return eventName_;
}

void DescribeAlarmEventStackInfoRequest::setEventName(const std::string &eventName) {
  eventName_ = eventName;
  setParameter(std::string("EventName"), eventName);
}

std::string DescribeAlarmEventStackInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAlarmEventStackInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeAlarmEventStackInfoRequest::getLang() const {
  return lang_;
}

void DescribeAlarmEventStackInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeAlarmEventStackInfoRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeAlarmEventStackInfoRequest::setResourceDirectoryAccountId(long resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), std::to_string(resourceDirectoryAccountId));
}

std::string DescribeAlarmEventStackInfoRequest::getUniqueInfo() const {
  return uniqueInfo_;
}

void DescribeAlarmEventStackInfoRequest::setUniqueInfo(const std::string &uniqueInfo) {
  uniqueInfo_ = uniqueInfo;
  setParameter(std::string("UniqueInfo"), uniqueInfo);
}

