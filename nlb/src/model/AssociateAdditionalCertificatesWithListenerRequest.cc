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

#include <alibabacloud/nlb/model/AssociateAdditionalCertificatesWithListenerRequest.h>

using AlibabaCloud::Nlb::Model::AssociateAdditionalCertificatesWithListenerRequest;

AssociateAdditionalCertificatesWithListenerRequest::AssociateAdditionalCertificatesWithListenerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "AssociateAdditionalCertificatesWithListener") {
  setMethod(HttpRequest::Method::Post);
}

AssociateAdditionalCertificatesWithListenerRequest::~AssociateAdditionalCertificatesWithListenerRequest() {}

std::string AssociateAdditionalCertificatesWithListenerRequest::getClientToken() const {
  return clientToken_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateAdditionalCertificatesWithListenerRequest::getListenerId() const {
  return listenerId_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::string AssociateAdditionalCertificatesWithListenerRequest::getRegionId() const {
  return regionId_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool AssociateAdditionalCertificatesWithListenerRequest::getDryRun() const {
  return dryRun_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<std::string> AssociateAdditionalCertificatesWithListenerRequest::getAdditionalCertificateIds() const {
  return additionalCertificateIds_;
}

void AssociateAdditionalCertificatesWithListenerRequest::setAdditionalCertificateIds(const std::vector<std::string> &additionalCertificateIds) {
  additionalCertificateIds_ = additionalCertificateIds;
}

