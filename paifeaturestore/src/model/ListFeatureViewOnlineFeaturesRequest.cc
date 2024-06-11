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

#include <alibabacloud/paifeaturestore/model/ListFeatureViewOnlineFeaturesRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListFeatureViewOnlineFeaturesRequest;

ListFeatureViewOnlineFeaturesRequest::ListFeatureViewOnlineFeaturesRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/featureviews/[FeatureViewId]/onlinefeatures"};
  setMethod(HttpRequest::Method::Get);
}

ListFeatureViewOnlineFeaturesRequest::~ListFeatureViewOnlineFeaturesRequest() {}

std::string ListFeatureViewOnlineFeaturesRequest::getInstanceId() const {
  return instanceId_;
}

void ListFeatureViewOnlineFeaturesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListFeatureViewOnlineFeaturesRequest::getJoinIds() const {
  return joinIds_;
}

void ListFeatureViewOnlineFeaturesRequest::setJoinIds(const std::string &joinIds) {
  joinIds_ = joinIds;
  setParameter(std::string("JoinIds"), joinIds);
}

std::string ListFeatureViewOnlineFeaturesRequest::getFeatureViewId() const {
  return featureViewId_;
}

void ListFeatureViewOnlineFeaturesRequest::setFeatureViewId(const std::string &featureViewId) {
  featureViewId_ = featureViewId;
  setParameter(std::string("FeatureViewId"), featureViewId);
}

