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

#include <alibabacloud/opensearch/model/ListQueryProcessorNersRequest.h>

using AlibabaCloud::OpenSearch::Model::ListQueryProcessorNersRequest;

ListQueryProcessorNersRequest::ListQueryProcessorNersRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/query-processor/ner/default-priorities"};
  setMethod(HttpRequest::Method::Get);
}

ListQueryProcessorNersRequest::~ListQueryProcessorNersRequest() {}

std::string ListQueryProcessorNersRequest::getDomain() const {
  return domain_;
}

void ListQueryProcessorNersRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("domain"), domain);
}

