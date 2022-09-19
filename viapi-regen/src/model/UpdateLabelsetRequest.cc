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

#include <alibabacloud/viapi-regen/model/UpdateLabelsetRequest.h>

using AlibabaCloud::Viapi_regen::Model::UpdateLabelsetRequest;

UpdateLabelsetRequest::UpdateLabelsetRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "UpdateLabelset") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLabelsetRequest::~UpdateLabelsetRequest() {}

std::string UpdateLabelsetRequest::getDescription() const {
  return description_;
}

void UpdateLabelsetRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

long UpdateLabelsetRequest::getId() const {
  return id_;
}

void UpdateLabelsetRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateLabelsetRequest::getTagUserList() const {
  return tagUserList_;
}

void UpdateLabelsetRequest::setTagUserList(const std::string &tagUserList) {
  tagUserList_ = tagUserList;
  setBodyParameter(std::string("TagUserList"), tagUserList);
}

std::string UpdateLabelsetRequest::getUserOssUrl() const {
  return userOssUrl_;
}

void UpdateLabelsetRequest::setUserOssUrl(const std::string &userOssUrl) {
  userOssUrl_ = userOssUrl;
  setBodyParameter(std::string("UserOssUrl"), userOssUrl);
}

std::string UpdateLabelsetRequest::getObjectKey() const {
  return objectKey_;
}

void UpdateLabelsetRequest::setObjectKey(const std::string &objectKey) {
  objectKey_ = objectKey;
  setBodyParameter(std::string("ObjectKey"), objectKey);
}

std::string UpdateLabelsetRequest::getName() const {
  return name_;
}

void UpdateLabelsetRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

