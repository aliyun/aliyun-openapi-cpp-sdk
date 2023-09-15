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

#include <alibabacloud/cams/model/GetChatappTemplateMetricRequest.h>

using AlibabaCloud::Cams::Model::GetChatappTemplateMetricRequest;

GetChatappTemplateMetricRequest::GetChatappTemplateMetricRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetChatappTemplateMetric") {
  setMethod(HttpRequest::Method::Post);
}

GetChatappTemplateMetricRequest::~GetChatappTemplateMetricRequest() {}

std::string GetChatappTemplateMetricRequest::getLanguage() const {
  return language_;
}

void GetChatappTemplateMetricRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string GetChatappTemplateMetricRequest::getApiCode() const {
  return apiCode_;
}

void GetChatappTemplateMetricRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string GetChatappTemplateMetricRequest::getTemplateType() const {
  return templateType_;
}

void GetChatappTemplateMetricRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

long GetChatappTemplateMetricRequest::getEnd() const {
  return end_;
}

void GetChatappTemplateMetricRequest::setEnd(long end) {
  end_ = end;
  setParameter(std::string("End"), std::to_string(end));
}

std::string GetChatappTemplateMetricRequest::getIsvCode() const {
  return isvCode_;
}

void GetChatappTemplateMetricRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setParameter(std::string("IsvCode"), isvCode);
}

std::string GetChatappTemplateMetricRequest::getProdCode() const {
  return prodCode_;
}

void GetChatappTemplateMetricRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long GetChatappTemplateMetricRequest::getStart() const {
  return start_;
}

void GetChatappTemplateMetricRequest::setStart(long start) {
  start_ = start;
  setParameter(std::string("Start"), std::to_string(start));
}

std::string GetChatappTemplateMetricRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetChatappTemplateMetricRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string GetChatappTemplateMetricRequest::getGranularity() const {
  return granularity_;
}

void GetChatappTemplateMetricRequest::setGranularity(const std::string &granularity) {
  granularity_ = granularity;
  setParameter(std::string("Granularity"), granularity);
}

std::string GetChatappTemplateMetricRequest::getTemplateCode() const {
  return templateCode_;
}

void GetChatappTemplateMetricRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setParameter(std::string("TemplateCode"), templateCode);
}

