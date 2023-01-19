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

#include <alibabacloud/sas/model/ListCheckStandardRequest.h>

using AlibabaCloud::Sas::Model::ListCheckStandardRequest;

ListCheckStandardRequest::ListCheckStandardRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListCheckStandard") {
  setMethod(HttpRequest::Method::Post);
}

ListCheckStandardRequest::~ListCheckStandardRequest() {}

std::vector<std::string> ListCheckStandardRequest::getInstanceSubTypes() const {
  return instanceSubTypes_;
}

void ListCheckStandardRequest::setInstanceSubTypes(const std::vector<std::string> &instanceSubTypes) {
  instanceSubTypes_ = instanceSubTypes;
}

std::vector<std::string> ListCheckStandardRequest::getInstanceTypes() const {
  return instanceTypes_;
}

void ListCheckStandardRequest::setInstanceTypes(const std::vector<std::string> &instanceTypes) {
  instanceTypes_ = instanceTypes;
}

std::string ListCheckStandardRequest::getSourceIp() const {
  return sourceIp_;
}

void ListCheckStandardRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListCheckStandardRequest::getLang() const {
  return lang_;
}

void ListCheckStandardRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<std::string> ListCheckStandardRequest::getVendors() const {
  return vendors_;
}

void ListCheckStandardRequest::setVendors(const std::vector<std::string> &vendors) {
  vendors_ = vendors;
}

std::vector<std::string> ListCheckStandardRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListCheckStandardRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

