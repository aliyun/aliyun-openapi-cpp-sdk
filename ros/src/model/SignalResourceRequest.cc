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

#include <alibabacloud/ros/model/SignalResourceRequest.h>

using AlibabaCloud::ROS::Model::SignalResourceRequest;

SignalResourceRequest::SignalResourceRequest() :
	RpcServiceRequest("ros", "2019-09-10", "SignalResource")
{}

SignalResourceRequest::~SignalResourceRequest()
{}

std::string SignalResourceRequest::getData()const
{
	return data_;
}

void SignalResourceRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", data);
}

std::string SignalResourceRequest::getRegionId()const
{
	return regionId_;
}

void SignalResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SignalResourceRequest::getClientToken()const
{
	return clientToken_;
}

void SignalResourceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string SignalResourceRequest::getStackId()const
{
	return stackId_;
}

void SignalResourceRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

std::string SignalResourceRequest::getLogicalResourceId()const
{
	return logicalResourceId_;
}

void SignalResourceRequest::setLogicalResourceId(const std::string& logicalResourceId)
{
	logicalResourceId_ = logicalResourceId;
	setCoreParameter("LogicalResourceId", logicalResourceId);
}

std::string SignalResourceRequest::getUniqueId()const
{
	return uniqueId_;
}

void SignalResourceRequest::setUniqueId(const std::string& uniqueId)
{
	uniqueId_ = uniqueId;
	setCoreParameter("UniqueId", uniqueId);
}

std::string SignalResourceRequest::getStatus()const
{
	return status_;
}

void SignalResourceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

