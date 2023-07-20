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

#include <alibabacloud/sas/model/HandleSimilarSecurityEventsRequest.h>

using AlibabaCloud::Sas::Model::HandleSimilarSecurityEventsRequest;

HandleSimilarSecurityEventsRequest::HandleSimilarSecurityEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "HandleSimilarSecurityEvents") {
  setMethod(HttpRequest::Method::Post);
}

HandleSimilarSecurityEventsRequest::~HandleSimilarSecurityEventsRequest() {}

std::string HandleSimilarSecurityEventsRequest::getMarkMissParam() const {
  return markMissParam_;
}

void HandleSimilarSecurityEventsRequest::setMarkMissParam(const std::string &markMissParam) {
  markMissParam_ = markMissParam;
  setParameter(std::string("MarkMissParam"), markMissParam);
}

long HandleSimilarSecurityEventsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void HandleSimilarSecurityEventsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string HandleSimilarSecurityEventsRequest::getRemark() const {
  return remark_;
}

void HandleSimilarSecurityEventsRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string HandleSimilarSecurityEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void HandleSimilarSecurityEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string HandleSimilarSecurityEventsRequest::getOperationCode() const {
  return operationCode_;
}

void HandleSimilarSecurityEventsRequest::setOperationCode(const std::string &operationCode) {
  operationCode_ = operationCode;
  setParameter(std::string("OperationCode"), operationCode);
}

long HandleSimilarSecurityEventsRequest::getTaskId() const {
  return taskId_;
}

void HandleSimilarSecurityEventsRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string HandleSimilarSecurityEventsRequest::getOperationParams() const {
  return operationParams_;
}

void HandleSimilarSecurityEventsRequest::setOperationParams(const std::string &operationParams) {
  operationParams_ = operationParams;
  setParameter(std::string("OperationParams"), operationParams);
}

