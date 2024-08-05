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

#include <alibabacloud/arms/model/DescribeEnvPodMonitorRequest.h>

using AlibabaCloud::ARMS::Model::DescribeEnvPodMonitorRequest;

DescribeEnvPodMonitorRequest::DescribeEnvPodMonitorRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DescribeEnvPodMonitor") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnvPodMonitorRequest::~DescribeEnvPodMonitorRequest() {}

std::string DescribeEnvPodMonitorRequest::getPodMonitorName() const {
  return podMonitorName_;
}

void DescribeEnvPodMonitorRequest::setPodMonitorName(const std::string &podMonitorName) {
  podMonitorName_ = podMonitorName;
  setParameter(std::string("PodMonitorName"), podMonitorName);
}

std::string DescribeEnvPodMonitorRequest::getEnvironmentId() const {
  return environmentId_;
}

void DescribeEnvPodMonitorRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string DescribeEnvPodMonitorRequest::getRegionId() const {
  return regionId_;
}

void DescribeEnvPodMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeEnvPodMonitorRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeEnvPodMonitorRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

