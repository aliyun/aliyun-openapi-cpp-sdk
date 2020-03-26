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
{
	setMethod(HttpRequest::Method::Post);
}

SaveApConfigRequest::~SaveApConfigRequest()
{}

std::string SaveApConfigRequest::getCountry()const
{
	return country_;
}

void SaveApConfigRequest::setCountry(const std::string& country)
{
	country_ = country;
	setParameter("Country", country);
}

int SaveApConfigRequest::getScan()const
{
	return scan_;
}

void SaveApConfigRequest::setScan(int scan)
{
	scan_ = scan;
	setParameter("Scan", std::to_string(scan));
}

std::string SaveApConfigRequest::getDescription()const
{
	return description_;
}

void SaveApConfigRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string SaveApConfigRequest::getDai()const
{
	return dai_;
}

void SaveApConfigRequest::setDai(const std::string& dai)
{
	dai_ = dai;
	setParameter("Dai", dai);
}

std::string SaveApConfigRequest::getLogIp()const
{
	return logIp_;
}

void SaveApConfigRequest::setLogIp(const std::string& logIp)
{
	logIp_ = logIp;
	setParameter("LogIp", logIp);
}

std::string SaveApConfigRequest::getMac()const
{
	return mac_;
}

void SaveApConfigRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setParameter("Mac", mac);
}

std::string SaveApConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long SaveApConfigRequest::getApAssetId()const
{
	return apAssetId_;
}

void SaveApConfigRequest::setApAssetId(long apAssetId)
{
	apAssetId_ = apAssetId;
	setParameter("ApAssetId", std::to_string(apAssetId));
}

int SaveApConfigRequest::getLogLevel()const
{
	return logLevel_;
}

void SaveApConfigRequest::setLogLevel(int logLevel)
{
	logLevel_ = logLevel;
	setParameter("LogLevel", std::to_string(logLevel));
}

std::string SaveApConfigRequest::getName()const
{
	return name_;
}

void SaveApConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int SaveApConfigRequest::getEchoInt()const
{
	return echoInt_;
}

void SaveApConfigRequest::setEchoInt(int echoInt)
{
	echoInt_ = echoInt;
	setParameter("EchoInt", std::to_string(echoInt));
}

long SaveApConfigRequest::getId()const
{
	return id_;
}

void SaveApConfigRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

