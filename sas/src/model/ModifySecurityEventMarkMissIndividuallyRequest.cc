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

#include <alibabacloud/sas/model/ModifySecurityEventMarkMissIndividuallyRequest.h>

using AlibabaCloud::Sas::Model::ModifySecurityEventMarkMissIndividuallyRequest;

ModifySecurityEventMarkMissIndividuallyRequest::ModifySecurityEventMarkMissIndividuallyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifySecurityEventMarkMissIndividually") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityEventMarkMissIndividuallyRequest::~ModifySecurityEventMarkMissIndividuallyRequest() {}

std::string ModifySecurityEventMarkMissIndividuallyRequest::getInsertMarkMissParam() const {
  return insertMarkMissParam_;
}

void ModifySecurityEventMarkMissIndividuallyRequest::setInsertMarkMissParam(const std::string &insertMarkMissParam) {
  insertMarkMissParam_ = insertMarkMissParam;
  setBodyParameter(std::string("InsertMarkMissParam"), insertMarkMissParam);
}

std::string ModifySecurityEventMarkMissIndividuallyRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifySecurityEventMarkMissIndividuallyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifySecurityEventMarkMissIndividuallyRequest::getFrom() const {
  return from_;
}

void ModifySecurityEventMarkMissIndividuallyRequest::setFrom(const std::string &from) {
  from_ = from;
  setBodyParameter(std::string("From"), from);
}

std::string ModifySecurityEventMarkMissIndividuallyRequest::getLang() const {
  return lang_;
}

void ModifySecurityEventMarkMissIndividuallyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setBodyParameter(std::string("Lang"), lang);
}

std::string ModifySecurityEventMarkMissIndividuallyRequest::getDeleteMarkMissParam() const {
  return deleteMarkMissParam_;
}

void ModifySecurityEventMarkMissIndividuallyRequest::setDeleteMarkMissParam(const std::string &deleteMarkMissParam) {
  deleteMarkMissParam_ = deleteMarkMissParam;
  setBodyParameter(std::string("DeleteMarkMissParam"), deleteMarkMissParam);
}

