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

#include <alibabacloud/eds-user/model/SetUserPropertyValueRequest.h>

using AlibabaCloud::Eds_user::Model::SetUserPropertyValueRequest;

SetUserPropertyValueRequest::SetUserPropertyValueRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "SetUserPropertyValue") {
  setMethod(HttpRequest::Method::Post);
}

SetUserPropertyValueRequest::~SetUserPropertyValueRequest() {}

long SetUserPropertyValueRequest::getPropertyValueId() const {
  return propertyValueId_;
}

void SetUserPropertyValueRequest::setPropertyValueId(long propertyValueId) {
  propertyValueId_ = propertyValueId;
  setBodyParameter(std::string("PropertyValueId"), std::to_string(propertyValueId));
}

long SetUserPropertyValueRequest::getUserId() const {
  return userId_;
}

void SetUserPropertyValueRequest::setUserId(long userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), std::to_string(userId));
}

long SetUserPropertyValueRequest::getPropertyId() const {
  return propertyId_;
}

void SetUserPropertyValueRequest::setPropertyId(long propertyId) {
  propertyId_ = propertyId;
  setBodyParameter(std::string("PropertyId"), std::to_string(propertyId));
}

std::string SetUserPropertyValueRequest::getUserName() const {
  return userName_;
}

void SetUserPropertyValueRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

