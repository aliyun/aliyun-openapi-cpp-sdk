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

#include <alibabacloud/nlb/model/DisassociateAdditionalCertificatesWithListenerRequest.h>

using AlibabaCloud::Nlb::Model::DisassociateAdditionalCertificatesWithListenerRequest;

DisassociateAdditionalCertificatesWithListenerRequest::DisassociateAdditionalCertificatesWithListenerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "DisassociateAdditionalCertificatesWithListener") {
  setMethod(HttpRequest::Method::Post);
}

DisassociateAdditionalCertificatesWithListenerRequest::~DisassociateAdditionalCertificatesWithListenerRequest() {}

std::string DisassociateAdditionalCertificatesWithListenerRequest::getClientToken() const {
  return clientToken_;
}

void DisassociateAdditionalCertificatesWithListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DisassociateAdditionalCertificatesWithListenerRequest::getListenerId() const {
  return listenerId_;
}

void DisassociateAdditionalCertificatesWithListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::string DisassociateAdditionalCertificatesWithListenerRequest::getRegionId() const {
  return regionId_;
}

void DisassociateAdditionalCertificatesWithListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool DisassociateAdditionalCertificatesWithListenerRequest::getDryRun() const {
  return dryRun_;
}

void DisassociateAdditionalCertificatesWithListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<std::string> DisassociateAdditionalCertificatesWithListenerRequest::getAdditionalCertificateIds() const {
  return additionalCertificateIds_;
}

void DisassociateAdditionalCertificatesWithListenerRequest::setAdditionalCertificateIds(const std::vector<std::string> &additionalCertificateIds) {
  additionalCertificateIds_ = additionalCertificateIds;
}

