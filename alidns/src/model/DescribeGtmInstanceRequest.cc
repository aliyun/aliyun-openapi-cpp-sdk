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

#include <alibabacloud/alidns/model/DescribeGtmInstanceRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmInstanceRequest;

DescribeGtmInstanceRequest::DescribeGtmInstanceRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmInstance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGtmInstanceRequest::~DescribeGtmInstanceRequest() {}

std::string DescribeGtmInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeGtmInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeGtmInstanceRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeGtmInstanceRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeGtmInstanceRequest::getLang() const {
  return lang_;
}

void DescribeGtmInstanceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool DescribeGtmInstanceRequest::getNeedDetailAttributes() const {
  return needDetailAttributes_;
}

void DescribeGtmInstanceRequest::setNeedDetailAttributes(bool needDetailAttributes) {
  needDetailAttributes_ = needDetailAttributes;
  setParameter(std::string("NeedDetailAttributes"), needDetailAttributes ? "true" : "false");
}

