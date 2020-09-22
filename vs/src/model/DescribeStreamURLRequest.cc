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

#include <alibabacloud/vs/model/DescribeStreamURLRequest.h>

using AlibabaCloud::Vs::Model::DescribeStreamURLRequest;

DescribeStreamURLRequest::DescribeStreamURLRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeStreamURL")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStreamURLRequest::~DescribeStreamURLRequest()
{}

std::string DescribeStreamURLRequest::getAuthKey()const
{
	return authKey_;
}

void DescribeStreamURLRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setParameter("AuthKey", authKey);
}

bool DescribeStreamURLRequest::getAuth()const
{
	return auth_;
}

void DescribeStreamURLRequest::setAuth(bool auth)
{
	auth_ = auth;
	setParameter("Auth", auth ? "true" : "false");
}

long DescribeStreamURLRequest::getStartTime()const
{
	return startTime_;
}

void DescribeStreamURLRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeStreamURLRequest::getType()const
{
	return type_;
}

void DescribeStreamURLRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeStreamURLRequest::getOutHostType()const
{
	return outHostType_;
}

void DescribeStreamURLRequest::setOutHostType(const std::string& outHostType)
{
	outHostType_ = outHostType;
	setParameter("OutHostType", outHostType);
}

std::string DescribeStreamURLRequest::getId()const
{
	return id_;
}

void DescribeStreamURLRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeStreamURLRequest::getShowLog()const
{
	return showLog_;
}

void DescribeStreamURLRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeStreamURLRequest::getOutProtocol()const
{
	return outProtocol_;
}

void DescribeStreamURLRequest::setOutProtocol(const std::string& outProtocol)
{
	outProtocol_ = outProtocol;
	setParameter("OutProtocol", outProtocol);
}

std::string DescribeStreamURLRequest::getTranscode()const
{
	return transcode_;
}

void DescribeStreamURLRequest::setTranscode(const std::string& transcode)
{
	transcode_ = transcode;
	setParameter("Transcode", transcode);
}

long DescribeStreamURLRequest::getEndTime()const
{
	return endTime_;
}

void DescribeStreamURLRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long DescribeStreamURLRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStreamURLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DescribeStreamURLRequest::getExpire()const
{
	return expire_;
}

void DescribeStreamURLRequest::setExpire(long expire)
{
	expire_ = expire;
	setParameter("Expire", std::to_string(expire));
}

std::string DescribeStreamURLRequest::getLocation()const
{
	return location_;
}

void DescribeStreamURLRequest::setLocation(const std::string& location)
{
	location_ = location;
	setParameter("Location", location);
}

