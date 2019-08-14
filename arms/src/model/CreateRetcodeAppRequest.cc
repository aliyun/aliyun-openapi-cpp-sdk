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

#include <alibabacloud/arms/model/CreateRetcodeAppRequest.h>

using AlibabaCloud::ARMS::Model::CreateRetcodeAppRequest;

CreateRetcodeAppRequest::CreateRetcodeAppRequest() :
	RpcServiceRequest("arms", "2019-08-08", "CreateRetcodeApp")
{}

CreateRetcodeAppRequest::~CreateRetcodeAppRequest()
{}

std::string CreateRetcodeAppRequest::getRegionId()const
{
	return regionId_;
}

void CreateRetcodeAppRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateRetcodeAppRequest::getRetcodeAppName()const
{
	return retcodeAppName_;
}

void CreateRetcodeAppRequest::setRetcodeAppName(const std::string& retcodeAppName)
{
	retcodeAppName_ = retcodeAppName;
	setCoreParameter("RetcodeAppName", retcodeAppName);
}

std::string CreateRetcodeAppRequest::getRetcodeAppType()const
{
	return retcodeAppType_;
}

void CreateRetcodeAppRequest::setRetcodeAppType(const std::string& retcodeAppType)
{
	retcodeAppType_ = retcodeAppType;
	setCoreParameter("RetcodeAppType", retcodeAppType);
}

