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

#include <alibabacloud/elasticsearch/model/DeleteSnapshotRepoRequest.h>

using AlibabaCloud::Elasticsearch::Model::DeleteSnapshotRepoRequest;

DeleteSnapshotRepoRequest::DeleteSnapshotRepoRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/snapshot-repos"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteSnapshotRepoRequest::~DeleteSnapshotRepoRequest() {}

std::string DeleteSnapshotRepoRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteSnapshotRepoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteSnapshotRepoRequest::getClientToken() const {
  return clientToken_;
}

void DeleteSnapshotRepoRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), clientToken);
}

std::string DeleteSnapshotRepoRequest::getRepoPath() const {
  return repoPath_;
}

void DeleteSnapshotRepoRequest::setRepoPath(const std::string &repoPath) {
  repoPath_ = repoPath;
  setParameter(std::string("repoPath"), repoPath);
}

