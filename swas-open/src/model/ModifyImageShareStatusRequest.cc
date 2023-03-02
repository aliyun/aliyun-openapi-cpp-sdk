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

#include <alibabacloud/swas-open/model/ModifyImageShareStatusRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ModifyImageShareStatusRequest;

ModifyImageShareStatusRequest::ModifyImageShareStatusRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ModifyImageShareStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyImageShareStatusRequest::~ModifyImageShareStatusRequest() {}

std::string ModifyImageShareStatusRequest::getImageId() const {
  return imageId_;
}

void ModifyImageShareStatusRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ModifyImageShareStatusRequest::getClientToken() const {
  return clientToken_;
}

void ModifyImageShareStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyImageShareStatusRequest::getRegionId() const {
  return regionId_;
}

void ModifyImageShareStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyImageShareStatusRequest::getOperation() const {
  return operation_;
}

void ModifyImageShareStatusRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

