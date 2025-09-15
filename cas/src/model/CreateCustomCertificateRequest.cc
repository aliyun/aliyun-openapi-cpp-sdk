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

#include <alibabacloud/cas/model/CreateCustomCertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateCustomCertificateRequest;

CreateCustomCertificateRequest::CreateCustomCertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateCustomCertificate") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomCertificateRequest::~CreateCustomCertificateRequest() {}

std::string CreateCustomCertificateRequest::getCsr() const {
  return csr_;
}

void CreateCustomCertificateRequest::setCsr(const std::string &csr) {
  csr_ = csr;
  setParameter(std::string("Csr"), csr);
}

long CreateCustomCertificateRequest::getEnableCrl() const {
  return enableCrl_;
}

void CreateCustomCertificateRequest::setEnableCrl(long enableCrl) {
  enableCrl_ = enableCrl;
  setParameter(std::string("EnableCrl"), std::to_string(enableCrl));
}

int CreateCustomCertificateRequest::getImmediately() const {
  return immediately_;
}

void CreateCustomCertificateRequest::setImmediately(int immediately) {
  immediately_ = immediately;
  setParameter(std::string("Immediately"), std::to_string(immediately));
}

std::string CreateCustomCertificateRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateCustomCertificateRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

std::string CreateCustomCertificateRequest::getValidity() const {
  return validity_;
}

void CreateCustomCertificateRequest::setValidity(const std::string &validity) {
  validity_ = validity;
  setParameter(std::string("Validity"), validity);
}

CreateCustomCertificateRequest::ApiPassthrough CreateCustomCertificateRequest::getApiPassthrough() const {
  return apiPassthrough_;
}

void CreateCustomCertificateRequest::setApiPassthrough(const CreateCustomCertificateRequest::ApiPassthrough &apiPassthrough) {
  apiPassthrough_ = apiPassthrough;
  setParameter(std::string("ApiPassthrough") + ".Subject.Country", apiPassthrough.subject.country);
  setParameter(std::string("ApiPassthrough") + ".Subject.State", apiPassthrough.subject.state);
  setParameter(std::string("ApiPassthrough") + ".Subject.Locality", apiPassthrough.subject.locality);
  setParameter(std::string("ApiPassthrough") + ".Subject.Organization", apiPassthrough.subject.organization);
  setParameter(std::string("ApiPassthrough") + ".Subject.OrganizationUnit", apiPassthrough.subject.organizationUnit);
  setParameter(std::string("ApiPassthrough") + ".Subject.CommonName", apiPassthrough.subject.commonName);
  for(int dep1 = 0; dep1 != apiPassthrough.subject.customAttributes.size(); dep1++) {
    setParameter(std::string("ApiPassthrough") + ".Subject.CustomAttributes." + std::to_string(dep1 + 1) + ".ObjectIdentifier", apiPassthrough.subject.customAttributes[dep1].objectIdentifier);
    setParameter(std::string("ApiPassthrough") + ".Subject.CustomAttributes." + std::to_string(dep1 + 1) + ".Value", apiPassthrough.subject.customAttributes[dep1].value);
  }
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.DigitalSignature", apiPassthrough.extensions.keyUsage.digitalSignature ? "true" : "false");
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.ContentCommitment", apiPassthrough.extensions.keyUsage.contentCommitment ? "true" : "false");
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.NonRepudiation", apiPassthrough.extensions.keyUsage.nonRepudiation ? "true" : "false");
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.KeyEncipherment", apiPassthrough.extensions.keyUsage.keyEncipherment ? "true" : "false");
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.DataEncipherment", apiPassthrough.extensions.keyUsage.dataEncipherment ? "true" : "false");
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.KeyAgreement", apiPassthrough.extensions.keyUsage.keyAgreement ? "true" : "false");
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.EncipherOnly", apiPassthrough.extensions.keyUsage.encipherOnly ? "true" : "false");
  setParameter(std::string("ApiPassthrough") + ".Extensions.KeyUsage.DecipherOnly", apiPassthrough.extensions.keyUsage.decipherOnly ? "true" : "false");
  for(int dep1 = 0; dep1 != apiPassthrough.extensions.extendedKeyUsages.size(); dep1++) {
    setParameter(std::string("ApiPassthrough") + ".Extensions.ExtendedKeyUsages." + std::to_string(dep1 + 1), apiPassthrough.extensions.extendedKeyUsages[dep1]);
  }
  for(int dep1 = 0; dep1 != apiPassthrough.extensions.subjectAlternativeNames.size(); dep1++) {
    setParameter(std::string("ApiPassthrough") + ".Extensions.SubjectAlternativeNames." + std::to_string(dep1 + 1) + ".Type", apiPassthrough.extensions.subjectAlternativeNames[dep1].type);
    setParameter(std::string("ApiPassthrough") + ".Extensions.SubjectAlternativeNames." + std::to_string(dep1 + 1) + ".Value", apiPassthrough.extensions.subjectAlternativeNames[dep1].value);
  }
  for(int dep1 = 0; dep1 != apiPassthrough.extensions.criticals.size(); dep1++) {
    setParameter(std::string("ApiPassthrough") + ".Extensions.Criticals." + std::to_string(dep1 + 1), apiPassthrough.extensions.criticals[dep1]);
  }
  setParameter(std::string("ApiPassthrough") + ".SerialNumber", apiPassthrough.serialNumber);
}

