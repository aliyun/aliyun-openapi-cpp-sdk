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

#include <alibabacloud/emr/model/RunETLJobRequest.h>

using AlibabaCloud::Emr::Model::RunETLJobRequest;

RunETLJobRequest::RunETLJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RunETLJob")
{}

RunETLJobRequest::~RunETLJobRequest()
{}

long RunETLJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RunETLJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<RunETLJobRequest::InstanceRunParam> RunETLJobRequest::getInstanceRunParam()const
{
	return instanceRunParam_;
}

void RunETLJobRequest::setInstanceRunParam(const std::vector<InstanceRunParam>& instanceRunParam)
{
	instanceRunParam_ = instanceRunParam;
	int i = 0;
	for(int i = 0; i!= instanceRunParam.size(); i++)	{
		auto obj = instanceRunParam.at(i);
		std::string str ="InstanceRunParam."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::string RunETLJobRequest::getRegionId()const
{
	return regionId_;
}

void RunETLJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool RunETLJobRequest::getIsDebug()const
{
	return isDebug_;
}

void RunETLJobRequest::setIsDebug(bool isDebug)
{
	isDebug_ = isDebug;
	setCoreParameter("IsDebug", isDebug ? "true" : "false");
}

std::string RunETLJobRequest::getId()const
{
	return id_;
}

void RunETLJobRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string RunETLJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunETLJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

