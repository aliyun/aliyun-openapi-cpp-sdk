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

#include <alibabacloud/kms/model/DescribeKeyVersionRequest.h>

using AlibabaCloud::Kms::Model::DescribeKeyVersionRequest;

DescribeKeyVersionRequest::DescribeKeyVersionRequest()
    : RpcServiceRequest("kms", "2016-01-20", "DescribeKeyVersion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeKeyVersionRequest::~DescribeKeyVersionRequest() {}

std::string DescribeKeyVersionRequest::getKeyVersionId() const {
  return keyVersionId_;
}

void DescribeKeyVersionRequest::setKeyVersionId(const std::string &keyVersionId) {
  keyVersionId_ = keyVersionId;
  setParameter(std::string("KeyVersionId"), keyVersionId);
}

std::string DescribeKeyVersionRequest::getKeyId() const {
  return keyId_;
}

void DescribeKeyVersionRequest::setKeyId(const std::string &keyId) {
  keyId_ = keyId;
  setParameter(std::string("KeyId"), keyId);
}

