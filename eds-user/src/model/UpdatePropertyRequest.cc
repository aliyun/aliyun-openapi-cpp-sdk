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

#include <alibabacloud/eds-user/model/UpdatePropertyRequest.h>

using AlibabaCloud::Eds_user::Model::UpdatePropertyRequest;

UpdatePropertyRequest::UpdatePropertyRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "UpdateProperty") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePropertyRequest::~UpdatePropertyRequest() {}

std::string UpdatePropertyRequest::getPropertyKey() const {
  return propertyKey_;
}

void UpdatePropertyRequest::setPropertyKey(const std::string &propertyKey) {
  propertyKey_ = propertyKey;
  setBodyParameter(std::string("PropertyKey"), propertyKey);
}

long UpdatePropertyRequest::getPropertyId() const {
  return propertyId_;
}

void UpdatePropertyRequest::setPropertyId(long propertyId) {
  propertyId_ = propertyId;
  setBodyParameter(std::string("PropertyId"), std::to_string(propertyId));
}

std::vector<UpdatePropertyRequest::PropertyValues> UpdatePropertyRequest::getPropertyValues() const {
  return propertyValues_;
}

void UpdatePropertyRequest::setPropertyValues(const std::vector<UpdatePropertyRequest::PropertyValues> &propertyValues) {
  propertyValues_ = propertyValues;
  for(int dep1 = 0; dep1 != propertyValues.size(); dep1++) {
  auto propertyValuesObj = propertyValues.at(dep1);
  std::string propertyValuesObjStr = std::string("PropertyValues") + "." + std::to_string(dep1 + 1);
    setBodyParameter(propertyValuesObjStr + ".PropertyValueId", std::to_string(propertyValuesObj.propertyValueId));
    setBodyParameter(propertyValuesObjStr + ".PropertyValue", propertyValuesObj.propertyValue);
  }
}

