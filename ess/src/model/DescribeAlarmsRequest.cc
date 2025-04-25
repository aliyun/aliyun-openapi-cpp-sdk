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

#include <alibabacloud/ess/model/DescribeAlarmsRequest.h>

using AlibabaCloud::Ess::Model::DescribeAlarmsRequest;

DescribeAlarmsRequest::DescribeAlarmsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeAlarms") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlarmsRequest::~DescribeAlarmsRequest() {}

std::string DescribeAlarmsRequest::getMetricType() const {
  return metricType_;
}

void DescribeAlarmsRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

std::string DescribeAlarmsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeAlarmsRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

int DescribeAlarmsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAlarmsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAlarmsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAlarmsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAlarmsRequest::getRegionId() const {
  return regionId_;
}

void DescribeAlarmsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAlarmsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlarmsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAlarmsRequest::getState() const {
  return state_;
}

void DescribeAlarmsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string DescribeAlarmsRequest::getMetricName() const {
  return metricName_;
}

void DescribeAlarmsRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeAlarmsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAlarmsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeAlarmsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAlarmsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAlarmsRequest::getAlarmTaskId() const {
  return alarmTaskId_;
}

void DescribeAlarmsRequest::setAlarmTaskId(const std::string &alarmTaskId) {
  alarmTaskId_ = alarmTaskId;
  setParameter(std::string("AlarmTaskId"), alarmTaskId);
}

bool DescribeAlarmsRequest::getIsEnable() const {
  return isEnable_;
}

void DescribeAlarmsRequest::setIsEnable(bool isEnable) {
  isEnable_ = isEnable;
  setParameter(std::string("IsEnable"), isEnable ? "true" : "false");
}

