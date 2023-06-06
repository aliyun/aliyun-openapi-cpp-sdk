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

#include <alibabacloud/sas/model/DescribeLogstoreStorageRequest.h>

using AlibabaCloud::Sas::Model::DescribeLogstoreStorageRequest;

DescribeLogstoreStorageRequest::DescribeLogstoreStorageRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeLogstoreStorage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLogstoreStorageRequest::~DescribeLogstoreStorageRequest() {}

std::string DescribeLogstoreStorageRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeLogstoreStorageRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeLogstoreStorageRequest::getFrom() const {
  return from_;
}

void DescribeLogstoreStorageRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string DescribeLogstoreStorageRequest::getLang() const {
  return lang_;
}

void DescribeLogstoreStorageRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeLogstoreStorageRequest::getLogVersion() const {
  return logVersion_;
}

void DescribeLogstoreStorageRequest::setLogVersion(const std::string &logVersion) {
  logVersion_ = logVersion;
  setParameter(std::string("LogVersion"), logVersion);
}

