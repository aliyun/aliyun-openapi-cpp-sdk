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

#include <alibabacloud/config/model/CreateAggregateAdvancedSearchFileRequest.h>

using AlibabaCloud::Config::Model::CreateAggregateAdvancedSearchFileRequest;

CreateAggregateAdvancedSearchFileRequest::CreateAggregateAdvancedSearchFileRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateAggregateAdvancedSearchFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateAggregateAdvancedSearchFileRequest::~CreateAggregateAdvancedSearchFileRequest() {}

std::string CreateAggregateAdvancedSearchFileRequest::getAggregatorId() const {
  return aggregatorId_;
}

void CreateAggregateAdvancedSearchFileRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string CreateAggregateAdvancedSearchFileRequest::getSql() const {
  return sql_;
}

void CreateAggregateAdvancedSearchFileRequest::setSql(const std::string &sql) {
  sql_ = sql;
  setParameter(std::string("Sql"), sql);
}

bool CreateAggregateAdvancedSearchFileRequest::getOnlyBaseLine() const {
  return onlyBaseLine_;
}

void CreateAggregateAdvancedSearchFileRequest::setOnlyBaseLine(bool onlyBaseLine) {
  onlyBaseLine_ = onlyBaseLine;
  setParameter(std::string("OnlyBaseLine"), onlyBaseLine ? "true" : "false");
}

