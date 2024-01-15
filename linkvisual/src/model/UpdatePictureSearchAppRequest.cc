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

#include <alibabacloud/linkvisual/model/UpdatePictureSearchAppRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdatePictureSearchAppRequest;

UpdatePictureSearchAppRequest::UpdatePictureSearchAppRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdatePictureSearchApp") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePictureSearchAppRequest::~UpdatePictureSearchAppRequest() {}

std::string UpdatePictureSearchAppRequest::getDescription() const {
  return description_;
}

void UpdatePictureSearchAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdatePictureSearchAppRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdatePictureSearchAppRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdatePictureSearchAppRequest::getName() const {
  return name_;
}

void UpdatePictureSearchAppRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdatePictureSearchAppRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdatePictureSearchAppRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string UpdatePictureSearchAppRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void UpdatePictureSearchAppRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

