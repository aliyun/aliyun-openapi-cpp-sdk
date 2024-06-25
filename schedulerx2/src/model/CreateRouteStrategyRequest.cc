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

#include <alibabacloud/schedulerx2/model/CreateRouteStrategyRequest.h>

using AlibabaCloud::Schedulerx2::Model::CreateRouteStrategyRequest;

CreateRouteStrategyRequest::CreateRouteStrategyRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "CreateRouteStrategy") {
  setMethod(HttpRequest::Method::Post);
}

CreateRouteStrategyRequest::~CreateRouteStrategyRequest() {}

int CreateRouteStrategyRequest::getType() const {
  return type_;
}

void CreateRouteStrategyRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

long CreateRouteStrategyRequest::getJobId() const {
  return jobId_;
}

void CreateRouteStrategyRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string CreateRouteStrategyRequest::getRegionId() const {
  return regionId_;
}

void CreateRouteStrategyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRouteStrategyRequest::getGroupId() const {
  return groupId_;
}

void CreateRouteStrategyRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CreateRouteStrategyRequest::getStrategyContent() const {
  return strategyContent_;
}

void CreateRouteStrategyRequest::setStrategyContent(const std::string &strategyContent) {
  strategyContent_ = strategyContent;
  setParameter(std::string("StrategyContent"), strategyContent);
}

std::string CreateRouteStrategyRequest::getName() const {
  return name_;
}

void CreateRouteStrategyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateRouteStrategyRequest::get_Namespace() const {
  return _namespace_;
}

void CreateRouteStrategyRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

int CreateRouteStrategyRequest::getStatus() const {
  return status_;
}

void CreateRouteStrategyRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

