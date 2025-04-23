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

#include <alibabacloud/eds-user/model/DeleteUserPropertyValueRequest.h>

using AlibabaCloud::Eds_user::Model::DeleteUserPropertyValueRequest;

DeleteUserPropertyValueRequest::DeleteUserPropertyValueRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "DeleteUserPropertyValue") {
  setMethod(HttpRequest::Method::Post);
}

DeleteUserPropertyValueRequest::~DeleteUserPropertyValueRequest() {}

long DeleteUserPropertyValueRequest::getPropertyValueId() const {
  return propertyValueId_;
}

void DeleteUserPropertyValueRequest::setPropertyValueId(long propertyValueId) {
  propertyValueId_ = propertyValueId;
  setBodyParameter(std::string("PropertyValueId"), std::to_string(propertyValueId));
}

long DeleteUserPropertyValueRequest::getUserId() const {
  return userId_;
}

void DeleteUserPropertyValueRequest::setUserId(long userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), std::to_string(userId));
}

long DeleteUserPropertyValueRequest::getPropertyId() const {
  return propertyId_;
}

void DeleteUserPropertyValueRequest::setPropertyId(long propertyId) {
  propertyId_ = propertyId;
  setBodyParameter(std::string("PropertyId"), std::to_string(propertyId));
}

