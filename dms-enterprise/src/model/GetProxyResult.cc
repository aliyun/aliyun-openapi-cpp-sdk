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

#include <alibabacloud/dms-enterprise/model/GetProxyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetProxyResult::GetProxyResult() :
	ServiceResult()
{}

GetProxyResult::GetProxyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProxyResult::~GetProxyResult()
{}

void GetProxyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ProxyId"].isNull())
		proxyId_ = std::stol(value["ProxyId"].asString());
	if(!value["CreatorId"].isNull())
		creatorId_ = std::stol(value["CreatorId"].asString());
	if(!value["CreatorName"].isNull())
		creatorName_ = value["CreatorName"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = std::stol(value["InstanceId"].asString());
	if(!value["PrivateEnable"].isNull())
		privateEnable_ = value["PrivateEnable"].asString() == "true";
	if(!value["PrivateHost"].isNull())
		privateHost_ = value["PrivateHost"].asString();
	if(!value["PublicEnable"].isNull())
		publicEnable_ = value["PublicEnable"].asString() == "true";
	if(!value["PublicHost"].isNull())
		publicHost_ = value["PublicHost"].asString();
	if(!value["MysqlPort"].isNull())
		mysqlPort_ = std::stoi(value["MysqlPort"].asString());
	if(!value["HttpsPort"].isNull())
		httpsPort_ = std::stoi(value["HttpsPort"].asString());

}

std::string GetProxyResult::getPublicHost()const
{
	return publicHost_;
}

std::string GetProxyResult::getPrivateHost()const
{
	return privateHost_;
}

long GetProxyResult::getInstanceId()const
{
	return instanceId_;
}

long GetProxyResult::getProxyId()const
{
	return proxyId_;
}

long GetProxyResult::getCreatorId()const
{
	return creatorId_;
}

bool GetProxyResult::getSuccess()const
{
	return success_;
}

bool GetProxyResult::getPublicEnable()const
{
	return publicEnable_;
}

int GetProxyResult::getMysqlPort()const
{
	return mysqlPort_;
}

std::string GetProxyResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetProxyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetProxyResult::getPrivateEnable()const
{
	return privateEnable_;
}

std::string GetProxyResult::getCreatorName()const
{
	return creatorName_;
}

int GetProxyResult::getHttpsPort()const
{
	return httpsPort_;
}

