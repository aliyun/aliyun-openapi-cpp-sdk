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

#include <alibabacloud/cloudwf/model/SaveApConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApConfigRequest;

SaveApConfigRequest::SaveApConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApConfig")
{}

SaveApConfigRequest::~SaveApConfigRequest()
{}

std::string SaveApConfigRequest::getCountry()const
{
	return country_;
}

void SaveApConfigRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", std::to_string(country));
}

long SaveApConfigRequest::getApAssetId()const
{
	return apAssetId_;
}

void SaveApConfigRequest::setApAssetId(long apAssetId)
{
	apAssetId_ = apAssetId;
	setCoreParameter("ApAssetId", apAssetId);
}

int SaveApConfigRequest::getLogLevel()const
{
	return logLevel_;
}

void SaveApConfigRequest::setLogLevel(int logLevel)
{
	logLevel_ = logLevel;
	setCoreParameter("LogLevel", logLevel);
}

std::string SaveApConfigRequest::getName()const
{
	return name_;
}

void SaveApConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

int SaveApConfigRequest::getEchoInt()const
{
	return echoInt_;
}

void SaveApConfigRequest::setEchoInt(int echoInt)
{
	echoInt_ = echoInt;
	setCoreParameter("EchoInt", echoInt);
}

int SaveApConfigRequest::getScan()const
{
	return scan_;
}

void SaveApConfigRequest::setScan(int scan)
{
	scan_ = scan;
	setCoreParameter("Scan", scan);
}

std::string SaveApConfigRequest::getDescription()const
{
	return description_;
}

void SaveApConfigRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long SaveApConfigRequest::getId()const
{
	return id_;
}

void SaveApConfigRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string SaveApConfigRequest::getDai()const
{
	return dai_;
}

void SaveApConfigRequest::setDai(const std::string& dai)
{
	dai_ = dai;
	setCoreParameter("Dai", std::to_string(dai));
}

std::string SaveApConfigRequest::getLogIp()const
{
	return logIp_;
}

void SaveApConfigRequest::setLogIp(const std::string& logIp)
{
	logIp_ = logIp;
	setCoreParameter("LogIp", std::to_string(logIp));
}

std::string SaveApConfigRequest::getMac()const
{
	return mac_;
}

void SaveApConfigRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setCoreParameter("Mac", std::to_string(mac));
}

std::string SaveApConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

