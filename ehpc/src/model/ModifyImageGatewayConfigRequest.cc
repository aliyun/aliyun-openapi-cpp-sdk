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

#include <alibabacloud/ehpc/model/ModifyImageGatewayConfigRequest.h>

using AlibabaCloud::EHPC::Model::ModifyImageGatewayConfigRequest;

ModifyImageGatewayConfigRequest::ModifyImageGatewayConfigRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ModifyImageGatewayConfig")
{}

ModifyImageGatewayConfigRequest::~ModifyImageGatewayConfigRequest()
{}

std::vector<ModifyImageGatewayConfigRequest::Repo> ModifyImageGatewayConfigRequest::getRepo()const
{
	return repo_;
}

void ModifyImageGatewayConfigRequest::setRepo(const std::vector<Repo>& repo)
{
	repo_ = repo;
	int i = 0;
	for(int i = 0; i!= repo.size(); i++)	{
		auto obj = repo.at(i);
		std::string str ="Repo."+ std::to_string(i);
		setCoreParameter(str + ".Auth", obj.auth);
		setCoreParameter(str + ".Location", obj.location);
		setCoreParameter(str + ".URL", obj.uRL);
	}
}

std::string ModifyImageGatewayConfigRequest::getDBServerInfo()const
{
	return dBServerInfo_;
}

void ModifyImageGatewayConfigRequest::setDBServerInfo(const std::string& dBServerInfo)
{
	dBServerInfo_ = dBServerInfo;
	setCoreParameter("DBServerInfo", dBServerInfo);
}

std::string ModifyImageGatewayConfigRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyImageGatewayConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyImageGatewayConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyImageGatewayConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyImageGatewayConfigRequest::getDefaultRepoLocation()const
{
	return defaultRepoLocation_;
}

void ModifyImageGatewayConfigRequest::setDefaultRepoLocation(const std::string& defaultRepoLocation)
{
	defaultRepoLocation_ = defaultRepoLocation;
	setCoreParameter("DefaultRepoLocation", defaultRepoLocation);
}

std::string ModifyImageGatewayConfigRequest::getDBPassword()const
{
	return dBPassword_;
}

void ModifyImageGatewayConfigRequest::setDBPassword(const std::string& dBPassword)
{
	dBPassword_ = dBPassword;
	setCoreParameter("DBPassword", dBPassword);
}

std::string ModifyImageGatewayConfigRequest::getDBType()const
{
	return dBType_;
}

void ModifyImageGatewayConfigRequest::setDBType(const std::string& dBType)
{
	dBType_ = dBType;
	setCoreParameter("DBType", dBType);
}

std::string ModifyImageGatewayConfigRequest::getDBUsername()const
{
	return dBUsername_;
}

void ModifyImageGatewayConfigRequest::setDBUsername(const std::string& dBUsername)
{
	dBUsername_ = dBUsername;
	setCoreParameter("DBUsername", dBUsername);
}

int ModifyImageGatewayConfigRequest::getPullUpdateTimeout()const
{
	return pullUpdateTimeout_;
}

void ModifyImageGatewayConfigRequest::setPullUpdateTimeout(int pullUpdateTimeout)
{
	pullUpdateTimeout_ = pullUpdateTimeout;
	setCoreParameter("PullUpdateTimeout", std::to_string(pullUpdateTimeout));
}

std::string ModifyImageGatewayConfigRequest::getImageExpirationTimeout()const
{
	return imageExpirationTimeout_;
}

void ModifyImageGatewayConfigRequest::setImageExpirationTimeout(const std::string& imageExpirationTimeout)
{
	imageExpirationTimeout_ = imageExpirationTimeout;
	setCoreParameter("ImageExpirationTimeout", imageExpirationTimeout);
}

