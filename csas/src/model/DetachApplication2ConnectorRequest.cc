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

#include <alibabacloud/csas/model/DetachApplication2ConnectorRequest.h>

using AlibabaCloud::Csas::Model::DetachApplication2ConnectorRequest;

DetachApplication2ConnectorRequest::DetachApplication2ConnectorRequest()
    : RpcServiceRequest("csas", "2023-01-20", "DetachApplication2Connector") {
  setMethod(HttpRequest::Method::Post);
}

DetachApplication2ConnectorRequest::~DetachApplication2ConnectorRequest() {}

std::string DetachApplication2ConnectorRequest::getConnectorId() const {
  return connectorId_;
}

void DetachApplication2ConnectorRequest::setConnectorId(const std::string &connectorId) {
  connectorId_ = connectorId;
  setBodyParameter(std::string("ConnectorId"), connectorId);
}

std::vector<DetachApplication2ConnectorRequest::std::string> DetachApplication2ConnectorRequest::getApplicationIds() const {
  return applicationIds_;
}

void DetachApplication2ConnectorRequest::setApplicationIds(const std::vector<DetachApplication2ConnectorRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setBodyParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string DetachApplication2ConnectorRequest::getSourceIp() const {
  return sourceIp_;
}

void DetachApplication2ConnectorRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

