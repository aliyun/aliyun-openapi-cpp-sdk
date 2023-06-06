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

#include <alibabacloud/sas/model/GetCheckDetailRequest.h>

using AlibabaCloud::Sas::Model::GetCheckDetailRequest;

GetCheckDetailRequest::GetCheckDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetCheckDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetCheckDetailRequest::~GetCheckDetailRequest() {}

std::string GetCheckDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void GetCheckDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetCheckDetailRequest::getRegionId() const {
  return regionId_;
}

void GetCheckDetailRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetCheckDetailRequest::getLang() const {
  return lang_;
}

void GetCheckDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long GetCheckDetailRequest::getCheckId() const {
  return checkId_;
}

void GetCheckDetailRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

