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

#include <alibabacloud/sas/model/GetLocalUninstallScriptRequest.h>

using AlibabaCloud::Sas::Model::GetLocalUninstallScriptRequest;

GetLocalUninstallScriptRequest::GetLocalUninstallScriptRequest() :
	RpcServiceRequest("sas", "2018-12-03", "GetLocalUninstallScript")
{
	setMethod(HttpRequest::Method::Post);
}

GetLocalUninstallScriptRequest::~GetLocalUninstallScriptRequest()
{}

std::string GetLocalUninstallScriptRequest::getUuid()const
{
	return uuid_;
}

void GetLocalUninstallScriptRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string GetLocalUninstallScriptRequest::getSourceIp()const
{
	return sourceIp_;
}

void GetLocalUninstallScriptRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

bool GetLocalUninstallScriptRequest::getInternalNetwork()const
{
	return internalNetwork_;
}

void GetLocalUninstallScriptRequest::setInternalNetwork(bool internalNetwork)
{
	internalNetwork_ = internalNetwork;
	setParameter("InternalNetwork", internalNetwork ? "true" : "false");
}

std::string GetLocalUninstallScriptRequest::getPlatformType()const
{
	return platformType_;
}

void GetLocalUninstallScriptRequest::setPlatformType(const std::string& platformType)
{
	platformType_ = platformType;
	setParameter("PlatformType", platformType);
}

