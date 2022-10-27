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

#include <alibabacloud/elasticsearch/model/InstallAckOperatorRequest.h>

using AlibabaCloud::Elasticsearch::Model::InstallAckOperatorRequest;

InstallAckOperatorRequest::InstallAckOperatorRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/ack-clusters/[ClusterId]/operator"};
  setMethod(HttpRequest::Method::Post);
}

InstallAckOperatorRequest::~InstallAckOperatorRequest() {}

string InstallAckOperatorRequest::getClientToken() const {
  return clientToken_;
}

void InstallAckOperatorRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

string InstallAckOperatorRequest::getClusterId() const {
  return clusterId_;
}

void InstallAckOperatorRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

string InstallAckOperatorRequest::getBody() const {
  return body_;
}

void InstallAckOperatorRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

