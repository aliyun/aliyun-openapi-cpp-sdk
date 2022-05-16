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

#include <alibabacloud/sae/model/DeleteConfigMapRequest.h>

using AlibabaCloud::Sae::Model::DeleteConfigMapRequest;

DeleteConfigMapRequest::DeleteConfigMapRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/configmap/configMap"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteConfigMapRequest::~DeleteConfigMapRequest() {}

long DeleteConfigMapRequest::getConfigMapId() const {
  return configMapId_;
}

void DeleteConfigMapRequest::setConfigMapId(long configMapId) {
  configMapId_ = configMapId;
  setParameter(std::string("ConfigMapId"), std::to_string(configMapId));
}

