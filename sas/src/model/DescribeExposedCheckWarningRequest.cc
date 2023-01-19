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

#include <alibabacloud/sas/model/DescribeExposedCheckWarningRequest.h>

using AlibabaCloud::Sas::Model::DescribeExposedCheckWarningRequest;

DescribeExposedCheckWarningRequest::DescribeExposedCheckWarningRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeExposedCheckWarning") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExposedCheckWarningRequest::~DescribeExposedCheckWarningRequest() {}

std::string DescribeExposedCheckWarningRequest::getLang() const {
  return lang_;
}

void DescribeExposedCheckWarningRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeExposedCheckWarningRequest::getTypeName() const {
  return typeName_;
}

void DescribeExposedCheckWarningRequest::setTypeName(const std::string &typeName) {
  typeName_ = typeName;
  setParameter(std::string("TypeName"), typeName);
}

std::string DescribeExposedCheckWarningRequest::getUuids() const {
  return uuids_;
}

void DescribeExposedCheckWarningRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

