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

#include <alibabacloud/opensearch/model/DescribeDataCollctionRequest.h>

using AlibabaCloud::OpenSearch::Model::DescribeDataCollctionRequest;

DescribeDataCollctionRequest::DescribeDataCollctionRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/data-collections/[dataCollectionIdentity]"};
  setMethod(HttpRequest::Method::Get);
}

DescribeDataCollctionRequest::~DescribeDataCollctionRequest() {}

std::string DescribeDataCollctionRequest::getDataCollectionIdentity() const {
  return dataCollectionIdentity_;
}

void DescribeDataCollctionRequest::setDataCollectionIdentity(const std::string &dataCollectionIdentity) {
  dataCollectionIdentity_ = dataCollectionIdentity;
  setParameter(std::string("dataCollectionIdentity"), dataCollectionIdentity);
}

std::string DescribeDataCollctionRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void DescribeDataCollctionRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

