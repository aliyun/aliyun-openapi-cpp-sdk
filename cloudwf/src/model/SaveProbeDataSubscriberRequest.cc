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

#include <alibabacloud/cloudwf/model/SaveProbeDataSubscriberRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveProbeDataSubscriberRequest;

SaveProbeDataSubscriberRequest::SaveProbeDataSubscriberRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveProbeDataSubscriber")
{}

SaveProbeDataSubscriberRequest::~SaveProbeDataSubscriberRequest()
{}

std::string SaveProbeDataSubscriberRequest::getApiUrl()const
{
	return apiUrl_;
}

void SaveProbeDataSubscriberRequest::setApiUrl(const std::string& apiUrl)
{
	apiUrl_ = apiUrl;
	setCoreParameter("ApiUrl", std::to_string(apiUrl));
}

std::string SaveProbeDataSubscriberRequest::getParamGenScript()const
{
	return paramGenScript_;
}

void SaveProbeDataSubscriberRequest::setParamGenScript(const std::string& paramGenScript)
{
	paramGenScript_ = paramGenScript;
	setCoreParameter("ParamGenScript", std::to_string(paramGenScript));
}

std::string SaveProbeDataSubscriberRequest::getName()const
{
	return name_;
}

void SaveProbeDataSubscriberRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string SaveProbeDataSubscriberRequest::getHttpMethod()const
{
	return httpMethod_;
}

void SaveProbeDataSubscriberRequest::setHttpMethod(const std::string& httpMethod)
{
	httpMethod_ = httpMethod;
	setCoreParameter("HttpMethod", std::to_string(httpMethod));
}

std::string SaveProbeDataSubscriberRequest::getDescription()const
{
	return description_;
}

void SaveProbeDataSubscriberRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long SaveProbeDataSubscriberRequest::getId()const
{
	return id_;
}

void SaveProbeDataSubscriberRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

int SaveProbeDataSubscriberRequest::getType()const
{
	return type_;
}

void SaveProbeDataSubscriberRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string SaveProbeDataSubscriberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveProbeDataSubscriberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::vector<long> SaveProbeDataSubscriberRequest::getResourceIds()const
{
	return resourceIds_;
}

void SaveProbeDataSubscriberRequest::setResourceIds(const std::vector<long>& resourceIds)
{
	resourceIds_ = resourceIds;
	for(int i = 0; i!= resourceIds.size(); i++)
		setCoreParameter("ResourceIds."+ std::to_string(i), resourceIds.at(i));
}

