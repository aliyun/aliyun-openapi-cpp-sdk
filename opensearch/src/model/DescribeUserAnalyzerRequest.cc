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

#include <alibabacloud/opensearch/model/DescribeUserAnalyzerRequest.h>

using AlibabaCloud::OpenSearch::Model::DescribeUserAnalyzerRequest;

DescribeUserAnalyzerRequest::DescribeUserAnalyzerRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/user-analyzers/[name]"};
  setMethod(HttpRequest::Method::Get);
}

DescribeUserAnalyzerRequest::~DescribeUserAnalyzerRequest() {}

std::string DescribeUserAnalyzerRequest::getWith() const {
  return with_;
}

void DescribeUserAnalyzerRequest::setWith(const std::string &with) {
  with_ = with;
  setParameter(std::string("with"), with);
}

std::string DescribeUserAnalyzerRequest::getName() const {
  return name_;
}

void DescribeUserAnalyzerRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

