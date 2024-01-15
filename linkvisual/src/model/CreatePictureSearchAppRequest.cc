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

#include <alibabacloud/linkvisual/model/CreatePictureSearchAppRequest.h>

using AlibabaCloud::Linkvisual::Model::CreatePictureSearchAppRequest;

CreatePictureSearchAppRequest::CreatePictureSearchAppRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreatePictureSearchApp") {
  setMethod(HttpRequest::Method::Post);
}

CreatePictureSearchAppRequest::~CreatePictureSearchAppRequest() {}

std::string CreatePictureSearchAppRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreatePictureSearchAppRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string CreatePictureSearchAppRequest::getApiProduct() const {
  return apiProduct_;
}

void CreatePictureSearchAppRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreatePictureSearchAppRequest::getName() const {
  return name_;
}

void CreatePictureSearchAppRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreatePictureSearchAppRequest::getApiRevision() const {
  return apiRevision_;
}

void CreatePictureSearchAppRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreatePictureSearchAppRequest::getDesc() const {
  return desc_;
}

void CreatePictureSearchAppRequest::setDesc(const std::string &desc) {
  desc_ = desc;
  setParameter(std::string("Desc"), desc);
}

