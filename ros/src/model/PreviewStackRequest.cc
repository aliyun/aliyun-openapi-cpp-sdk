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

#include <alibabacloud/ros/model/PreviewStackRequest.h>

using AlibabaCloud::ROS::Model::PreviewStackRequest;

PreviewStackRequest::PreviewStackRequest() :
	RpcServiceRequest("ros", "2019-09-10", "PreviewStack")
{}

PreviewStackRequest::~PreviewStackRequest()
{}

std::string PreviewStackRequest::getStackPolicyURL()const
{
	return stackPolicyURL_;
}

void PreviewStackRequest::setStackPolicyURL(const std::string& stackPolicyURL)
{
	stackPolicyURL_ = stackPolicyURL;
	setCoreParameter("StackPolicyURL", stackPolicyURL);
}

std::string PreviewStackRequest::getRegionId()const
{
	return regionId_;
}

void PreviewStackRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreviewStackRequest::getClientToken()const
{
	return clientToken_;
}

void PreviewStackRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreviewStackRequest::getTemplateBody()const
{
	return templateBody_;
}

void PreviewStackRequest::setTemplateBody(const std::string& templateBody)
{
	templateBody_ = templateBody;
	setCoreParameter("TemplateBody", templateBody);
}

bool PreviewStackRequest::getDisableRollback()const
{
	return disableRollback_;
}

void PreviewStackRequest::setDisableRollback(bool disableRollback)
{
	disableRollback_ = disableRollback;
	setCoreParameter("DisableRollback", disableRollback ? "true" : "false");
}

std::string PreviewStackRequest::getStackName()const
{
	return stackName_;
}

void PreviewStackRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

std::vector<PreviewStackRequest::Parameters> PreviewStackRequest::getParameters()const
{
	return parameters_;
}

void PreviewStackRequest::setParameters(const std::vector<Parameters>& parameters)
{
	parameters_ = parameters;
	int i = 0;
	for(int i = 0; i!= parameters.size(); i++)	{
		auto obj = parameters.at(i);
		std::string str ="Parameters."+ std::to_string(i);
		setCoreParameter(str + ".ParameterValue", obj.parameterValue);
		setCoreParameter(str + ".ParameterKey", obj.parameterKey);
	}
}

std::string PreviewStackRequest::getStackPolicyBody()const
{
	return stackPolicyBody_;
}

void PreviewStackRequest::setStackPolicyBody(const std::string& stackPolicyBody)
{
	stackPolicyBody_ = stackPolicyBody;
	setCoreParameter("StackPolicyBody", stackPolicyBody);
}

long PreviewStackRequest::getTimeoutInMinutes()const
{
	return timeoutInMinutes_;
}

void PreviewStackRequest::setTimeoutInMinutes(long timeoutInMinutes)
{
	timeoutInMinutes_ = timeoutInMinutes;
	setCoreParameter("TimeoutInMinutes", std::to_string(timeoutInMinutes));
}

std::string PreviewStackRequest::getTemplateURL()const
{
	return templateURL_;
}

void PreviewStackRequest::setTemplateURL(const std::string& templateURL)
{
	templateURL_ = templateURL;
	setCoreParameter("TemplateURL", templateURL);
}

