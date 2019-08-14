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

#include <alibabacloud/ons/model/OnsMessagePageQueryByTopicRequest.h>

using AlibabaCloud::Ons::Model::OnsMessagePageQueryByTopicRequest;

OnsMessagePageQueryByTopicRequest::OnsMessagePageQueryByTopicRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMessagePageQueryByTopic")
{}

OnsMessagePageQueryByTopicRequest::~OnsMessagePageQueryByTopicRequest()
{}

std::string OnsMessagePageQueryByTopicRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMessagePageQueryByTopicRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int OnsMessagePageQueryByTopicRequest::getPageSize()const
{
	return pageSize_;
}

void OnsMessagePageQueryByTopicRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string OnsMessagePageQueryByTopicRequest::getTopic()const
{
	return topic_;
}

void OnsMessagePageQueryByTopicRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", topic);
}

long OnsMessagePageQueryByTopicRequest::getEndTime()const
{
	return endTime_;
}

void OnsMessagePageQueryByTopicRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long OnsMessagePageQueryByTopicRequest::getBeginTime()const
{
	return beginTime_;
}

void OnsMessagePageQueryByTopicRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setCoreParameter("BeginTime", std::to_string(beginTime));
}

int OnsMessagePageQueryByTopicRequest::getCurrentPage()const
{
	return currentPage_;
}

void OnsMessagePageQueryByTopicRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string OnsMessagePageQueryByTopicRequest::getTaskId()const
{
	return taskId_;
}

void OnsMessagePageQueryByTopicRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

