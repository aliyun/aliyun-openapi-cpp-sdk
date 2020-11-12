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

#include <alibabacloud/openanalytics-open/model/CreateUserNetConfigRequest.h>

using AlibabaCloud::Openanalytics_open::Model::CreateUserNetConfigRequest;

CreateUserNetConfigRequest::CreateUserNetConfigRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "CreateUserNetConfig")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserNetConfigRequest::~CreateUserNetConfigRequest()
{}

std::string CreateUserNetConfigRequest::getSwitchId()const
{
	return switchId_;
}

void CreateUserNetConfigRequest::setSwitchId(const std::string& switchId)
{
	switchId_ = switchId;
	setBodyParameter("SwitchId", switchId);
}

std::string CreateUserNetConfigRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateUserNetConfigRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setBodyParameter("SecurityGroupId", securityGroupId);
}

std::string CreateUserNetConfigRequest::getVcName()const
{
	return vcName_;
}

void CreateUserNetConfigRequest::setVcName(const std::string& vcName)
{
	vcName_ = vcName;
	setBodyParameter("VcName", vcName);
}

