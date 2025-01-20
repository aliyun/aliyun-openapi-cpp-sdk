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

#include <alibabacloud/polardb/model/DescribeActivationCodeDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeActivationCodeDetailsResult::DescribeActivationCodeDetailsResult() :
	ServiceResult()
{}

DescribeActivationCodeDetailsResult::DescribeActivationCodeDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActivationCodeDetailsResult::~DescribeActivationCodeDetailsResult()
{}

void DescribeActivationCodeDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ActivateAt"].isNull())
		activateAt_ = value["ActivateAt"].asString();
	if(!value["CertContentB64"].isNull())
		certContentB64_ = value["CertContentB64"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ExpireAt"].isNull())
		expireAt_ = value["ExpireAt"].asString();
	if(!value["GmtCreated"].isNull())
		gmtCreated_ = value["GmtCreated"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["Id"].isNull())
		id_ = std::stoi(value["Id"].asString());
	if(!value["MacAddress"].isNull())
		macAddress_ = value["MacAddress"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["SystemIdentifier"].isNull())
		systemIdentifier_ = value["SystemIdentifier"].asString();

}

std::string DescribeActivationCodeDetailsResult::getDescription()const
{
	return description_;
}

std::string DescribeActivationCodeDetailsResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeActivationCodeDetailsResult::getSystemIdentifier()const
{
	return systemIdentifier_;
}

std::string DescribeActivationCodeDetailsResult::getActivateAt()const
{
	return activateAt_;
}

std::string DescribeActivationCodeDetailsResult::getExpireAt()const
{
	return expireAt_;
}

std::string DescribeActivationCodeDetailsResult::getCertContentB64()const
{
	return certContentB64_;
}

std::string DescribeActivationCodeDetailsResult::getGmtCreated()const
{
	return gmtCreated_;
}

int DescribeActivationCodeDetailsResult::getId()const
{
	return id_;
}

std::string DescribeActivationCodeDetailsResult::getMacAddress()const
{
	return macAddress_;
}

std::string DescribeActivationCodeDetailsResult::getName()const
{
	return name_;
}

