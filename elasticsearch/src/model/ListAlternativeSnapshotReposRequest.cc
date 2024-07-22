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

#include <alibabacloud/elasticsearch/model/ListAlternativeSnapshotReposRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListAlternativeSnapshotReposRequest;

ListAlternativeSnapshotReposRequest::ListAlternativeSnapshotReposRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/alternative-snapshot-repos"};
  setMethod(HttpRequest::Method::Get);
}

ListAlternativeSnapshotReposRequest::~ListAlternativeSnapshotReposRequest() {}

std::string ListAlternativeSnapshotReposRequest::getInstanceId() const {
  return instanceId_;
}

void ListAlternativeSnapshotReposRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool ListAlternativeSnapshotReposRequest::getAlreadySetItems() const {
  return alreadySetItems_;
}

void ListAlternativeSnapshotReposRequest::setAlreadySetItems(bool alreadySetItems) {
  alreadySetItems_ = alreadySetItems;
  setParameter(std::string("alreadySetItems"), alreadySetItems ? "true" : "false");
}

