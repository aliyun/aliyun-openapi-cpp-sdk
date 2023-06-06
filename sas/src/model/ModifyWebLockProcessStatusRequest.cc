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

#include <alibabacloud/sas/model/ModifyWebLockProcessStatusRequest.h>

using AlibabaCloud::Sas::Model::ModifyWebLockProcessStatusRequest;

ModifyWebLockProcessStatusRequest::ModifyWebLockProcessStatusRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyWebLockProcessStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWebLockProcessStatusRequest::~ModifyWebLockProcessStatusRequest() {}

std::vector<std::string> ModifyWebLockProcessStatusRequest::getProcessPath() const {
  return processPath_;
}

void ModifyWebLockProcessStatusRequest::setProcessPath(const std::vector<std::string> &processPath) {
  processPath_ = processPath;
}

std::string ModifyWebLockProcessStatusRequest::getUuid() const {
  return uuid_;
}

void ModifyWebLockProcessStatusRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ModifyWebLockProcessStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyWebLockProcessStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyWebLockProcessStatusRequest::getDealAll() const {
  return dealAll_;
}

void ModifyWebLockProcessStatusRequest::setDealAll(int dealAll) {
  dealAll_ = dealAll;
  setParameter(std::string("DealAll"), std::to_string(dealAll));
}

std::string ModifyWebLockProcessStatusRequest::getOperateInfo() const {
  return operateInfo_;
}

void ModifyWebLockProcessStatusRequest::setOperateInfo(const std::string &operateInfo) {
  operateInfo_ = operateInfo;
  setParameter(std::string("OperateInfo"), operateInfo);
}

int ModifyWebLockProcessStatusRequest::getStatus() const {
  return status_;
}

void ModifyWebLockProcessStatusRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

