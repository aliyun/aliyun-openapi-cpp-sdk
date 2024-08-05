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

#include <alibabacloud/arms/model/DeleteEnvServiceMonitorRequest.h>

using AlibabaCloud::ARMS::Model::DeleteEnvServiceMonitorRequest;

DeleteEnvServiceMonitorRequest::DeleteEnvServiceMonitorRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteEnvServiceMonitor") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEnvServiceMonitorRequest::~DeleteEnvServiceMonitorRequest() {}

std::string DeleteEnvServiceMonitorRequest::getServiceMonitorName() const {
  return serviceMonitorName_;
}

void DeleteEnvServiceMonitorRequest::setServiceMonitorName(const std::string &serviceMonitorName) {
  serviceMonitorName_ = serviceMonitorName;
  setParameter(std::string("ServiceMonitorName"), serviceMonitorName);
}

std::string DeleteEnvServiceMonitorRequest::getEnvironmentId() const {
  return environmentId_;
}

void DeleteEnvServiceMonitorRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string DeleteEnvServiceMonitorRequest::getRegionId() const {
  return regionId_;
}

void DeleteEnvServiceMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteEnvServiceMonitorRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteEnvServiceMonitorRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

