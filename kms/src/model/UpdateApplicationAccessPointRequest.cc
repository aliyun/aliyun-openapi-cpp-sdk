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

#include <alibabacloud/kms/model/UpdateApplicationAccessPointRequest.h>

using AlibabaCloud::Kms::Model::UpdateApplicationAccessPointRequest;

UpdateApplicationAccessPointRequest::UpdateApplicationAccessPointRequest()
    : RpcServiceRequest("kms", "2016-01-20", "UpdateApplicationAccessPoint") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationAccessPointRequest::~UpdateApplicationAccessPointRequest() {}

std::string UpdateApplicationAccessPointRequest::getPolicies() const {
  return policies_;
}

void UpdateApplicationAccessPointRequest::setPolicies(const std::string &policies) {
  policies_ = policies;
  setParameter(std::string("Policies"), policies);
}

std::string UpdateApplicationAccessPointRequest::getDescription() const {
  return description_;
}

void UpdateApplicationAccessPointRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateApplicationAccessPointRequest::getName() const {
  return name_;
}

void UpdateApplicationAccessPointRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

