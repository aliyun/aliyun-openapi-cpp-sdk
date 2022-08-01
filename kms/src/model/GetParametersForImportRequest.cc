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

#include <alibabacloud/kms/model/GetParametersForImportRequest.h>

using AlibabaCloud::Kms::Model::GetParametersForImportRequest;

GetParametersForImportRequest::GetParametersForImportRequest()
    : RpcServiceRequest("kms", "2016-01-20", "GetParametersForImport") {
  setMethod(HttpRequest::Method::Post);
}

GetParametersForImportRequest::~GetParametersForImportRequest() {}

std::string GetParametersForImportRequest::getKeyId() const {
  return keyId_;
}

void GetParametersForImportRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

std::string GetParametersForImportRequest::getWrappingAlgorithm() const {
  return wrappingAlgorithm_;
}

void GetParametersForImportRequest::setWrappingAlgorithm(const std::string &wrappingAlgorithm) {
  wrappingAlgorithm_ = wrappingAlgorithm;
  setParameter(std::string("WrappingAlgorithm"), wrappingAlgorithm);
}

std::string GetParametersForImportRequest::getWrappingKeySpec() const {
  return wrappingKeySpec_;
}

void GetParametersForImportRequest::setWrappingKeySpec(const std::string &wrappingKeySpec) {
  wrappingKeySpec_ = wrappingKeySpec;
  setParameter(std::string("WrappingKeySpec"), wrappingKeySpec);
}

