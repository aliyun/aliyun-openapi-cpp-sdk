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

#include <alibabacloud/arms/model/ListCmsInstancesRequest.h>

using AlibabaCloud::ARMS::Model::ListCmsInstancesRequest;

ListCmsInstancesRequest::ListCmsInstancesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListCmsInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListCmsInstancesRequest::~ListCmsInstancesRequest() {}

std::string ListCmsInstancesRequest::getTypeFilter() const {
  return typeFilter_;
}

void ListCmsInstancesRequest::setTypeFilter(const std::string &typeFilter) {
  typeFilter_ = typeFilter;
  setParameter(std::string("TypeFilter"), typeFilter);
}

std::string ListCmsInstancesRequest::getRegionId() const {
  return regionId_;
}

void ListCmsInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListCmsInstancesRequest::getClusterId() const {
  return clusterId_;
}

void ListCmsInstancesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

