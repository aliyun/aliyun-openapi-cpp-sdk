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

#include <alibabacloud/ccc/model/PickOutboundNumbersByTagsRequest.h>

using AlibabaCloud::CCC::Model::PickOutboundNumbersByTagsRequest;

PickOutboundNumbersByTagsRequest::PickOutboundNumbersByTagsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PickOutboundNumbersByTags")
{}

PickOutboundNumbersByTagsRequest::~PickOutboundNumbersByTagsRequest()
{}

std::vector<std::string> PickOutboundNumbersByTagsRequest::getPrioritizedCallerArea()const
{
	return prioritizedCallerArea_;
}

void PickOutboundNumbersByTagsRequest::setPrioritizedCallerArea(const std::vector<std::string>& prioritizedCallerArea)
{
	prioritizedCallerArea_ = prioritizedCallerArea;
	for(int i = 0; i!= prioritizedCallerArea.size(); i++)
		setCoreParameter("PrioritizedCallerArea."+ std::to_string(i), prioritizedCallerArea.at(i));
}

int PickOutboundNumbersByTagsRequest::getCount()const
{
	return count_;
}

void PickOutboundNumbersByTagsRequest::setCount(int count)
{
	count_ = count;
	setCoreParameter("Count", std::to_string(count));
}

std::string PickOutboundNumbersByTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PickOutboundNumbersByTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PickOutboundNumbersByTagsRequest::getInstanceId()const
{
	return instanceId_;
}

void PickOutboundNumbersByTagsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> PickOutboundNumbersByTagsRequest::getServiceTag()const
{
	return serviceTag_;
}

void PickOutboundNumbersByTagsRequest::setServiceTag(const std::vector<std::string>& serviceTag)
{
	serviceTag_ = serviceTag;
	for(int i = 0; i!= serviceTag.size(); i++)
		setCoreParameter("ServiceTag."+ std::to_string(i), serviceTag.at(i));
}

std::vector<std::string> PickOutboundNumbersByTagsRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void PickOutboundNumbersByTagsRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int i = 0; i!= skillGroupId.size(); i++)
		setCoreParameter("SkillGroupId."+ std::to_string(i), skillGroupId.at(i));
}

std::string PickOutboundNumbersByTagsRequest::getCalleeNumber()const
{
	return calleeNumber_;
}

void PickOutboundNumbersByTagsRequest::setCalleeNumber(const std::string& calleeNumber)
{
	calleeNumber_ = calleeNumber;
	setCoreParameter("CalleeNumber", calleeNumber);
}

