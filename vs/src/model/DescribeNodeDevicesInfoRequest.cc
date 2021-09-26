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

#include <alibabacloud/vs/model/DescribeNodeDevicesInfoRequest.h>

using AlibabaCloud::Vs::Model::DescribeNodeDevicesInfoRequest;

DescribeNodeDevicesInfoRequest::DescribeNodeDevicesInfoRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeNodeDevicesInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeNodeDevicesInfoRequest::~DescribeNodeDevicesInfoRequest()
{}

std::string DescribeNodeDevicesInfoRequest::getShowLog()const
{
	return showLog_;
}

void DescribeNodeDevicesInfoRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeNodeDevicesInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNodeDevicesInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeNodeDevicesInfoRequest::getNodeName()const
{
	return nodeName_;
}

void DescribeNodeDevicesInfoRequest::setNodeName(const std::string& nodeName)
{
	nodeName_ = nodeName;
	setParameter("NodeName", nodeName);
}

