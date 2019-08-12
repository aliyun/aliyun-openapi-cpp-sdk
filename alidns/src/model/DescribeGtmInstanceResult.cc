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

#include <alibabacloud/alidns/model/DescribeGtmInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmInstanceResult::DescribeGtmInstanceResult() :
	ServiceResult()
{}

DescribeGtmInstanceResult::DescribeGtmInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmInstanceResult::~DescribeGtmInstanceResult()
{}

void DescribeGtmInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["VersionCode"].isNull())
		versionCode_ = value["VersionCode"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["ExpireTimestamp"].isNull())
		expireTimestamp_ = std::stol(value["ExpireTimestamp"].asString());
	if(!value["Cname"].isNull())
		cname_ = value["Cname"].asString();
	if(!value["UserDomainName"].isNull())
		userDomainName_ = value["UserDomainName"].asString();
	if(!value["Ttl"].isNull())
		ttl_ = std::stoi(value["Ttl"].asString());
	if(!value["LbaStrategy"].isNull())
		lbaStrategy_ = value["LbaStrategy"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());
	if(!value["AlertGroup"].isNull())
		alertGroup_ = value["AlertGroup"].asString();
	if(!value["CnameMode"].isNull())
		cnameMode_ = value["CnameMode"].asString();

}

long DescribeGtmInstanceResult::getExpireTimestamp()const
{
	return expireTimestamp_;
}

std::string DescribeGtmInstanceResult::getUserDomainName()const
{
	return userDomainName_;
}

std::string DescribeGtmInstanceResult::getLbaStrategy()const
{
	return lbaStrategy_;
}

std::string DescribeGtmInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeGtmInstanceResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeGtmInstanceResult::getCnameMode()const
{
	return cnameMode_;
}

std::string DescribeGtmInstanceResult::getCname()const
{
	return cname_;
}

int DescribeGtmInstanceResult::getTtl()const
{
	return ttl_;
}

std::string DescribeGtmInstanceResult::getInstanceName()const
{
	return instanceName_;
}

std::string DescribeGtmInstanceResult::getVersionCode()const
{
	return versionCode_;
}

std::string DescribeGtmInstanceResult::getAlertGroup()const
{
	return alertGroup_;
}

std::string DescribeGtmInstanceResult::getExpireTime()const
{
	return expireTime_;
}

long DescribeGtmInstanceResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

