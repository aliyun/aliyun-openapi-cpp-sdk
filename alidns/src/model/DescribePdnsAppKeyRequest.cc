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

#include <alibabacloud/alidns/model/DescribePdnsAppKeyRequest.h>

using AlibabaCloud::Alidns::Model::DescribePdnsAppKeyRequest;

DescribePdnsAppKeyRequest::DescribePdnsAppKeyRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribePdnsAppKey") {
  setMethod(HttpRequest::Method::Post);
}

DescribePdnsAppKeyRequest::~DescribePdnsAppKeyRequest() {}

std::string DescribePdnsAppKeyRequest::getAppKeyId() const {
  return appKeyId_;
}

void DescribePdnsAppKeyRequest::setAppKeyId(const std::string &appKeyId) {
  appKeyId_ = appKeyId;
  setParameter(std::string("AppKeyId"), appKeyId);
}

std::string DescribePdnsAppKeyRequest::getLang() const {
  return lang_;
}

void DescribePdnsAppKeyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

