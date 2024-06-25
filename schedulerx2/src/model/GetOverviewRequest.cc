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

#include <alibabacloud/schedulerx2/model/GetOverviewRequest.h>

using AlibabaCloud::Schedulerx2::Model::GetOverviewRequest;

GetOverviewRequest::GetOverviewRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "GetOverview") {
  setMethod(HttpRequest::Method::Post);
}

GetOverviewRequest::~GetOverviewRequest() {}

int GetOverviewRequest::getMetricType() const {
  return metricType_;
}

void GetOverviewRequest::setMetricType(int metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), std::to_string(metricType));
}

std::string GetOverviewRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void GetOverviewRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

long GetOverviewRequest::getStartTime() const {
  return startTime_;
}

void GetOverviewRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetOverviewRequest::getRegionId() const {
  return regionId_;
}

void GetOverviewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetOverviewRequest::getGroupId() const {
  return groupId_;
}

void GetOverviewRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long GetOverviewRequest::getEndTime() const {
  return endTime_;
}

void GetOverviewRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetOverviewRequest::getOperate() const {
  return operate_;
}

void GetOverviewRequest::setOperate(const std::string &operate) {
  operate_ = operate;
  setParameter(std::string("Operate"), operate);
}

std::string GetOverviewRequest::get_Namespace() const {
  return _namespace_;
}

void GetOverviewRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

