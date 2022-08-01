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

#include <alibabacloud/kms/model/DescribeSecretRequest.h>

using AlibabaCloud::Kms::Model::DescribeSecretRequest;

DescribeSecretRequest::DescribeSecretRequest()
    : RpcServiceRequest("kms", "2016-01-20", "DescribeSecret") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecretRequest::~DescribeSecretRequest() {}

std::string DescribeSecretRequest::getSecretName() const {
  return secretName_;
}

void DescribeSecretRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

std::string DescribeSecretRequest::getFetchTags() const {
  return fetchTags_;
}

void DescribeSecretRequest::setFetchTags(const std::string &fetchTags) {
  fetchTags_ = fetchTags;
  setParameter(std::string("FetchTags"), fetchTags);
}

