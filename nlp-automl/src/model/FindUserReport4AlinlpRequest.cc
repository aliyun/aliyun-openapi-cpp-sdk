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

#include <alibabacloud/nlp-automl/model/FindUserReport4AlinlpRequest.h>

using AlibabaCloud::Nlp_automl::Model::FindUserReport4AlinlpRequest;

FindUserReport4AlinlpRequest::FindUserReport4AlinlpRequest()
    : RpcServiceRequest("nlp-automl", "2019-11-11", "FindUserReport4Alinlp") {
  setMethod(HttpRequest::Method::Post);
}

FindUserReport4AlinlpRequest::~FindUserReport4AlinlpRequest() {}

long FindUserReport4AlinlpRequest::getCustomerUserParentId() const {
  return customerUserParentId_;
}

void FindUserReport4AlinlpRequest::setCustomerUserParentId(long customerUserParentId) {
  customerUserParentId_ = customerUserParentId;
  setBodyParameter(std::string("CustomerUserParentId"), std::to_string(customerUserParentId));
}

std::string FindUserReport4AlinlpRequest::getEndTime() const {
  return endTime_;
}

void FindUserReport4AlinlpRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string FindUserReport4AlinlpRequest::getBeginTime() const {
  return beginTime_;
}

void FindUserReport4AlinlpRequest::setBeginTime(const std::string &beginTime) {
  beginTime_ = beginTime;
  setBodyParameter(std::string("BeginTime"), beginTime);
}

std::string FindUserReport4AlinlpRequest::getType() const {
  return type_;
}

void FindUserReport4AlinlpRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string FindUserReport4AlinlpRequest::getModelType() const {
  return modelType_;
}

void FindUserReport4AlinlpRequest::setModelType(const std::string &modelType) {
  modelType_ = modelType;
  setBodyParameter(std::string("ModelType"), modelType);
}

