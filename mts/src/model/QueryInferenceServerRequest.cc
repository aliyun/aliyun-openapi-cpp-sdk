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

#include <alibabacloud/mts/model/QueryInferenceServerRequest.h>

using AlibabaCloud::Mts::Model::QueryInferenceServerRequest;

QueryInferenceServerRequest::QueryInferenceServerRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryInferenceServer") {
  setMethod(HttpRequest::Method::Post);
}

QueryInferenceServerRequest::~QueryInferenceServerRequest() {}

long QueryInferenceServerRequest::getCreateTime() const {
  return createTime_;
}

void QueryInferenceServerRequest::setCreateTime(long createTime) {
  createTime_ = createTime;
  setParameter(std::string("CreateTime"), std::to_string(createTime));
}

long QueryInferenceServerRequest::getMaxPageSize() const {
  return maxPageSize_;
}

void QueryInferenceServerRequest::setMaxPageSize(long maxPageSize) {
  maxPageSize_ = maxPageSize;
  setParameter(std::string("MaxPageSize"), std::to_string(maxPageSize));
}

long QueryInferenceServerRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryInferenceServerRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string QueryInferenceServerRequest::getModelType() const {
  return modelType_;
}

void QueryInferenceServerRequest::setModelType(const std::string &modelType) {
  modelType_ = modelType;
  setParameter(std::string("ModelType"), modelType);
}

