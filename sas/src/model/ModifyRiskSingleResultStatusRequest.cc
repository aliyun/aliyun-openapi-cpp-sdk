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

#include <alibabacloud/sas/model/ModifyRiskSingleResultStatusRequest.h>

using AlibabaCloud::Sas::Model::ModifyRiskSingleResultStatusRequest;

ModifyRiskSingleResultStatusRequest::ModifyRiskSingleResultStatusRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyRiskSingleResultStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRiskSingleResultStatusRequest::~ModifyRiskSingleResultStatusRequest() {}

long ModifyRiskSingleResultStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyRiskSingleResultStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyRiskSingleResultStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyRiskSingleResultStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyRiskSingleResultStatusRequest::getLang() const {
  return lang_;
}

void ModifyRiskSingleResultStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long ModifyRiskSingleResultStatusRequest::getTaskId() const {
  return taskId_;
}

void ModifyRiskSingleResultStatusRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::vector<std::string> ModifyRiskSingleResultStatusRequest::getIds() const {
  return ids_;
}

void ModifyRiskSingleResultStatusRequest::setIds(const std::vector<std::string> &ids) {
  ids_ = ids;
}

std::string ModifyRiskSingleResultStatusRequest::getStatus() const {
  return status_;
}

void ModifyRiskSingleResultStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

