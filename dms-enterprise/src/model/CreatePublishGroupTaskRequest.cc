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

#include <alibabacloud/dms-enterprise/model/CreatePublishGroupTaskRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreatePublishGroupTaskRequest;

CreatePublishGroupTaskRequest::CreatePublishGroupTaskRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreatePublishGroupTask") {
  setMethod(HttpRequest::Method::Post);
}

CreatePublishGroupTaskRequest::~CreatePublishGroupTaskRequest() {}

long CreatePublishGroupTaskRequest::getTid() const {
  return tid_;
}

void CreatePublishGroupTaskRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreatePublishGroupTaskRequest::getPlanTime() const {
  return planTime_;
}

void CreatePublishGroupTaskRequest::setPlanTime(const std::string &planTime) {
  planTime_ = planTime;
  setParameter(std::string("PlanTime"), planTime);
}

std::string CreatePublishGroupTaskRequest::getPublishStrategy() const {
  return publishStrategy_;
}

void CreatePublishGroupTaskRequest::setPublishStrategy(const std::string &publishStrategy) {
  publishStrategy_ = publishStrategy;
  setParameter(std::string("PublishStrategy"), publishStrategy);
}

long CreatePublishGroupTaskRequest::getOrderId() const {
  return orderId_;
}

void CreatePublishGroupTaskRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

int CreatePublishGroupTaskRequest::getDbId() const {
  return dbId_;
}

void CreatePublishGroupTaskRequest::setDbId(int dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), std::to_string(dbId));
}

bool CreatePublishGroupTaskRequest::getLogic() const {
  return logic_;
}

void CreatePublishGroupTaskRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

