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

#include <alibabacloud/sas/model/GetLocalInstallScriptRequest.h>

using AlibabaCloud::Sas::Model::GetLocalInstallScriptRequest;

GetLocalInstallScriptRequest::GetLocalInstallScriptRequest() :
	RpcServiceRequest("sas", "2018-12-03", "GetLocalInstallScript")
{
	setMethod(HttpRequest::Method::Post);
}

GetLocalInstallScriptRequest::~GetLocalInstallScriptRequest()
{}

std::string GetLocalInstallScriptRequest::getUuid()const
{
	return uuid_;
}

void GetLocalInstallScriptRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string GetLocalInstallScriptRequest::getSourceIp()const
{
	return sourceIp_;
}

void GetLocalInstallScriptRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

bool GetLocalInstallScriptRequest::getInternalNetwork()const
{
	return internalNetwork_;
}

void GetLocalInstallScriptRequest::setInternalNetwork(bool internalNetwork)
{
	internalNetwork_ = internalNetwork;
	setParameter("InternalNetwork", internalNetwork ? "true" : "false");
}

std::string GetLocalInstallScriptRequest::getPlatformType()const
{
	return platformType_;
}

void GetLocalInstallScriptRequest::setPlatformType(const std::string& platformType)
{
	platformType_ = platformType;
	setParameter("PlatformType", platformType);
}

