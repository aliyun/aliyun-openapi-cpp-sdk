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

#include <alibabacloud/mse/model/ListClustersRequest.h>

using AlibabaCloud::Mse::Model::ListClustersRequest;

ListClustersRequest::ListClustersRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListClusters") {
  setMethod(HttpRequest::Method::Post);
}

ListClustersRequest::~ListClustersRequest() {}

std::string ListClustersRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListClustersRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListClustersRequest::getPageNum() const {
  return pageNum_;
}

void ListClustersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListClustersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListClustersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListClustersRequest::getRegionId() const {
  return regionId_;
}

void ListClustersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListClustersRequest::getRequestPars() const {
  return requestPars_;
}

void ListClustersRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListClustersRequest::getPageSize() const {
  return pageSize_;
}

void ListClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListClustersRequest::Tag> ListClustersRequest::getTag() const {
  return tag_;
}

void ListClustersRequest::setTag(const std::vector<ListClustersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListClustersRequest::getClusterAliasName() const {
  return clusterAliasName_;
}

void ListClustersRequest::setClusterAliasName(const std::string &clusterAliasName) {
  clusterAliasName_ = clusterAliasName;
  setParameter(std::string("ClusterAliasName"), clusterAliasName);
}

std::string ListClustersRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListClustersRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

