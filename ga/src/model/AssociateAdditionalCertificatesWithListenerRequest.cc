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

#include <alibabacloud/ga/model/AssociateAdditionalCertificatesWithListenerRequest.h>

using AlibabaCloud::Ga::Model::AssociateAdditionalCertificatesWithListenerRequest;

AssociateAdditionalCertificatesWithListenerRequest::AssociateAdditionalCertificatesWithListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "AssociateAdditionalCertificatesWithListener") {
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

std::vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> AssociateAdditionalCertificatesWithListenerRequest::getCertificates() const {
  return certificates_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setCertificates(const std::vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> &certificates) {
  certificates_ = certificates;
  for(int dep1 = 0; dep1 != certificates.size(); dep1++) {
  auto certificatesObj = certificates.at(dep1);
  std::string certificatesObjStr = std::string("Certificates") + "." + std::to_string(dep1 + 1);
    setParameter(certificatesObjStr + ".Id", certificatesObj.id);
    setParameter(certificatesObjStr + ".Domain", certificatesObj.domain);
  }
}

std::string AssociateAdditionalCertificatesWithListenerRequest::getRegionId() const {
  return regionId_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateAdditionalCertificatesWithListenerRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

