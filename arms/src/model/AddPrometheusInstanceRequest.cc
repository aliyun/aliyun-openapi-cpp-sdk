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

#include <alibabacloud/arms/model/AddPrometheusInstanceRequest.h>

using AlibabaCloud::ARMS::Model::AddPrometheusInstanceRequest;

AddPrometheusInstanceRequest::AddPrometheusInstanceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "AddPrometheusInstance") {
  setMethod(HttpRequest::Method::Post);
}

AddPrometheusInstanceRequest::~AddPrometheusInstanceRequest() {}

std::string AddPrometheusInstanceRequest::getRegionId() const {
  return regionId_;
}

void AddPrometheusInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddPrometheusInstanceRequest::getName() const {
  return name_;
}

void AddPrometheusInstanceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddPrometheusInstanceRequest::getType() const {
  return type_;
}

void AddPrometheusInstanceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

