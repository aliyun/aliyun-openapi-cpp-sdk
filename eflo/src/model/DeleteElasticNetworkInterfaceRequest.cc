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

#include <alibabacloud/eflo/model/DeleteElasticNetworkInterfaceRequest.h>

using AlibabaCloud::Eflo::Model::DeleteElasticNetworkInterfaceRequest;

DeleteElasticNetworkInterfaceRequest::DeleteElasticNetworkInterfaceRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "DeleteElasticNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

DeleteElasticNetworkInterfaceRequest::~DeleteElasticNetworkInterfaceRequest() {}

std::string DeleteElasticNetworkInterfaceRequest::getClientToken() const {
  return clientToken_;
}

void DeleteElasticNetworkInterfaceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteElasticNetworkInterfaceRequest::getRegionId() const {
  return regionId_;
}

void DeleteElasticNetworkInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DeleteElasticNetworkInterfaceRequest::getElasticNetworkInterfaceId() const {
  return elasticNetworkInterfaceId_;
}

void DeleteElasticNetworkInterfaceRequest::setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId) {
  elasticNetworkInterfaceId_ = elasticNetworkInterfaceId;
  setBodyParameter(std::string("ElasticNetworkInterfaceId"), elasticNetworkInterfaceId);
}

