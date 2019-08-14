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

#include <alibabacloud/emr/model/RunOpsCommandRequest.h>

using AlibabaCloud::Emr::Model::RunOpsCommandRequest;

RunOpsCommandRequest::RunOpsCommandRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RunOpsCommand")
{}

RunOpsCommandRequest::~RunOpsCommandRequest()
{}

long RunOpsCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RunOpsCommandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RunOpsCommandRequest::getRegionId()const
{
	return regionId_;
}

void RunOpsCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RunOpsCommandRequest::getOpsCommandName()const
{
	return opsCommandName_;
}

void RunOpsCommandRequest::setOpsCommandName(const std::string& opsCommandName)
{
	opsCommandName_ = opsCommandName;
	setCoreParameter("OpsCommandName", opsCommandName);
}

std::string RunOpsCommandRequest::getComment()const
{
	return comment_;
}

void RunOpsCommandRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setCoreParameter("Comment", comment);
}

std::string RunOpsCommandRequest::getCustomParams()const
{
	return customParams_;
}

void RunOpsCommandRequest::setCustomParams(const std::string& customParams)
{
	customParams_ = customParams;
	setCoreParameter("CustomParams", customParams);
}

std::string RunOpsCommandRequest::getClusterId()const
{
	return clusterId_;
}

void RunOpsCommandRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::vector<std::string> RunOpsCommandRequest::getHostIdList()const
{
	return hostIdList_;
}

void RunOpsCommandRequest::setHostIdList(const std::vector<std::string>& hostIdList)
{
	hostIdList_ = hostIdList;
	for(int i = 0; i!= hostIdList.size(); i++)
		setCoreParameter("HostIdList."+ std::to_string(i), hostIdList.at(i));
}

std::string RunOpsCommandRequest::getDimension()const
{
	return dimension_;
}

void RunOpsCommandRequest::setDimension(const std::string& dimension)
{
	dimension_ = dimension;
	setCoreParameter("Dimension", dimension);
}

std::string RunOpsCommandRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunOpsCommandRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

