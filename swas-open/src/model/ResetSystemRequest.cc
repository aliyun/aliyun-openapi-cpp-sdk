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

#include <alibabacloud/swas-open/model/ResetSystemRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ResetSystemRequest;

ResetSystemRequest::ResetSystemRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ResetSystem") {
  setMethod(HttpRequest::Method::Post);
}

ResetSystemRequest::~ResetSystemRequest() {}

std::string ResetSystemRequest::getImageId() const {
  return imageId_;
}

void ResetSystemRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ResetSystemRequest::getClientToken() const {
  return clientToken_;
}

void ResetSystemRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

ResetSystemRequest::LoginCredentials ResetSystemRequest::getLoginCredentials() const {
  return loginCredentials_;
}

void ResetSystemRequest::setLoginCredentials(const ResetSystemRequest::LoginCredentials &loginCredentials) {
  loginCredentials_ = loginCredentials;
  setParameter(std::string("LoginCredentials") + ".Password", loginCredentials.password);
  setParameter(std::string("LoginCredentials") + ".KeyPairName", loginCredentials.keyPairName);
}

std::string ResetSystemRequest::getInstanceId() const {
  return instanceId_;
}

void ResetSystemRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ResetSystemRequest::getRegionId() const {
  return regionId_;
}

void ResetSystemRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

