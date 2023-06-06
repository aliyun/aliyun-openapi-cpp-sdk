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

#include <alibabacloud/sas/model/ListInstanceCatalogRequest.h>

using AlibabaCloud::Sas::Model::ListInstanceCatalogRequest;

ListInstanceCatalogRequest::ListInstanceCatalogRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListInstanceCatalog") {
  setMethod(HttpRequest::Method::Post);
}

ListInstanceCatalogRequest::~ListInstanceCatalogRequest() {}

std::vector<long> ListInstanceCatalogRequest::getStandardIds() const {
  return standardIds_;
}

void ListInstanceCatalogRequest::setStandardIds(const std::vector<long> &standardIds) {
  standardIds_ = standardIds;
}

std::string ListInstanceCatalogRequest::getSourceIp() const {
  return sourceIp_;
}

void ListInstanceCatalogRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListInstanceCatalogRequest::getRegionId() const {
  return regionId_;
}

void ListInstanceCatalogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListInstanceCatalogRequest::getLang() const {
  return lang_;
}

void ListInstanceCatalogRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<std::string> ListInstanceCatalogRequest::getTypes() const {
  return types_;
}

void ListInstanceCatalogRequest::setTypes(const std::vector<std::string> &types) {
  types_ = types;
}

std::vector<long> ListInstanceCatalogRequest::getRequirementIds() const {
  return requirementIds_;
}

void ListInstanceCatalogRequest::setRequirementIds(const std::vector<long> &requirementIds) {
  requirementIds_ = requirementIds;
}

