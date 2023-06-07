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

#include <alibabacloud/schedulerx2/model/ListGroupsRequest.h>

using AlibabaCloud::Schedulerx2::Model::ListGroupsRequest;

ListGroupsRequest::ListGroupsRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "ListGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListGroupsRequest::~ListGroupsRequest() {}

std::string ListGroupsRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void ListGroupsRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string ListGroupsRequest::getAppGroupName() const {
  return appGroupName_;
}

void ListGroupsRequest::setAppGroupName(const std::string &appGroupName) {
  appGroupName_ = appGroupName;
  setParameter(std::string("AppGroupName"), appGroupName);
}

std::string ListGroupsRequest::getRegionId() const {
  return regionId_;
}

void ListGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListGroupsRequest::get_Namespace() const {
  return _namespace_;
}

void ListGroupsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

