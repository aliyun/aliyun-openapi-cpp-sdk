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

#include <alibabacloud/dcdn/model/CreateDcdnSLSRealTimeLogDeliveryRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnSLSRealTimeLogDeliveryRequest;

CreateDcdnSLSRealTimeLogDeliveryRequest::CreateDcdnSLSRealTimeLogDeliveryRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnSLSRealTimeLogDelivery") {
  setMethod(HttpRequest::Method::Post);
}

CreateDcdnSLSRealTimeLogDeliveryRequest::~CreateDcdnSLSRealTimeLogDeliveryRequest() {}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getSLSLogStore() const {
  return sLSLogStore_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setSLSLogStore(const std::string &sLSLogStore) {
  sLSLogStore_ = sLSLogStore;
  setBodyParameter(std::string("SLSLogStore"), sLSLogStore);
}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getProjectName() const {
  return projectName_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getDomainName() const {
  return domainName_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getSamplingRate() const {
  return samplingRate_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setSamplingRate(const std::string &samplingRate) {
  samplingRate_ = samplingRate;
  setBodyParameter(std::string("SamplingRate"), samplingRate);
}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getDataCenter() const {
  return dataCenter_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setBodyParameter(std::string("DataCenter"), dataCenter);
}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getSLSProject() const {
  return sLSProject_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setSLSProject(const std::string &sLSProject) {
  sLSProject_ = sLSProject;
  setBodyParameter(std::string("SLSProject"), sLSProject);
}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getSLSRegion() const {
  return sLSRegion_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setSLSRegion(const std::string &sLSRegion) {
  sLSRegion_ = sLSRegion;
  setBodyParameter(std::string("SLSRegion"), sLSRegion);
}

std::string CreateDcdnSLSRealTimeLogDeliveryRequest::getBusinessType() const {
  return businessType_;
}

void CreateDcdnSLSRealTimeLogDeliveryRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setBodyParameter(std::string("BusinessType"), businessType);
}

