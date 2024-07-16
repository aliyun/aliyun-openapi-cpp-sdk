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

#include <alibabacloud/swas-open/model/AddCustomImageShareAccountRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::AddCustomImageShareAccountRequest;

AddCustomImageShareAccountRequest::AddCustomImageShareAccountRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "AddCustomImageShareAccount") {
  setMethod(HttpRequest::Method::Post);
}

AddCustomImageShareAccountRequest::~AddCustomImageShareAccountRequest() {}

std::string AddCustomImageShareAccountRequest::getImageId() const {
  return imageId_;
}

void AddCustomImageShareAccountRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string AddCustomImageShareAccountRequest::getClientToken() const {
  return clientToken_;
}

void AddCustomImageShareAccountRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddCustomImageShareAccountRequest::getRegionId() const {
  return regionId_;
}

void AddCustomImageShareAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<long> AddCustomImageShareAccountRequest::getAccount() const {
  return account_;
}

void AddCustomImageShareAccountRequest::setAccount(const std::vector<long> &account) {
  account_ = account;
}

