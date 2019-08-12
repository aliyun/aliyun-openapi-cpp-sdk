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

#include <alibabacloud/cloudwf/model/SaveApgroupConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApgroupConfigRequest;

SaveApgroupConfigRequest::SaveApgroupConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApgroupConfig")
{}

SaveApgroupConfigRequest::~SaveApgroupConfigRequest()
{}

std::string SaveApgroupConfigRequest::getCountry()const
{
	return country_;
}

void SaveApgroupConfigRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", country);
}

int SaveApgroupConfigRequest::getLogLevel()const
{
	return logLevel_;
}

void SaveApgroupConfigRequest::setLogLevel(int logLevel)
{
	logLevel_ = logLevel;
	setCoreParameter("LogLevel", logLevel);
}

std::string SaveApgroupConfigRequest::getName()const
{
	return name_;
}

void SaveApgroupConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int SaveApgroupConfigRequest::getEchoInt()const
{
	return echoInt_;
}

void SaveApgroupConfigRequest::setEchoInt(int echoInt)
{
	echoInt_ = echoInt;
	setCoreParameter("EchoInt", echoInt);
}

int SaveApgroupConfigRequest::getScan()const
{
	return scan_;
}

void SaveApgroupConfigRequest::setScan(int scan)
{
	scan_ = scan;
	setCoreParameter("Scan", scan);
}

std::string SaveApgroupConfigRequest::getDescription()const
{
	return description_;
}

void SaveApgroupConfigRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long SaveApgroupConfigRequest::getId()const
{
	return id_;
}

void SaveApgroupConfigRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string SaveApgroupConfigRequest::getDai()const
{
	return dai_;
}

void SaveApgroupConfigRequest::setDai(const std::string& dai)
{
	dai_ = dai;
	setCoreParameter("Dai", dai);
}

std::string SaveApgroupConfigRequest::getLogIp()const
{
	return logIp_;
}

void SaveApgroupConfigRequest::setLogIp(const std::string& logIp)
{
	logIp_ = logIp;
	setCoreParameter("LogIp", logIp);
}

std::string SaveApgroupConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApgroupConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

