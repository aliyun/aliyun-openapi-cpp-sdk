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

#include <alibabacloud/opensearch/model/ListDataSourceTableFieldsRequest.h>

using AlibabaCloud::OpenSearch::Model::ListDataSourceTableFieldsRequest;

ListDataSourceTableFieldsRequest::ListDataSourceTableFieldsRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/assist/data-sources/[dataSourceType]/fields"};
  setMethod(HttpRequest::Method::Get);
}

ListDataSourceTableFieldsRequest::~ListDataSourceTableFieldsRequest() {}

std::string ListDataSourceTableFieldsRequest::getDataSourceType() const {
  return dataSourceType_;
}

void ListDataSourceTableFieldsRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("dataSourceType"), dataSourceType);
}

std::string ListDataSourceTableFieldsRequest::getParams() const {
  return params_;
}

void ListDataSourceTableFieldsRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("params"), params);
}

