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

#include <alibabacloud/elasticsearch/model/UpdateKibanaSettingsRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateKibanaSettingsRequest;

UpdateKibanaSettingsRequest::UpdateKibanaSettingsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/actions/update-kibana-settings"};
  setMethod(HttpRequest::Method::Post);
}

UpdateKibanaSettingsRequest::~UpdateKibanaSettingsRequest() {}

std::string UpdateKibanaSettingsRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateKibanaSettingsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateKibanaSettingsRequest::getClientToken() const {
  return clientToken_;
}

void UpdateKibanaSettingsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), clientToken);
}

std::string UpdateKibanaSettingsRequest::getBody() const {
  return body_;
}

void UpdateKibanaSettingsRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

