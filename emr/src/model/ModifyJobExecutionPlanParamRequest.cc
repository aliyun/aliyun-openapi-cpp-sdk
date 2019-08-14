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

#include <alibabacloud/emr/model/ModifyJobExecutionPlanParamRequest.h>

using AlibabaCloud::Emr::Model::ModifyJobExecutionPlanParamRequest;

ModifyJobExecutionPlanParamRequest::ModifyJobExecutionPlanParamRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyJobExecutionPlanParam")
{}

ModifyJobExecutionPlanParamRequest::~ModifyJobExecutionPlanParamRequest()
{}

long ModifyJobExecutionPlanParamRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyJobExecutionPlanParamRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyJobExecutionPlanParamRequest::getParamName()const
{
	return paramName_;
}

void ModifyJobExecutionPlanParamRequest::setParamName(const std::string& paramName)
{
	paramName_ = paramName;
	setCoreParameter("ParamName", paramName);
}

std::string ModifyJobExecutionPlanParamRequest::getParamValue()const
{
	return paramValue_;
}

void ModifyJobExecutionPlanParamRequest::setParamValue(const std::string& paramValue)
{
	paramValue_ = paramValue;
	setCoreParameter("ParamValue", paramValue);
}

long ModifyJobExecutionPlanParamRequest::getId()const
{
	return id_;
}

void ModifyJobExecutionPlanParamRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ModifyJobExecutionPlanParamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyJobExecutionPlanParamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

