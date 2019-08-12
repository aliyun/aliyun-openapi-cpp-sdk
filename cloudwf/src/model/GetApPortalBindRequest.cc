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

#include <alibabacloud/cloudwf/model/GetApPortalBindRequest.h>

using AlibabaCloud::Cloudwf::Model::GetApPortalBindRequest;

GetApPortalBindRequest::GetApPortalBindRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetApPortalBind")
{}

GetApPortalBindRequest::~GetApPortalBindRequest()
{}

int GetApPortalBindRequest::getConfigType()const
{
	return configType_;
}

void GetApPortalBindRequest::setConfigType(int configType)
{
	configType_ = configType;
	setCoreParameter("ConfigType", configType);
}

long GetApPortalBindRequest::getBindId()const
{
	return bindId_;
}

void GetApPortalBindRequest::setBindId(long bindId)
{
	bindId_ = bindId;
	setCoreParameter("BindId", bindId);
}

std::string GetApPortalBindRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetApPortalBindRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

