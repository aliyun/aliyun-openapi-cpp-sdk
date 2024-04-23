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

#include <alibabacloud/computenest/model/CreateServiceInstanceRequest.h>

using AlibabaCloud::ComputeNest::Model::CreateServiceInstanceRequest;

CreateServiceInstanceRequest::CreateServiceInstanceRequest()
    : RpcServiceRequest("computenest", "2021-06-01", "CreateServiceInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateServiceInstanceRequest::~CreateServiceInstanceRequest() {}

CreateServiceInstanceRequest::Commodity CreateServiceInstanceRequest::getCommodity() const {
  return commodity_;
}

void CreateServiceInstanceRequest::setCommodity(const CreateServiceInstanceRequest::Commodity &commodity) {
  commodity_ = commodity;
  setParameter(std::string("Commodity") + ".PayPeriod", std::to_string(commodity.payPeriod));
  setParameter(std::string("Commodity") + ".AutoPay", commodity.autoPay ? "true" : "false");
  setParameter(std::string("Commodity") + ".AutoRenew", commodity.autoRenew ? "true" : "false");
  setParameter(std::string("Commodity") + ".PayPeriodUnit", commodity.payPeriodUnit);
}

std::string CreateServiceInstanceRequest::getContactGroup() const {
  return contactGroup_;
}

void CreateServiceInstanceRequest::setContactGroup(const std::string &contactGroup) {
  contactGroup_ = contactGroup;
  setParameter(std::string("ContactGroup"), contactGroup);
}

std::string CreateServiceInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateServiceInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateServiceInstanceRequest::getSpecificationCode() const {
  return specificationCode_;
}

void CreateServiceInstanceRequest::setSpecificationCode(const std::string &specificationCode) {
  specificationCode_ = specificationCode;
  setParameter(std::string("SpecificationCode"), specificationCode);
}

std::string CreateServiceInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateServiceInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateServiceInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateServiceInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateServiceInstanceRequest::getEnableInstanceOps() const {
  return enableInstanceOps_;
}

void CreateServiceInstanceRequest::setEnableInstanceOps(bool enableInstanceOps) {
  enableInstanceOps_ = enableInstanceOps;
  setParameter(std::string("EnableInstanceOps"), enableInstanceOps ? "true" : "false");
}

std::string CreateServiceInstanceRequest::getTemplateName() const {
  return templateName_;
}

void CreateServiceInstanceRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::vector<CreateServiceInstanceRequest::Tag> CreateServiceInstanceRequest::getTag() const {
  return tag_;
}

void CreateServiceInstanceRequest::setTag(const std::vector<CreateServiceInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateServiceInstanceRequest::getDryRun() const {
  return dryRun_;
}

void CreateServiceInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool CreateServiceInstanceRequest::getEnableUserPrometheus() const {
  return enableUserPrometheus_;
}

void CreateServiceInstanceRequest::setEnableUserPrometheus(bool enableUserPrometheus) {
  enableUserPrometheus_ = enableUserPrometheus;
  setParameter(std::string("EnableUserPrometheus"), enableUserPrometheus ? "true" : "false");
}

std::string CreateServiceInstanceRequest::getSpecificationName() const {
  return specificationName_;
}

void CreateServiceInstanceRequest::setSpecificationName(const std::string &specificationName) {
  specificationName_ = specificationName;
  setParameter(std::string("SpecificationName"), specificationName);
}

std::string CreateServiceInstanceRequest::getTrialType() const {
  return trialType_;
}

void CreateServiceInstanceRequest::setTrialType(const std::string &trialType) {
  trialType_ = trialType;
  setParameter(std::string("TrialType"), trialType);
}

std::string CreateServiceInstanceRequest::getName() const {
  return name_;
}

void CreateServiceInstanceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateServiceInstanceRequest::getServiceVersion() const {
  return serviceVersion_;
}

void CreateServiceInstanceRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string CreateServiceInstanceRequest::getServiceId() const {
  return serviceId_;
}

void CreateServiceInstanceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

std::string CreateServiceInstanceRequest::getParameters() const {
  return parameters_;
}

void CreateServiceInstanceRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

CreateServiceInstanceRequest::OperationMetadata CreateServiceInstanceRequest::getOperationMetadata() const {
  return operationMetadata_;
}

void CreateServiceInstanceRequest::setOperationMetadata(const CreateServiceInstanceRequest::OperationMetadata &operationMetadata) {
  operationMetadata_ = operationMetadata;
  setParameter(std::string("OperationMetadata") + ".EndTime", operationMetadata.endTime);
  setParameter(std::string("OperationMetadata") + ".Resources", operationMetadata.resources);
  setParameter(std::string("OperationMetadata") + ".StartTime", operationMetadata.startTime);
  setParameter(std::string("OperationMetadata") + ".ExtraInfo", operationMetadata.extraInfo);
  setParameter(std::string("OperationMetadata") + ".ServiceInstanceId", operationMetadata.serviceInstanceId);
}

