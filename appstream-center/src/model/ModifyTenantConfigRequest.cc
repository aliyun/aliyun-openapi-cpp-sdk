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

#include <alibabacloud/appstream-center/model/ModifyTenantConfigRequest.h>

using AlibabaCloud::Appstream_center::Model::ModifyTenantConfigRequest;

ModifyTenantConfigRequest::ModifyTenantConfigRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ModifyTenantConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantConfigRequest::~ModifyTenantConfigRequest() {}

bool ModifyTenantConfigRequest::getAppInstanceGroupExpireRemind() const {
  return appInstanceGroupExpireRemind_;
}

void ModifyTenantConfigRequest::setAppInstanceGroupExpireRemind(bool appInstanceGroupExpireRemind) {
  appInstanceGroupExpireRemind_ = appInstanceGroupExpireRemind;
  setBodyParameter(std::string("AppInstanceGroupExpireRemind"), appInstanceGroupExpireRemind ? "true" : "false");
}

