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

#include <alibabacloud/cas/model/CreateExternalCACertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateExternalCACertificateRequest;

CreateExternalCACertificateRequest::CreateExternalCACertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateExternalCACertificate") {
  setMethod(HttpRequest::Method::Post);
}

CreateExternalCACertificateRequest::~CreateExternalCACertificateRequest() {}

std::string CreateExternalCACertificateRequest::getCsr() const {
  return csr_;
}

void CreateExternalCACertificateRequest::setCsr(const std::string &csr) {
  csr_ = csr;
  setParameter(std::string("Csr"), csr);
}

std::string CreateExternalCACertificateRequest::getInstanceId() const {
  return instanceId_;
}

void CreateExternalCACertificateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateExternalCACertificateRequest::getAutoTesting() const {
  return autoTesting_;
}

void CreateExternalCACertificateRequest::setAutoTesting(const std::string &autoTesting) {
  autoTesting_ = autoTesting;
  setParameter(std::string("AutoTesting"), autoTesting);
}

std::string CreateExternalCACertificateRequest::getValidity() const {
  return validity_;
}

void CreateExternalCACertificateRequest::setValidity(const std::string &validity) {
  validity_ = validity;
  setParameter(std::string("Validity"), validity);
}

CreateExternalCACertificateRequest::ApiPassthrough CreateExternalCACertificateRequest::getApiPassthrough() const {
  return apiPassthrough_;
}

void CreateExternalCACertificateRequest::setApiPassthrough(const CreateExternalCACertificateRequest::ApiPassthrough &apiPassthrough) {
  apiPassthrough_ = apiPassthrough;
  setParameter(std::string("ApiPassthrough") + ".Subject.Country", apiPassthrough.subject.country);
  setParameter(std::string("ApiPassthrough") + ".Subject.State", apiPassthrough.subject.state);
  setParameter(std::string("ApiPassthrough") + ".Subject.Locality", apiPassthrough.subject.locality);
  setParameter(std::string("ApiPassthrough") + ".Subject.Organization", apiPassthrough.subject.organization);
  setParameter(std::string("ApiPassthrough") + ".Subject.OrganizationUnit", apiPassthrough.subject.organizationUnit);
  setParameter(std::string("ApiPassthrough") + ".Subject.CommonName", apiPassthrough.subject.commonName);
  setParameter(std::string("ApiPassthrough") + ".Extensions.PathLenConstraint", std::to_string(apiPassthrough.extensions.pathLenConstraint));
  for(int dep1 = 0; dep1 != apiPassthrough.extensions.extendedKeyUsages.size(); dep1++) {
    setParameter(std::string("ApiPassthrough") + ".Extensions.ExtendedKeyUsages." + std::to_string(dep1 + 1), apiPassthrough.extensions.extendedKeyUsages[dep1]);
  }
}

