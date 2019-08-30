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

#include <alibabacloud/ros/model/CreateStackRequest.h>

using AlibabaCloud::ROS::Model::CreateStackRequest;

CreateStackRequest::CreateStackRequest() :
	RpcServiceRequest("ros", "2019-09-10", "CreateStack")
{}

CreateStackRequest::~CreateStackRequest()
{}

std::string CreateStackRequest::getClientToken()const
{
	return clientToken_;
}

void CreateStackRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateStackRequest::getTemplateBody()const
{
	return templateBody_;
}

void CreateStackRequest::setTemplateBody(const std::string& templateBody)
{
	templateBody_ = templateBody;
	setCoreParameter("TemplateBody", templateBody);
}

bool CreateStackRequest::getDisableRollback()const
{
	return disableRollback_;
}

void CreateStackRequest::setDisableRollback(bool disableRollback)
{
	disableRollback_ = disableRollback;
	setCoreParameter("DisableRollback", disableRollback ? "true" : "false");
}

long CreateStackRequest::getTimeoutInMinutes()const
{
	return timeoutInMinutes_;
}

void CreateStackRequest::setTimeoutInMinutes(long timeoutInMinutes)
{
	timeoutInMinutes_ = timeoutInMinutes;
	setCoreParameter("TimeoutInMinutes", std::to_string(timeoutInMinutes));
}

std::string CreateStackRequest::getOrderSource()const
{
	return orderSource_;
}

void CreateStackRequest::setOrderSource(const std::string& orderSource)
{
	orderSource_ = orderSource;
	setCoreParameter("OrderSource", orderSource);
}

std::string CreateStackRequest::getTemplateURL()const
{
	return templateURL_;
}

void CreateStackRequest::setTemplateURL(const std::string& templateURL)
{
	templateURL_ = templateURL;
	setCoreParameter("TemplateURL", templateURL);
}

std::string CreateStackRequest::getActivityId()const
{
	return activityId_;
}

void CreateStackRequest::setActivityId(const std::string& activityId)
{
	activityId_ = activityId;
	setCoreParameter("ActivityId", activityId);
}

std::vector<std::string> CreateStackRequest::getNotificationURLs()const
{
	return notificationURLs_;
}

void CreateStackRequest::setNotificationURLs(const std::vector<std::string>& notificationURLs)
{
	notificationURLs_ = notificationURLs;
	for(int i = 0; i!= notificationURLs.size(); i++)
		setCoreParameter("NotificationURLs."+ std::to_string(i), notificationURLs.at(i));
}

std::string CreateStackRequest::getStackPolicyURL()const
{
	return stackPolicyURL_;
}

void CreateStackRequest::setStackPolicyURL(const std::string& stackPolicyURL)
{
	stackPolicyURL_ = stackPolicyURL;
	setCoreParameter("StackPolicyURL", stackPolicyURL);
}

std::string CreateStackRequest::getRegionId()const
{
	return regionId_;
}

void CreateStackRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateStackRequest::getStackName()const
{
	return stackName_;
}

void CreateStackRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

std::vector<CreateStackRequest::Parameters> CreateStackRequest::getParameters()const
{
	return parameters_;
}

void CreateStackRequest::setParameters(const std::vector<Parameters>& parameters)
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

std::string CreateStackRequest::getStackPolicyBody()const
{
	return stackPolicyBody_;
}

void CreateStackRequest::setStackPolicyBody(const std::string& stackPolicyBody)
{
	stackPolicyBody_ = stackPolicyBody;
	setCoreParameter("StackPolicyBody", stackPolicyBody);
}

std::string CreateStackRequest::getChannelId()const
{
	return channelId_;
}

void CreateStackRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

