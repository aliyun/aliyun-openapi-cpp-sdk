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

#include <alibabacloud/computenestsupplier/model/GetServiceEstimateCostRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::GetServiceEstimateCostRequest;

GetServiceEstimateCostRequest::GetServiceEstimateCostRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "GetServiceEstimateCost") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceEstimateCostRequest::~GetServiceEstimateCostRequest() {}

std::string GetServiceEstimateCostRequest::getClientToken() const {
  return clientToken_;
}

void GetServiceEstimateCostRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetServiceEstimateCostRequest::getRegionId() const {
  return regionId_;
}

void GetServiceEstimateCostRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetServiceEstimateCostRequest::getServiceVersion() const {
  return serviceVersion_;
}

void GetServiceEstimateCostRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string GetServiceEstimateCostRequest::getTemplateName() const {
  return templateName_;
}

void GetServiceEstimateCostRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string GetServiceEstimateCostRequest::getServiceId() const {
  return serviceId_;
}

void GetServiceEstimateCostRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

std::string GetServiceEstimateCostRequest::getParameters() const {
  return parameters_;
}

void GetServiceEstimateCostRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

std::string GetServiceEstimateCostRequest::getServiceInstanceId() const {
  return serviceInstanceId_;
}

void GetServiceEstimateCostRequest::setServiceInstanceId(const std::string &serviceInstanceId) {
  serviceInstanceId_ = serviceInstanceId;
  setParameter(std::string("ServiceInstanceId"), serviceInstanceId);
}

