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

#include <alibabacloud/schedulerx2/model/BatchDeleteRouteStrategyRequest.h>

using AlibabaCloud::Schedulerx2::Model::BatchDeleteRouteStrategyRequest;

BatchDeleteRouteStrategyRequest::BatchDeleteRouteStrategyRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "BatchDeleteRouteStrategy") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteRouteStrategyRequest::~BatchDeleteRouteStrategyRequest() {}

std::string BatchDeleteRouteStrategyRequest::getGroupId() const {
  return groupId_;
}

void BatchDeleteRouteStrategyRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<long> BatchDeleteRouteStrategyRequest::getJobIdList() const {
  return jobIdList_;
}

void BatchDeleteRouteStrategyRequest::setJobIdList(const std::vector<long> &jobIdList) {
  jobIdList_ = jobIdList;
}

std::string BatchDeleteRouteStrategyRequest::getRegionId() const {
  return regionId_;
}

void BatchDeleteRouteStrategyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string BatchDeleteRouteStrategyRequest::get_Namespace() const {
  return _namespace_;
}

void BatchDeleteRouteStrategyRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::vector<long> BatchDeleteRouteStrategyRequest::getStrategyIdList() const {
  return strategyIdList_;
}

void BatchDeleteRouteStrategyRequest::setStrategyIdList(const std::vector<long> &strategyIdList) {
  strategyIdList_ = strategyIdList;
}

