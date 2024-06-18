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

#include <alibabacloud/eflo/model/UpdateElasticNetworkInterfaceRequest.h>

using AlibabaCloud::Eflo::Model::UpdateElasticNetworkInterfaceRequest;

UpdateElasticNetworkInterfaceRequest::UpdateElasticNetworkInterfaceRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UpdateElasticNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

UpdateElasticNetworkInterfaceRequest::~UpdateElasticNetworkInterfaceRequest() {}

std::string UpdateElasticNetworkInterfaceRequest::getClientToken() const {
  return clientToken_;
}

void UpdateElasticNetworkInterfaceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateElasticNetworkInterfaceRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void UpdateElasticNetworkInterfaceRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setBodyParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string UpdateElasticNetworkInterfaceRequest::getDescription() const {
  return description_;
}

void UpdateElasticNetworkInterfaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateElasticNetworkInterfaceRequest::getRegionId() const {
  return regionId_;
}

void UpdateElasticNetworkInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UpdateElasticNetworkInterfaceRequest::getElasticNetworkInterfaceId() const {
  return elasticNetworkInterfaceId_;
}

void UpdateElasticNetworkInterfaceRequest::setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId) {
  elasticNetworkInterfaceId_ = elasticNetworkInterfaceId;
  setBodyParameter(std::string("ElasticNetworkInterfaceId"), elasticNetworkInterfaceId);
}

