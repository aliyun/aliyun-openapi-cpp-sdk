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

#include <alibabacloud/dcdn/model/UpdateDcdnSLSRealtimeLogDeliveryRequest.h>

using AlibabaCloud::Dcdn::Model::UpdateDcdnSLSRealtimeLogDeliveryRequest;

UpdateDcdnSLSRealtimeLogDeliveryRequest::UpdateDcdnSLSRealtimeLogDeliveryRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "UpdateDcdnSLSRealtimeLogDelivery") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDcdnSLSRealtimeLogDeliveryRequest::~UpdateDcdnSLSRealtimeLogDeliveryRequest() {}

std::string UpdateDcdnSLSRealtimeLogDeliveryRequest::getSLSLogStore() const {
  return sLSLogStore_;
}

void UpdateDcdnSLSRealtimeLogDeliveryRequest::setSLSLogStore(const std::string &sLSLogStore) {
  sLSLogStore_ = sLSLogStore;
  setBodyParameter(std::string("SLSLogStore"), sLSLogStore);
}

std::string UpdateDcdnSLSRealtimeLogDeliveryRequest::getProjectName() const {
  return projectName_;
}

void UpdateDcdnSLSRealtimeLogDeliveryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string UpdateDcdnSLSRealtimeLogDeliveryRequest::getDomainName() const {
  return domainName_;
}

void UpdateDcdnSLSRealtimeLogDeliveryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

std::string UpdateDcdnSLSRealtimeLogDeliveryRequest::getSamplingRate() const {
  return samplingRate_;
}

void UpdateDcdnSLSRealtimeLogDeliveryRequest::setSamplingRate(const std::string &samplingRate) {
  samplingRate_ = samplingRate;
  setBodyParameter(std::string("SamplingRate"), samplingRate);
}

std::string UpdateDcdnSLSRealtimeLogDeliveryRequest::getDataCenter() const {
  return dataCenter_;
}

void UpdateDcdnSLSRealtimeLogDeliveryRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setBodyParameter(std::string("DataCenter"), dataCenter);
}

std::string UpdateDcdnSLSRealtimeLogDeliveryRequest::getSLSProject() const {
  return sLSProject_;
}

void UpdateDcdnSLSRealtimeLogDeliveryRequest::setSLSProject(const std::string &sLSProject) {
  sLSProject_ = sLSProject;
  setBodyParameter(std::string("SLSProject"), sLSProject);
}

std::string UpdateDcdnSLSRealtimeLogDeliveryRequest::getSLSRegion() const {
  return sLSRegion_;
}

void UpdateDcdnSLSRealtimeLogDeliveryRequest::setSLSRegion(const std::string &sLSRegion) {
  sLSRegion_ = sLSRegion;
  setBodyParameter(std::string("SLSRegion"), sLSRegion);
}

