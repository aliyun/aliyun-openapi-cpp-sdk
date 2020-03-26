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

#include <alibabacloud/sas/model/PauseClientRequest.h>

using AlibabaCloud::Sas::Model::PauseClientRequest;

PauseClientRequest::PauseClientRequest() :
	RpcServiceRequest("sas", "2018-12-03", "PauseClient")
{
	setMethod(HttpRequest::Method::Post);
}

PauseClientRequest::~PauseClientRequest()
{}

std::string PauseClientRequest::getSourceIp()const
{
	return sourceIp_;
}

void PauseClientRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string PauseClientRequest::getAppName()const
{
	return appName_;
}

void PauseClientRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string PauseClientRequest::getValue()const
{
	return value_;
}

void PauseClientRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

std::string PauseClientRequest::getUuids()const
{
	return uuids_;
}

void PauseClientRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setParameter("Uuids", uuids);
}

