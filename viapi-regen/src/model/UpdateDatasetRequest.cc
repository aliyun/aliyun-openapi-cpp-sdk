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

#include <alibabacloud/viapi-regen/model/UpdateDatasetRequest.h>

using AlibabaCloud::Viapi_regen::Model::UpdateDatasetRequest;

UpdateDatasetRequest::UpdateDatasetRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "UpdateDataset") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDatasetRequest::~UpdateDatasetRequest() {}

std::string UpdateDatasetRequest::getDescription() const {
  return description_;
}

void UpdateDatasetRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

long UpdateDatasetRequest::getId() const {
  return id_;
}

void UpdateDatasetRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateDatasetRequest::getName() const {
  return name_;
}

void UpdateDatasetRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

