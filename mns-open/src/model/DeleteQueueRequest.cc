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

#include <alibabacloud/mns-open/model/DeleteQueueRequest.h>

using AlibabaCloud::Mns_open::Model::DeleteQueueRequest;

DeleteQueueRequest::DeleteQueueRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "DeleteQueue") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQueueRequest::~DeleteQueueRequest() {}

std::string DeleteQueueRequest::getQueueName() const {
  return queueName_;
}

void DeleteQueueRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setParameter(std::string("QueueName"), queueName);
}

