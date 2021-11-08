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

#include <alibabacloud/elasticsearch/model/UpdateApmRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateApmRequest;

UpdateApmRequest::UpdateApmRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/apm/[instanceId]");
	setMethod(HttpRequest::Method::Put);
}

UpdateApmRequest::~UpdateApmRequest()
{}

std::string UpdateApmRequest::getOutputES()const
{
	return outputES_;
}

void UpdateApmRequest::setOutputES(const std::string& outputES)
{
	outputES_ = outputES;
	setParameter("OutputES", outputES);
}

std::string UpdateApmRequest::getOutputESPassword()const
{
	return outputESPassword_;
}

void UpdateApmRequest::setOutputESPassword(const std::string& outputESPassword)
{
	outputESPassword_ = outputESPassword;
	setParameter("OutputESPassword", outputESPassword);
}

std::string UpdateApmRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateApmRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateApmRequest::getYml()const
{
	return yml_;
}

void UpdateApmRequest::setYml(const std::string& yml)
{
	yml_ = yml;
	setParameter("Yml", yml);
}

std::string UpdateApmRequest::getOutputESUserName()const
{
	return outputESUserName_;
}

void UpdateApmRequest::setOutputESUserName(const std::string& outputESUserName)
{
	outputESUserName_ = outputESUserName;
	setParameter("OutputESUserName", outputESUserName);
}

std::string UpdateApmRequest::getToken()const
{
	return token_;
}

void UpdateApmRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

