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

#include <alibabacloud/cms/model/DeleteCustomMetricRequest.h>

using AlibabaCloud::Cms::Model::DeleteCustomMetricRequest;

DeleteCustomMetricRequest::DeleteCustomMetricRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DeleteCustomMetric") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomMetricRequest::~DeleteCustomMetricRequest() {}

std::string DeleteCustomMetricRequest::getGroupId() const {
  return groupId_;
}

void DeleteCustomMetricRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DeleteCustomMetricRequest::getUUID() const {
  return uUID_;
}

void DeleteCustomMetricRequest::setUUID(const std::string &uUID) {
  uUID_ = uUID;
  setParameter(std::string("UUID"), uUID);
}

std::string DeleteCustomMetricRequest::getMetricName() const {
  return metricName_;
}

void DeleteCustomMetricRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DeleteCustomMetricRequest::getMd5() const {
  return md5_;
}

void DeleteCustomMetricRequest::setMd5(const std::string &md5) {
  md5_ = md5;
  setParameter(std::string("Md5"), md5);
}

