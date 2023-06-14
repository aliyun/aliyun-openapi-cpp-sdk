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

#include <alibabacloud/ga/model/DissociateAdditionalCertificatesFromListenerRequest.h>

using AlibabaCloud::Ga::Model::DissociateAdditionalCertificatesFromListenerRequest;

DissociateAdditionalCertificatesFromListenerRequest::DissociateAdditionalCertificatesFromListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DissociateAdditionalCertificatesFromListener") {
  setMethod(HttpRequest::Method::Post);
}

DissociateAdditionalCertificatesFromListenerRequest::~DissociateAdditionalCertificatesFromListenerRequest() {}

std::string DissociateAdditionalCertificatesFromListenerRequest::getClientToken() const {
  return clientToken_;
}

void DissociateAdditionalCertificatesFromListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DissociateAdditionalCertificatesFromListenerRequest::getDomains() const {
  return domains_;
}

void DissociateAdditionalCertificatesFromListenerRequest::setDomains(const std::vector<std::string> &domains) {
  domains_ = domains;
}

std::string DissociateAdditionalCertificatesFromListenerRequest::getListenerId() const {
  return listenerId_;
}

void DissociateAdditionalCertificatesFromListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string DissociateAdditionalCertificatesFromListenerRequest::getRegionId() const {
  return regionId_;
}

void DissociateAdditionalCertificatesFromListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DissociateAdditionalCertificatesFromListenerRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void DissociateAdditionalCertificatesFromListenerRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

