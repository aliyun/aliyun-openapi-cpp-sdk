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

#include <alibabacloud/schedulerx3/model/ListClustersRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListClustersRequest;

ListClustersRequest::ListClustersRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListClusters") {
  setMethod(HttpRequest::Method::Get);
}

ListClustersRequest::~ListClustersRequest() {}

std::string ListClustersRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListClustersRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListClustersRequest::getClusterName() const {
  return clusterName_;
}

void ListClustersRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

int ListClustersRequest::getPageNum() const {
  return pageNum_;
}

void ListClustersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListClustersRequest::getPageSize() const {
  return pageSize_;
}

void ListClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListClustersRequest::getClusterId() const {
  return clusterId_;
}

void ListClustersRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

