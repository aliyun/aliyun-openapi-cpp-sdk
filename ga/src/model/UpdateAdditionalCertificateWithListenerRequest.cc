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

#include <alibabacloud/ga/model/UpdateAdditionalCertificateWithListenerRequest.h>

using AlibabaCloud::Ga::Model::UpdateAdditionalCertificateWithListenerRequest;

UpdateAdditionalCertificateWithListenerRequest::UpdateAdditionalCertificateWithListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateAdditionalCertificateWithListener") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAdditionalCertificateWithListenerRequest::~UpdateAdditionalCertificateWithListenerRequest() {}

bool UpdateAdditionalCertificateWithListenerRequest::getDryRun() const {
  return dryRun_;
}

void UpdateAdditionalCertificateWithListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateAdditionalCertificateWithListenerRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAdditionalCertificateWithListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateAdditionalCertificateWithListenerRequest::getCertificateId() const {
  return certificateId_;
}

void UpdateAdditionalCertificateWithListenerRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string UpdateAdditionalCertificateWithListenerRequest::getListenerId() const {
  return listenerId_;
}

void UpdateAdditionalCertificateWithListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string UpdateAdditionalCertificateWithListenerRequest::getRegionId() const {
  return regionId_;
}

void UpdateAdditionalCertificateWithListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateAdditionalCertificateWithListenerRequest::getDomain() const {
  return domain_;
}

void UpdateAdditionalCertificateWithListenerRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string UpdateAdditionalCertificateWithListenerRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void UpdateAdditionalCertificateWithListenerRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

