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

#include <alibabacloud/schedulerx2/model/DeleteRouteStrategyRequest.h>

using AlibabaCloud::Schedulerx2::Model::DeleteRouteStrategyRequest;

DeleteRouteStrategyRequest::DeleteRouteStrategyRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "DeleteRouteStrategy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRouteStrategyRequest::~DeleteRouteStrategyRequest() {}

std::string DeleteRouteStrategyRequest::getGroupId() const {
  return groupId_;
}

void DeleteRouteStrategyRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long DeleteRouteStrategyRequest::getJobId() const {
  return jobId_;
}

void DeleteRouteStrategyRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string DeleteRouteStrategyRequest::getRegionId() const {
  return regionId_;
}

void DeleteRouteStrategyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRouteStrategyRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteRouteStrategyRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

long DeleteRouteStrategyRequest::getStrategyId() const {
  return strategyId_;
}

void DeleteRouteStrategyRequest::setStrategyId(long strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), std::to_string(strategyId));
}

