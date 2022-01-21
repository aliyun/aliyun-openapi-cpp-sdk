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

#include <alibabacloud/cms/model/PutLogMonitorRequest.h>

using AlibabaCloud::Cms::Model::PutLogMonitorRequest;

PutLogMonitorRequest::PutLogMonitorRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutLogMonitor") {
  setMethod(HttpRequest::Method::Post);
}

PutLogMonitorRequest::~PutLogMonitorRequest() {}

std::string PutLogMonitorRequest::getSlsLogstore() const {
  return slsLogstore_;
}

void PutLogMonitorRequest::setSlsLogstore(const std::string &slsLogstore) {
  slsLogstore_ = slsLogstore;
  setParameter(std::string("SlsLogstore"), slsLogstore);
}

std::string PutLogMonitorRequest::getSlsProject() const {
  return slsProject_;
}

void PutLogMonitorRequest::setSlsProject(const std::string &slsProject) {
  slsProject_ = slsProject;
  setParameter(std::string("SlsProject"), slsProject);
}

std::vector<PutLogMonitorRequest::ValueFilter> PutLogMonitorRequest::getValueFilter() const {
  return valueFilter_;
}

void PutLogMonitorRequest::setValueFilter(const std::vector<PutLogMonitorRequest::ValueFilter> &valueFilter) {
  valueFilter_ = valueFilter;
  for(int dep1 = 0; dep1 != valueFilter.size(); dep1++) {
  auto valueFilterObj = valueFilter.at(dep1);
  std::string valueFilterObjStr = std::string("ValueFilter") + "." + std::to_string(dep1 + 1);
    setParameter(valueFilterObjStr + ".Value", valueFilterObj.value);
    setParameter(valueFilterObjStr + ".Key", valueFilterObj.key);
    setParameter(valueFilterObjStr + ".Operator", valueFilterObj._operator);
  }
}

std::string PutLogMonitorRequest::getMetricExpress() const {
  return metricExpress_;
}

void PutLogMonitorRequest::setMetricExpress(const std::string &metricExpress) {
  metricExpress_ = metricExpress;
  setParameter(std::string("MetricExpress"), metricExpress);
}

std::string PutLogMonitorRequest::getSlsRegionId() const {
  return slsRegionId_;
}

void PutLogMonitorRequest::setSlsRegionId(const std::string &slsRegionId) {
  slsRegionId_ = slsRegionId;
  setParameter(std::string("SlsRegionId"), slsRegionId);
}

std::string PutLogMonitorRequest::getMetricName() const {
  return metricName_;
}

void PutLogMonitorRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string PutLogMonitorRequest::getGroupId() const {
  return groupId_;
}

void PutLogMonitorRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string PutLogMonitorRequest::getTumblingwindows() const {
  return tumblingwindows_;
}

void PutLogMonitorRequest::setTumblingwindows(const std::string &tumblingwindows) {
  tumblingwindows_ = tumblingwindows;
  setParameter(std::string("Tumblingwindows"), tumblingwindows);
}

std::string PutLogMonitorRequest::getGroupBy() const {
  return groupBy_;
}

void PutLogMonitorRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::string PutLogMonitorRequest::getValueFilterRelation() const {
  return valueFilterRelation_;
}

void PutLogMonitorRequest::setValueFilterRelation(const std::string &valueFilterRelation) {
  valueFilterRelation_ = valueFilterRelation;
  setParameter(std::string("ValueFilterRelation"), valueFilterRelation);
}

std::string PutLogMonitorRequest::getUnit() const {
  return unit_;
}

void PutLogMonitorRequest::setUnit(const std::string &unit) {
  unit_ = unit;
  setParameter(std::string("Unit"), unit);
}

std::vector<PutLogMonitorRequest::Groupbys> PutLogMonitorRequest::getGroupbys() const {
  return groupbys_;
}

void PutLogMonitorRequest::setGroupbys(const std::vector<PutLogMonitorRequest::Groupbys> &groupbys) {
  groupbys_ = groupbys;
  for(int dep1 = 0; dep1 != groupbys.size(); dep1++) {
  auto groupbysObj = groupbys.at(dep1);
  std::string groupbysObjStr = std::string("Groupbys") + "." + std::to_string(dep1 + 1);
    setParameter(groupbysObjStr + ".FieldName", groupbysObj.fieldName);
    setParameter(groupbysObjStr + ".Alias", groupbysObj.alias);
  }
}

std::string PutLogMonitorRequest::getLogId() const {
  return logId_;
}

void PutLogMonitorRequest::setLogId(const std::string &logId) {
  logId_ = logId;
  setParameter(std::string("LogId"), logId);
}

std::vector<PutLogMonitorRequest::Aggregates> PutLogMonitorRequest::getAggregates() const {
  return aggregates_;
}

void PutLogMonitorRequest::setAggregates(const std::vector<PutLogMonitorRequest::Aggregates> &aggregates) {
  aggregates_ = aggregates;
  for(int dep1 = 0; dep1 != aggregates.size(); dep1++) {
  auto aggregatesObj = aggregates.at(dep1);
  std::string aggregatesObjStr = std::string("Aggregates") + "." + std::to_string(dep1 + 1);
    setParameter(aggregatesObjStr + ".FieldName", aggregatesObj.fieldName);
    setParameter(aggregatesObjStr + ".Function", aggregatesObj.function);
    setParameter(aggregatesObjStr + ".Alias", aggregatesObj.alias);
  }
}

