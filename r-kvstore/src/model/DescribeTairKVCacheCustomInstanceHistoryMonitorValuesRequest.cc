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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest;

DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeTairKVCacheCustomInstanceHistoryMonitorValues") {
  setMethod(HttpRequest::Method::Get);
}

DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::~DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest() {}

long DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getExpress() const {
  return express_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setExpress(const std::string &express) {
  express_ = express;
  setParameter(std::string("Express"), express);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getStartTime() const {
  return startTime_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getMetricName() const {
  return metricName_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getPeriod() const {
  return period_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getLength() const {
  return length_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setLength(const std::string &length) {
  length_ = length;
  setParameter(std::string("Length"), length);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getEndTime() const {
  return endTime_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::getCategory() const {
  return category_;
}

void DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

