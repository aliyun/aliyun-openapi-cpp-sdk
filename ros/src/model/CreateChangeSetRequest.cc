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

#include <alibabacloud/ros/model/CreateChangeSetRequest.h>

using AlibabaCloud::ROS::Model::CreateChangeSetRequest;

CreateChangeSetRequest::CreateChangeSetRequest() :
	RpcServiceRequest("ros", "2019-09-10", "CreateChangeSet")
{}

CreateChangeSetRequest::~CreateChangeSetRequest()
{}

std::string CreateChangeSetRequest::getStackPolicyDuringUpdateURL()const
{
	return stackPolicyDuringUpdateURL_;
}

void CreateChangeSetRequest::setStackPolicyDuringUpdateURL(const std::string& stackPolicyDuringUpdateURL)
{
	stackPolicyDuringUpdateURL_ = stackPolicyDuringUpdateURL;
	setCoreParameter("StackPolicyDuringUpdateURL", stackPolicyDuringUpdateURL);
}

std::string CreateChangeSetRequest::getClientToken()const
{
	return clientToken_;
}

void CreateChangeSetRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateChangeSetRequest::getTemplateBody()const
{
	return templateBody_;
}

void CreateChangeSetRequest::setTemplateBody(const std::string& templateBody)
{
	templateBody_ = templateBody;
	setCoreParameter("TemplateBody", templateBody);
}

std::string CreateChangeSetRequest::getStackId()const
{
	return stackId_;
}

void CreateChangeSetRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

std::string CreateChangeSetRequest::getChangeSetType()const
{
	return changeSetType_;
}

void CreateChangeSetRequest::setChangeSetType(const std::string& changeSetType)
{
	changeSetType_ = changeSetType;
	setCoreParameter("ChangeSetType", changeSetType);
}

std::string CreateChangeSetRequest::getDescription()const
{
	return description_;
}

void CreateChangeSetRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

bool CreateChangeSetRequest::getDisableRollback()const
{
	return disableRollback_;
}

void CreateChangeSetRequest::setDisableRollback(bool disableRollback)
{
	disableRollback_ = disableRollback;
	setCoreParameter("DisableRollback", disableRollback ? "true" : "false");
}

std::string CreateChangeSetRequest::getUpdateAllowPolicy()const
{
	return updateAllowPolicy_;
}

void CreateChangeSetRequest::setUpdateAllowPolicy(const std::string& updateAllowPolicy)
{
	updateAllowPolicy_ = updateAllowPolicy;
	setCoreParameter("UpdateAllowPolicy", updateAllowPolicy);
}

long CreateChangeSetRequest::getTimeoutInMinutes()const
{
	return timeoutInMinutes_;
}

void CreateChangeSetRequest::setTimeoutInMinutes(long timeoutInMinutes)
{
	timeoutInMinutes_ = timeoutInMinutes;
	setCoreParameter("TimeoutInMinutes", std::to_string(timeoutInMinutes));
}

bool CreateChangeSetRequest::getUsePreviousParameters()const
{
	return usePreviousParameters_;
}

void CreateChangeSetRequest::setUsePreviousParameters(bool usePreviousParameters)
{
	usePreviousParameters_ = usePreviousParameters;
	setCoreParameter("UsePreviousParameters", usePreviousParameters ? "true" : "false");
}

std::string CreateChangeSetRequest::getTemplateURL()const
{
	return templateURL_;
}

void CreateChangeSetRequest::setTemplateURL(const std::string& templateURL)
{
	templateURL_ = templateURL;
	setCoreParameter("TemplateURL", templateURL);
}

std::string CreateChangeSetRequest::getOrderSource()const
{
	return orderSource_;
}

void CreateChangeSetRequest::setOrderSource(const std::string& orderSource)
{
	orderSource_ = orderSource;
	setCoreParameter("OrderSource", orderSource);
}

std::string CreateChangeSetRequest::getActivityId()const
{
	return activityId_;
}

void CreateChangeSetRequest::setActivityId(const std::string& activityId)
{
	activityId_ = activityId;
	setCoreParameter("ActivityId", activityId);
}

std::string CreateChangeSetRequest::getStackPolicyDuringUpdateBody()const
{
	return stackPolicyDuringUpdateBody_;
}

void CreateChangeSetRequest::setStackPolicyDuringUpdateBody(const std::string& stackPolicyDuringUpdateBody)
{
	stackPolicyDuringUpdateBody_ = stackPolicyDuringUpdateBody;
	setCoreParameter("StackPolicyDuringUpdateBody", stackPolicyDuringUpdateBody);
}

std::vector<std::string> CreateChangeSetRequest::getNotificationURLs()const
{
	return notificationURLs_;
}

void CreateChangeSetRequest::setNotificationURLs(const std::vector<std::string>& notificationURLs)
{
	notificationURLs_ = notificationURLs;
	for(int i = 0; i!= notificationURLs.size(); i++)
		setCoreParameter("NotificationURLs."+ std::to_string(i), notificationURLs.at(i));
}

std::string CreateChangeSetRequest::getStackPolicyURL()const
{
	return stackPolicyURL_;
}

void CreateChangeSetRequest::setStackPolicyURL(const std::string& stackPolicyURL)
{
	stackPolicyURL_ = stackPolicyURL;
	setCoreParameter("StackPolicyURL", stackPolicyURL);
}

std::string CreateChangeSetRequest::getRegionId()const
{
	return regionId_;
}

void CreateChangeSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateChangeSetRequest::getChangeSetName()const
{
	return changeSetName_;
}

void CreateChangeSetRequest::setChangeSetName(const std::string& changeSetName)
{
	changeSetName_ = changeSetName;
	setCoreParameter("ChangeSetName", changeSetName);
}

std::string CreateChangeSetRequest::getStackName()const
{
	return stackName_;
}

void CreateChangeSetRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

std::vector<CreateChangeSetRequest::Parameters> CreateChangeSetRequest::getParameters()const
{
	return parameters_;
}

void CreateChangeSetRequest::setParameters(const std::vector<Parameters>& parameters)
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

std::string CreateChangeSetRequest::getStackPolicyBody()const
{
	return stackPolicyBody_;
}

void CreateChangeSetRequest::setStackPolicyBody(const std::string& stackPolicyBody)
{
	stackPolicyBody_ = stackPolicyBody;
	setCoreParameter("StackPolicyBody", stackPolicyBody);
}

std::string CreateChangeSetRequest::getChannelId()const
{
	return channelId_;
}

void CreateChangeSetRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

