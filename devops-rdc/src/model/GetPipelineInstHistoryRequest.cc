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

#include <alibabacloud/devops-rdc/model/GetPipelineInstHistoryRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetPipelineInstHistoryRequest;

GetPipelineInstHistoryRequest::GetPipelineInstHistoryRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "GetPipelineInstHistory") {
  setMethod(HttpRequest::Method::Post);
}

GetPipelineInstHistoryRequest::~GetPipelineInstHistoryRequest() {}

std::string GetPipelineInstHistoryRequest::getEndTime() const {
  return endTime_;
}

void GetPipelineInstHistoryRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string GetPipelineInstHistoryRequest::getStartTime() const {
  return startTime_;
}

void GetPipelineInstHistoryRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string GetPipelineInstHistoryRequest::getUserPk() const {
  return userPk_;
}

void GetPipelineInstHistoryRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string GetPipelineInstHistoryRequest::getOrgId() const {
  return orgId_;
}

void GetPipelineInstHistoryRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

long GetPipelineInstHistoryRequest::getPipelineId() const {
  return pipelineId_;
}

void GetPipelineInstHistoryRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setBodyParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

long GetPipelineInstHistoryRequest::getPageSize() const {
  return pageSize_;
}

void GetPipelineInstHistoryRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long GetPipelineInstHistoryRequest::getPageStart() const {
  return pageStart_;
}

void GetPipelineInstHistoryRequest::setPageStart(long pageStart) {
  pageStart_ = pageStart;
  setBodyParameter(std::string("PageStart"), std::to_string(pageStart));
}

