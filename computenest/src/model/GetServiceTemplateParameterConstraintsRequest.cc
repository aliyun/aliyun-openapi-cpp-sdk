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

#include <alibabacloud/computenest/model/GetServiceTemplateParameterConstraintsRequest.h>

using AlibabaCloud::ComputeNest::Model::GetServiceTemplateParameterConstraintsRequest;

GetServiceTemplateParameterConstraintsRequest::GetServiceTemplateParameterConstraintsRequest()
    : RpcServiceRequest("computenest", "2021-06-01", "GetServiceTemplateParameterConstraints") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceTemplateParameterConstraintsRequest::~GetServiceTemplateParameterConstraintsRequest() {}

std::string GetServiceTemplateParameterConstraintsRequest::getClientToken() const {
  return clientToken_;
}

void GetServiceTemplateParameterConstraintsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool GetServiceTemplateParameterConstraintsRequest::getEnablePrivateVpcConnection() const {
  return enablePrivateVpcConnection_;
}

void GetServiceTemplateParameterConstraintsRequest::setEnablePrivateVpcConnection(bool enablePrivateVpcConnection) {
  enablePrivateVpcConnection_ = enablePrivateVpcConnection;
  setParameter(std::string("EnablePrivateVpcConnection"), enablePrivateVpcConnection ? "true" : "false");
}

std::string GetServiceTemplateParameterConstraintsRequest::getRegionId() const {
  return regionId_;
}

void GetServiceTemplateParameterConstraintsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetServiceTemplateParameterConstraintsRequest::getTemplateName() const {
  return templateName_;
}

void GetServiceTemplateParameterConstraintsRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string GetServiceTemplateParameterConstraintsRequest::getServiceInstanceId() const {
  return serviceInstanceId_;
}

void GetServiceTemplateParameterConstraintsRequest::setServiceInstanceId(const std::string &serviceInstanceId) {
  serviceInstanceId_ = serviceInstanceId;
  setParameter(std::string("ServiceInstanceId"), serviceInstanceId);
}

std::string GetServiceTemplateParameterConstraintsRequest::getDeployRegionId() const {
  return deployRegionId_;
}

void GetServiceTemplateParameterConstraintsRequest::setDeployRegionId(const std::string &deployRegionId) {
  deployRegionId_ = deployRegionId;
  setParameter(std::string("DeployRegionId"), deployRegionId);
}

std::string GetServiceTemplateParameterConstraintsRequest::getSpecificationName() const {
  return specificationName_;
}

void GetServiceTemplateParameterConstraintsRequest::setSpecificationName(const std::string &specificationName) {
  specificationName_ = specificationName;
  setParameter(std::string("SpecificationName"), specificationName);
}

std::string GetServiceTemplateParameterConstraintsRequest::getTrialType() const {
  return trialType_;
}

void GetServiceTemplateParameterConstraintsRequest::setTrialType(const std::string &trialType) {
  trialType_ = trialType;
  setParameter(std::string("TrialType"), trialType);
}

std::string GetServiceTemplateParameterConstraintsRequest::getServiceVersion() const {
  return serviceVersion_;
}

void GetServiceTemplateParameterConstraintsRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string GetServiceTemplateParameterConstraintsRequest::getServiceId() const {
  return serviceId_;
}

void GetServiceTemplateParameterConstraintsRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

std::vector<GetServiceTemplateParameterConstraintsRequest::Parameters> GetServiceTemplateParameterConstraintsRequest::getParameters() const {
  return parameters_;
}

void GetServiceTemplateParameterConstraintsRequest::setParameters(const std::vector<GetServiceTemplateParameterConstraintsRequest::Parameters> &parameters) {
  parameters_ = parameters;
  for(int dep1 = 0; dep1 != parameters.size(); dep1++) {
  auto parametersObj = parameters.at(dep1);
  std::string parametersObjStr = std::string("Parameters") + "." + std::to_string(dep1 + 1);
    setParameter(parametersObjStr + ".ParameterValue", parametersObj.parameterValue);
    setParameter(parametersObjStr + ".ParameterKey", parametersObj.parameterKey);
  }
}

