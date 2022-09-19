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

#include <alibabacloud/viapi-regen/model/CreateServiceRequest.h>

using AlibabaCloud::Viapi_regen::Model::CreateServiceRequest;

CreateServiceRequest::CreateServiceRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "CreateService") {
  setMethod(HttpRequest::Method::Post);
}

CreateServiceRequest::~CreateServiceRequest() {}

std::string CreateServiceRequest::getDescription() const {
  return description_;
}

void CreateServiceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

long CreateServiceRequest::getTrainTaskId() const {
  return trainTaskId_;
}

void CreateServiceRequest::setTrainTaskId(long trainTaskId) {
  trainTaskId_ = trainTaskId;
  setBodyParameter(std::string("TrainTaskId"), std::to_string(trainTaskId));
}

std::string CreateServiceRequest::getAuthorizationType() const {
  return authorizationType_;
}

void CreateServiceRequest::setAuthorizationType(const std::string &authorizationType) {
  authorizationType_ = authorizationType;
  setBodyParameter(std::string("AuthorizationType"), authorizationType);
}

std::string CreateServiceRequest::getName() const {
  return name_;
}

void CreateServiceRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateServiceRequest::getAuthorizedAccount() const {
  return authorizedAccount_;
}

void CreateServiceRequest::setAuthorizedAccount(const std::string &authorizedAccount) {
  authorizedAccount_ = authorizedAccount;
  setBodyParameter(std::string("AuthorizedAccount"), authorizedAccount);
}

