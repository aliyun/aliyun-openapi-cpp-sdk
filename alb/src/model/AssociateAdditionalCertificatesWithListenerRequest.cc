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

#include <alibabacloud/alb/model/AssociateAdditionalCertificatesWithListenerRequest.h>

using AlibabaCloud::Alb::Model::AssociateAdditionalCertificatesWithListenerRequest;

AssociateAdditionalCertificatesWithListenerRequest::AssociateAdditionalCertificatesWithListenerRequest()
    : RpcServiceRequest("alb", "2020-06-16", "AssociateAdditionalCertificatesWithListener") {
  setMethod(HttpRequest::Method::Post);
}

AssociateAdditionalCertificatesWithListenerRequest::~AssociateAdditionalCertificatesWithListenerRequest() {}

std::string AssociateAdditionalCertificatesWithListenerRequest::getClientToken() const {
  return clientToken_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateAdditionalCertificatesWithListenerRequest::getListenerId() const {
  return listenerId_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

bool AssociateAdditionalCertificatesWithListenerRequest::getDryRun() const {
  return dryRun_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> AssociateAdditionalCertificatesWithListenerRequest::getCertificates() const {
  return certificates_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setCertificates(const std::vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> &certificates) {
  certificates_ = certificates;
  for(int dep1 = 0; dep1 != certificates.size(); dep1++) {
    setParameter(std::string("Certificates") + "." + std::to_string(dep1 + 1) + ".CertificateId", certificates[dep1].certificateId);
  }
}

