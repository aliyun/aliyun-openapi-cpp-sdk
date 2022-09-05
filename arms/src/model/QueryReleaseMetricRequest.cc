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

#include <alibabacloud/arms/model/QueryReleaseMetricRequest.h>

using AlibabaCloud::ARMS::Model::QueryReleaseMetricRequest;

QueryReleaseMetricRequest::QueryReleaseMetricRequest()
    : RpcServiceRequest("arms", "2019-08-08", "QueryReleaseMetric") {
  setMethod(HttpRequest::Method::Post);
}

QueryReleaseMetricRequest::~QueryReleaseMetricRequest() {}

std::string QueryReleaseMetricRequest::getChangeOrderId() const {
  return changeOrderId_;
}

void QueryReleaseMetricRequest::setChangeOrderId(const std::string &changeOrderId) {
  changeOrderId_ = changeOrderId;
  setParameter(std::string("ChangeOrderId"), changeOrderId);
}

std::string QueryReleaseMetricRequest::getMetricType() const {
  return metricType_;
}

void QueryReleaseMetricRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

long QueryReleaseMetricRequest::getCreateTime() const {
  return createTime_;
}

void QueryReleaseMetricRequest::setCreateTime(long createTime) {
  createTime_ = createTime;
  setParameter(std::string("CreateTime"), std::to_string(createTime));
}

std::string QueryReleaseMetricRequest::getPid() const {
  return pid_;
}

void QueryReleaseMetricRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string QueryReleaseMetricRequest::getProxyUserId() const {
  return proxyUserId_;
}

void QueryReleaseMetricRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

long QueryReleaseMetricRequest::getReleaseEndTime() const {
  return releaseEndTime_;
}

void QueryReleaseMetricRequest::setReleaseEndTime(long releaseEndTime) {
  releaseEndTime_ = releaseEndTime;
  setParameter(std::string("ReleaseEndTime"), std::to_string(releaseEndTime));
}

std::string QueryReleaseMetricRequest::getService() const {
  return service_;
}

void QueryReleaseMetricRequest::setService(const std::string &service) {
  service_ = service;
  setParameter(std::string("Service"), service);
}

long QueryReleaseMetricRequest::getReleaseStartTime() const {
  return releaseStartTime_;
}

void QueryReleaseMetricRequest::setReleaseStartTime(long releaseStartTime) {
  releaseStartTime_ = releaseStartTime;
  setParameter(std::string("ReleaseStartTime"), std::to_string(releaseStartTime));
}

