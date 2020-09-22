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

#include <alibabacloud/vs/model/DescribeDeviceURLRequest.h>

using AlibabaCloud::Vs::Model::DescribeDeviceURLRequest;

DescribeDeviceURLRequest::DescribeDeviceURLRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeDeviceURL")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDeviceURLRequest::~DescribeDeviceURLRequest()
{}

bool DescribeDeviceURLRequest::getAuth()const
{
	return auth_;
}

void DescribeDeviceURLRequest::setAuth(bool auth)
{
	auth_ = auth;
	setParameter("Auth", auth ? "true" : "false");
}

std::string DescribeDeviceURLRequest::getType()const
{
	return type_;
}

void DescribeDeviceURLRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeDeviceURLRequest::getMode()const
{
	return mode_;
}

void DescribeDeviceURLRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string DescribeDeviceURLRequest::getStream()const
{
	return stream_;
}

void DescribeDeviceURLRequest::setStream(const std::string& stream)
{
	stream_ = stream;
	setParameter("Stream", stream);
}

std::string DescribeDeviceURLRequest::getId()const
{
	return id_;
}

void DescribeDeviceURLRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeDeviceURLRequest::getShowLog()const
{
	return showLog_;
}

void DescribeDeviceURLRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeDeviceURLRequest::getOutProtocol()const
{
	return outProtocol_;
}

void DescribeDeviceURLRequest::setOutProtocol(const std::string& outProtocol)
{
	outProtocol_ = outProtocol;
	setParameter("OutProtocol", outProtocol);
}

long DescribeDeviceURLRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDeviceURLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DescribeDeviceURLRequest::getExpire()const
{
	return expire_;
}

void DescribeDeviceURLRequest::setExpire(long expire)
{
	expire_ = expire;
	setParameter("Expire", std::to_string(expire));
}

