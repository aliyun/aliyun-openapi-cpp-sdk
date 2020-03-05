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
{
	setMethod(HttpRequest::Method::GET);
}

ModifyImageGatewayConfigRequest::~ModifyImageGatewayConfigRequest()
{}

std::vector<ModifyImageGatewayConfigRequest::Repo> ModifyImageGatewayConfigRequest::getRepo()const
{
	return repo_;
}

void ModifyImageGatewayConfigRequest::setRepo(const std::vector<Repo>& repo)
{
	repo_ = repo;
	for(int dep1 = 0; dep1!= repo.size(); dep1++) {
		auto repoObj = repo.at(dep1);
		std::string repoObjStr = "Repo." + std::to_string(dep1 + 1);
		setParameter(repoObjStr + ".Auth", repoObj.auth);
		setParameter(repoObjStr + ".Location", repoObj.location);
		setParameter(repoObjStr + ".URL", repoObj.uRL);
	}
}

std::string ModifyImageGatewayConfigRequest::getDBServerInfo()const
{
	return dBServerInfo_;
}

void ModifyImageGatewayConfigRequest::setDBServerInfo(const std::string& dBServerInfo)
{
	dBServerInfo_ = dBServerInfo;
	setParameter("DBServerInfo", dBServerInfo);
}

std::string ModifyImageGatewayConfigRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyImageGatewayConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyImageGatewayConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyImageGatewayConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyImageGatewayConfigRequest::getDefaultRepoLocation()const
{
	return defaultRepoLocation_;
}

void ModifyImageGatewayConfigRequest::setDefaultRepoLocation(const std::string& defaultRepoLocation)
{
	defaultRepoLocation_ = defaultRepoLocation;
	setParameter("DefaultRepoLocation", defaultRepoLocation);
}

std::string ModifyImageGatewayConfigRequest::getDBPassword()const
{
	return dBPassword_;
}

void ModifyImageGatewayConfigRequest::setDBPassword(const std::string& dBPassword)
{
	dBPassword_ = dBPassword;
	setParameter("DBPassword", dBPassword);
}

std::string ModifyImageGatewayConfigRequest::getDBType()const
{
	return dBType_;
}

void ModifyImageGatewayConfigRequest::setDBType(const std::string& dBType)
{
	dBType_ = dBType;
	setParameter("DBType", dBType);
}

std::string ModifyImageGatewayConfigRequest::getDBUsername()const
{
	return dBUsername_;
}

void ModifyImageGatewayConfigRequest::setDBUsername(const std::string& dBUsername)
{
	dBUsername_ = dBUsername;
	setParameter("DBUsername", dBUsername);
}

int ModifyImageGatewayConfigRequest::getPullUpdateTimeout()const
{
	return pullUpdateTimeout_;
}

void ModifyImageGatewayConfigRequest::setPullUpdateTimeout(int pullUpdateTimeout)
{
	pullUpdateTimeout_ = pullUpdateTimeout;
	setParameter("PullUpdateTimeout", std::to_string(pullUpdateTimeout));
}

std::string ModifyImageGatewayConfigRequest::getImageExpirationTimeout()const
{
	return imageExpirationTimeout_;
}

void ModifyImageGatewayConfigRequest::setImageExpirationTimeout(const std::string& imageExpirationTimeout)
{
	imageExpirationTimeout_ = imageExpirationTimeout;
	setParameter("ImageExpirationTimeout", imageExpirationTimeout);
}

