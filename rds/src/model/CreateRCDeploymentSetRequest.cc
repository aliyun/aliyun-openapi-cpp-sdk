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

#include <alibabacloud/rds/model/CreateRCDeploymentSetRequest.h>

using AlibabaCloud::Rds::Model::CreateRCDeploymentSetRequest;

CreateRCDeploymentSetRequest::CreateRCDeploymentSetRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateRCDeploymentSet") {
  setMethod(HttpRequest::Method::Post);
}

CreateRCDeploymentSetRequest::~CreateRCDeploymentSetRequest() {}

std::string CreateRCDeploymentSetRequest::getClientToken() const {
  return clientToken_;
}

void CreateRCDeploymentSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRCDeploymentSetRequest::getDescription() const {
  return description_;
}

void CreateRCDeploymentSetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRCDeploymentSetRequest::getRegionId() const {
  return regionId_;
}

void CreateRCDeploymentSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long CreateRCDeploymentSetRequest::getGroupCount() const {
  return groupCount_;
}

void CreateRCDeploymentSetRequest::setGroupCount(long groupCount) {
  groupCount_ = groupCount;
  setParameter(std::string("GroupCount"), std::to_string(groupCount));
}

std::vector<CreateRCDeploymentSetRequest::Tag> CreateRCDeploymentSetRequest::getTag() const {
  return tag_;
}

void CreateRCDeploymentSetRequest::setTag(const std::vector<CreateRCDeploymentSetRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateRCDeploymentSetRequest::getDeploymentSetName() const {
  return deploymentSetName_;
}

void CreateRCDeploymentSetRequest::setDeploymentSetName(const std::string &deploymentSetName) {
  deploymentSetName_ = deploymentSetName;
  setParameter(std::string("DeploymentSetName"), deploymentSetName);
}

std::string CreateRCDeploymentSetRequest::getOnUnableToRedeployFailedInstance() const {
  return onUnableToRedeployFailedInstance_;
}

void CreateRCDeploymentSetRequest::setOnUnableToRedeployFailedInstance(const std::string &onUnableToRedeployFailedInstance) {
  onUnableToRedeployFailedInstance_ = onUnableToRedeployFailedInstance;
  setParameter(std::string("OnUnableToRedeployFailedInstance"), onUnableToRedeployFailedInstance);
}

std::string CreateRCDeploymentSetRequest::getStrategy() const {
  return strategy_;
}

void CreateRCDeploymentSetRequest::setStrategy(const std::string &strategy) {
  strategy_ = strategy;
  setParameter(std::string("Strategy"), strategy);
}

