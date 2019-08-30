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

#include <alibabacloud/ros/model/UpdateStackRequest.h>

using AlibabaCloud::ROS::Model::UpdateStackRequest;

UpdateStackRequest::UpdateStackRequest() :
	RpcServiceRequest("ros", "2019-09-10", "UpdateStack")
{}

UpdateStackRequest::~UpdateStackRequest()
{}

std::string UpdateStackRequest::getStackPolicyDuringUpdateURL()const
{
	return stackPolicyDuringUpdateURL_;
}

void UpdateStackRequest::setStackPolicyDuringUpdateURL(const std::string& stackPolicyDuringUpdateURL)
{
	stackPolicyDuringUpdateURL_ = stackPolicyDuringUpdateURL;
	setCoreParameter("StackPolicyDuringUpdateURL", stackPolicyDuringUpdateURL);
}

std::string UpdateStackRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateStackRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string UpdateStackRequest::getTemplateBody()const
{
	return templateBody_;
}

void UpdateStackRequest::setTemplateBody(const std::string& templateBody)
{
	templateBody_ = templateBody;
	setCoreParameter("TemplateBody", templateBody);
}

std::string UpdateStackRequest::getStackId()const
{
	return stackId_;
}

void UpdateStackRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

bool UpdateStackRequest::getDisableRollback()const
{
	return disableRollback_;
}

void UpdateStackRequest::setDisableRollback(bool disableRollback)
{
	disableRollback_ = disableRollback;
	setCoreParameter("DisableRollback", disableRollback ? "true" : "false");
}

bool UpdateStackRequest::getEnableRecover()const
{
	return enableRecover_;
}

void UpdateStackRequest::setEnableRecover(bool enableRecover)
{
	enableRecover_ = enableRecover;
	setCoreParameter("EnableRecover", enableRecover ? "true" : "false");
}

std::string UpdateStackRequest::getUpdateAllowPolicy()const
{
	return updateAllowPolicy_;
}

void UpdateStackRequest::setUpdateAllowPolicy(const std::string& updateAllowPolicy)
{
	updateAllowPolicy_ = updateAllowPolicy;
	setCoreParameter("UpdateAllowPolicy", updateAllowPolicy);
}

long UpdateStackRequest::getTimeoutInMinutes()const
{
	return timeoutInMinutes_;
}

void UpdateStackRequest::setTimeoutInMinutes(long timeoutInMinutes)
{
	timeoutInMinutes_ = timeoutInMinutes;
	setCoreParameter("TimeoutInMinutes", std::to_string(timeoutInMinutes));
}

bool UpdateStackRequest::getUsePreviousParameters()const
{
	return usePreviousParameters_;
}

void UpdateStackRequest::setUsePreviousParameters(bool usePreviousParameters)
{
	usePreviousParameters_ = usePreviousParameters;
	setCoreParameter("UsePreviousParameters", usePreviousParameters ? "true" : "false");
}

std::string UpdateStackRequest::getTemplateURL()const
{
	return templateURL_;
}

void UpdateStackRequest::setTemplateURL(const std::string& templateURL)
{
	templateURL_ = templateURL;
	setCoreParameter("TemplateURL", templateURL);
}

std::string UpdateStackRequest::getStackPolicyDuringUpdateBody()const
{
	return stackPolicyDuringUpdateBody_;
}

void UpdateStackRequest::setStackPolicyDuringUpdateBody(const std::string& stackPolicyDuringUpdateBody)
{
	stackPolicyDuringUpdateBody_ = stackPolicyDuringUpdateBody;
	setCoreParameter("StackPolicyDuringUpdateBody", stackPolicyDuringUpdateBody);
}

std::string UpdateStackRequest::getStackPolicyURL()const
{
	return stackPolicyURL_;
}

void UpdateStackRequest::setStackPolicyURL(const std::string& stackPolicyURL)
{
	stackPolicyURL_ = stackPolicyURL;
	setCoreParameter("StackPolicyURL", stackPolicyURL);
}

std::string UpdateStackRequest::getRegionId()const
{
	return regionId_;
}

void UpdateStackRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<UpdateStackRequest::Parameters> UpdateStackRequest::getParameters()const
{
	return parameters_;
}

void UpdateStackRequest::setParameters(const std::vector<Parameters>& parameters)
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

std::string UpdateStackRequest::getStackPolicyBody()const
{
	return stackPolicyBody_;
}

void UpdateStackRequest::setStackPolicyBody(const std::string& stackPolicyBody)
{
	stackPolicyBody_ = stackPolicyBody;
	setCoreParameter("StackPolicyBody", stackPolicyBody);
}

