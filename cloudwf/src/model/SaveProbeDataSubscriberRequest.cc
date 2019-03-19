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
	setParameter("ApiUrl", apiUrl);
}

std::string SaveProbeDataSubscriberRequest::getParamGenScript()const
{
	return paramGenScript_;
}

void SaveProbeDataSubscriberRequest::setParamGenScript(const std::string& paramGenScript)
{
	paramGenScript_ = paramGenScript;
	setParameter("ParamGenScript", paramGenScript);
}

std::string SaveProbeDataSubscriberRequest::getName()const
{
	return name_;
}

void SaveProbeDataSubscriberRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string SaveProbeDataSubscriberRequest::getHttpMethod()const
{
	return httpMethod_;
}

void SaveProbeDataSubscriberRequest::setHttpMethod(const std::string& httpMethod)
{
	httpMethod_ = httpMethod;
	setParameter("HttpMethod", httpMethod);
}

std::string SaveProbeDataSubscriberRequest::getDescription()const
{
	return description_;
}

void SaveProbeDataSubscriberRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long SaveProbeDataSubscriberRequest::getId()const
{
	return id_;
}

void SaveProbeDataSubscriberRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

int SaveProbeDataSubscriberRequest::getType()const
{
	return type_;
}

void SaveProbeDataSubscriberRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string SaveProbeDataSubscriberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveProbeDataSubscriberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<long> SaveProbeDataSubscriberRequest::getResourceIds()const
{
	return resourceIds_;
}

void SaveProbeDataSubscriberRequest::setResourceIds(const std::vector<long>& resourceIds)
{
	resourceIds_ = resourceIds;
	for(int i = 0; i!= resourceIds.size(); i++)
		setParameter("ResourceIds."+ std::to_string(i), std::to_string(resourceIds.at(i)));
}

