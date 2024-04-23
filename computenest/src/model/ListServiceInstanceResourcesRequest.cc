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

#include <alibabacloud/computenest/model/ListServiceInstanceResourcesRequest.h>

using AlibabaCloud::ComputeNest::Model::ListServiceInstanceResourcesRequest;

ListServiceInstanceResourcesRequest::ListServiceInstanceResourcesRequest()
    : RpcServiceRequest("computenest", "2021-06-01", "ListServiceInstanceResources") {
  setMethod(HttpRequest::Method::Post);
}

ListServiceInstanceResourcesRequest::~ListServiceInstanceResourcesRequest() {}

std::string ListServiceInstanceResourcesRequest::getExpireTimeEnd() const {
  return expireTimeEnd_;
}

void ListServiceInstanceResourcesRequest::setExpireTimeEnd(const std::string &expireTimeEnd) {
  expireTimeEnd_ = expireTimeEnd;
  setParameter(std::string("ExpireTimeEnd"), expireTimeEnd);
}

std::string ListServiceInstanceResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListServiceInstanceResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListServiceInstanceResourcesRequest::getRegionId() const {
  return regionId_;
}

void ListServiceInstanceResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListServiceInstanceResourcesRequest::getServiceInstanceResourceType() const {
  return serviceInstanceResourceType_;
}

void ListServiceInstanceResourcesRequest::setServiceInstanceResourceType(const std::string &serviceInstanceResourceType) {
  serviceInstanceResourceType_ = serviceInstanceResourceType;
  setParameter(std::string("ServiceInstanceResourceType"), serviceInstanceResourceType);
}

std::vector<std::string> ListServiceInstanceResourcesRequest::getResourceARN() const {
  return resourceARN_;
}

void ListServiceInstanceResourcesRequest::setResourceARN(const std::vector<std::string> &resourceARN) {
  resourceARN_ = resourceARN;
}

std::vector<ListServiceInstanceResourcesRequest::Tag> ListServiceInstanceResourcesRequest::getTag() const {
  return tag_;
}

void ListServiceInstanceResourcesRequest::setTag(const std::vector<ListServiceInstanceResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListServiceInstanceResourcesRequest::getServiceInstanceId() const {
  return serviceInstanceId_;
}

void ListServiceInstanceResourcesRequest::setServiceInstanceId(const std::string &serviceInstanceId) {
  serviceInstanceId_ = serviceInstanceId;
  setParameter(std::string("ServiceInstanceId"), serviceInstanceId);
}

std::string ListServiceInstanceResourcesRequest::getExpireTimeStart() const {
  return expireTimeStart_;
}

void ListServiceInstanceResourcesRequest::setExpireTimeStart(const std::string &expireTimeStart) {
  expireTimeStart_ = expireTimeStart;
  setParameter(std::string("ExpireTimeStart"), expireTimeStart);
}

int ListServiceInstanceResourcesRequest::getMaxResults() const {
  return maxResults_;
}

void ListServiceInstanceResourcesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListServiceInstanceResourcesRequest::getPayType() const {
  return payType_;
}

void ListServiceInstanceResourcesRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

