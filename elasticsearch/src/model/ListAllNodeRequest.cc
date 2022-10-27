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

#include <alibabacloud/elasticsearch/model/ListAllNodeRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListAllNodeRequest;

ListAllNodeRequest::ListAllNodeRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/nodes"};
  setMethod(HttpRequest::Method::Get);
}

ListAllNodeRequest::~ListAllNodeRequest() {}

string ListAllNodeRequest::getInstanceId() const {
  return instanceId_;
}

void ListAllNodeRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

boolean ListAllNodeRequest::getExtended() const {
  return extended_;
}

void ListAllNodeRequest::setExtended(boolean extended) {
  extended_ = extended;
  setParameter(std::string("extended"), std::to_string(extended));
}

