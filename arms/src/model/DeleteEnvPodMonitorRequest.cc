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

#include <alibabacloud/arms/model/DeleteEnvPodMonitorRequest.h>

using AlibabaCloud::ARMS::Model::DeleteEnvPodMonitorRequest;

DeleteEnvPodMonitorRequest::DeleteEnvPodMonitorRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteEnvPodMonitor") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEnvPodMonitorRequest::~DeleteEnvPodMonitorRequest() {}

std::string DeleteEnvPodMonitorRequest::getPodMonitorName() const {
  return podMonitorName_;
}

void DeleteEnvPodMonitorRequest::setPodMonitorName(const std::string &podMonitorName) {
  podMonitorName_ = podMonitorName;
  setParameter(std::string("PodMonitorName"), podMonitorName);
}

std::string DeleteEnvPodMonitorRequest::getEnvironmentId() const {
  return environmentId_;
}

void DeleteEnvPodMonitorRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string DeleteEnvPodMonitorRequest::getRegionId() const {
  return regionId_;
}

void DeleteEnvPodMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteEnvPodMonitorRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteEnvPodMonitorRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

