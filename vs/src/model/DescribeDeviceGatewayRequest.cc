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

#include <alibabacloud/vs/model/DescribeDeviceGatewayRequest.h>

using AlibabaCloud::Vs::Model::DescribeDeviceGatewayRequest;

DescribeDeviceGatewayRequest::DescribeDeviceGatewayRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeDeviceGateway")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDeviceGatewayRequest::~DescribeDeviceGatewayRequest()
{}

std::string DescribeDeviceGatewayRequest::getClientIp()const
{
	return clientIp_;
}

void DescribeDeviceGatewayRequest::setClientIp(const std::string& clientIp)
{
	clientIp_ = clientIp;
	setParameter("ClientIp", clientIp);
}

std::string DescribeDeviceGatewayRequest::getId()const
{
	return id_;
}

void DescribeDeviceGatewayRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeDeviceGatewayRequest::getShowLog()const
{
	return showLog_;
}

void DescribeDeviceGatewayRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeDeviceGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDeviceGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DescribeDeviceGatewayRequest::getExpire()const
{
	return expire_;
}

void DescribeDeviceGatewayRequest::setExpire(long expire)
{
	expire_ = expire;
	setParameter("Expire", std::to_string(expire));
}

