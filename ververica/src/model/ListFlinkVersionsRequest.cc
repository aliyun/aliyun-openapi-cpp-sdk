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

#include <alibabacloud/ververica/model/ListFlinkVersionsRequest.h>

using AlibabaCloud::Ververica::Model::ListFlinkVersionsRequest;

ListFlinkVersionsRequest::ListFlinkVersionsRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/api/v1/flink-version-meta.json"};
  setMethod(HttpRequest::Method::Get);
}

ListFlinkVersionsRequest::~ListFlinkVersionsRequest() {}

std::string ListFlinkVersionsRequest::getWorkspace() const {
  return workspace_;
}

void ListFlinkVersionsRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

