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

#include <alibabacloud/domain/model/SaveBatchDomainRemarkRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchDomainRemarkRequest;

SaveBatchDomainRemarkRequest::SaveBatchDomainRemarkRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveBatchDomainRemark") {
  setMethod(HttpRequest::Method::Post);
}

SaveBatchDomainRemarkRequest::~SaveBatchDomainRemarkRequest() {}

std::string SaveBatchDomainRemarkRequest::getRemark() const {
  return remark_;
}

void SaveBatchDomainRemarkRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string SaveBatchDomainRemarkRequest::getInstanceIds() const {
  return instanceIds_;
}

void SaveBatchDomainRemarkRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string SaveBatchDomainRemarkRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveBatchDomainRemarkRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveBatchDomainRemarkRequest::getLang() const {
  return lang_;
}

void SaveBatchDomainRemarkRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

