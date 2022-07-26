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

#include <alibabacloud/oos/model/DeleteStateConfigurationsRequest.h>

using AlibabaCloud::Oos::Model::DeleteStateConfigurationsRequest;

DeleteStateConfigurationsRequest::DeleteStateConfigurationsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "DeleteStateConfigurations") {
  setMethod(HttpRequest::Method::Post);
}

DeleteStateConfigurationsRequest::~DeleteStateConfigurationsRequest() {}

std::string DeleteStateConfigurationsRequest::getStateConfigurationIds() const {
  return stateConfigurationIds_;
}

void DeleteStateConfigurationsRequest::setStateConfigurationIds(const std::string &stateConfigurationIds) {
  stateConfigurationIds_ = stateConfigurationIds;
  setParameter(std::string("StateConfigurationIds"), stateConfigurationIds);
}

std::string DeleteStateConfigurationsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteStateConfigurationsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteStateConfigurationsRequest::getRegionId() const {
  return regionId_;
}

void DeleteStateConfigurationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

