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

#include <alibabacloud/emr/model/ModifyUserStatisticsRequest.h>

using AlibabaCloud::Emr::Model::ModifyUserStatisticsRequest;

ModifyUserStatisticsRequest::ModifyUserStatisticsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyUserStatistics")
{}

ModifyUserStatisticsRequest::~ModifyUserStatisticsRequest()
{}

int ModifyUserStatisticsRequest::getJobMigratedNum()const
{
	return jobMigratedNum_;
}

void ModifyUserStatisticsRequest::setJobMigratedNum(int jobMigratedNum)
{
	jobMigratedNum_ = jobMigratedNum;
	setParameter("JobMigratedNum", std::to_string(jobMigratedNum));
}

long ModifyUserStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyUserStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyUserStatisticsRequest::getExecutePlanNum()const
{
	return executePlanNum_;
}

void ModifyUserStatisticsRequest::setExecutePlanNum(int executePlanNum)
{
	executePlanNum_ = executePlanNum;
	setParameter("ExecutePlanNum", std::to_string(executePlanNum));
}

std::string ModifyUserStatisticsRequest::getRegionId()const
{
	return regionId_;
}

void ModifyUserStatisticsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ModifyUserStatisticsRequest::getJobNum()const
{
	return jobNum_;
}

void ModifyUserStatisticsRequest::setJobNum(int jobNum)
{
	jobNum_ = jobNum;
	setParameter("JobNum", std::to_string(jobNum));
}

int ModifyUserStatisticsRequest::getExecutePlanMigratedNum()const
{
	return executePlanMigratedNum_;
}

void ModifyUserStatisticsRequest::setExecutePlanMigratedNum(int executePlanMigratedNum)
{
	executePlanMigratedNum_ = executePlanMigratedNum;
	setParameter("ExecutePlanMigratedNum", std::to_string(executePlanMigratedNum));
}

int ModifyUserStatisticsRequest::getInteractionJobMigratedNum()const
{
	return interactionJobMigratedNum_;
}

void ModifyUserStatisticsRequest::setInteractionJobMigratedNum(int interactionJobMigratedNum)
{
	interactionJobMigratedNum_ = interactionJobMigratedNum;
	setParameter("InteractionJobMigratedNum", std::to_string(interactionJobMigratedNum));
}

std::string ModifyUserStatisticsRequest::getUserId()const
{
	return userId_;
}

void ModifyUserStatisticsRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string ModifyUserStatisticsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyUserStatisticsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ModifyUserStatisticsRequest::getInteractionJobNum()const
{
	return interactionJobNum_;
}

void ModifyUserStatisticsRequest::setInteractionJobNum(int interactionJobNum)
{
	interactionJobNum_ = interactionJobNum;
	setParameter("InteractionJobNum", std::to_string(interactionJobNum));
}

