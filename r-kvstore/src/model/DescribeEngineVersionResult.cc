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

#include <alibabacloud/r-kvstore/model/DescribeEngineVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeEngineVersionResult::DescribeEngineVersionResult() :
	ServiceResult()
{}

DescribeEngineVersionResult::DescribeEngineVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEngineVersionResult::~DescribeEngineVersionResult()
{}

void DescribeEngineVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["IsLatestVersion"].isNull())
		isLatestVersion_ = value["IsLatestVersion"].asString() == "true";
	if(!value["MinorVersion"].isNull())
		minorVersion_ = value["MinorVersion"].asString();
	if(!value["EnableUpgradeMinorVersion"].isNull())
		enableUpgradeMinorVersion_ = value["EnableUpgradeMinorVersion"].asString() == "true";
	if(!value["MajorVersion"].isNull())
		majorVersion_ = value["MajorVersion"].asString();
	if(!value["EnableUpgradeMajorVersion"].isNull())
		enableUpgradeMajorVersion_ = value["EnableUpgradeMajorVersion"].asString() == "true";
	if(!value["ProxyMinorVersion"].isNull())
		proxyMinorVersion_ = value["ProxyMinorVersion"].asString();
	if(!value["DBVersionRelease"].isNull())
		dBVersionRelease_ = value["DBVersionRelease"].asString();
	if(!value["ProxyVersionRelease"].isNull())
		proxyVersionRelease_ = value["ProxyVersionRelease"].asString();

}

std::string DescribeEngineVersionResult::getMajorVersion()const
{
	return majorVersion_;
}

bool DescribeEngineVersionResult::getIsLatestVersion()const
{
	return isLatestVersion_;
}

std::string DescribeEngineVersionResult::getMinorVersion()const
{
	return minorVersion_;
}

std::string DescribeEngineVersionResult::getProxyMinorVersion()const
{
	return proxyMinorVersion_;
}

std::string DescribeEngineVersionResult::getEngine()const
{
	return engine_;
}

bool DescribeEngineVersionResult::getEnableUpgradeMinorVersion()const
{
	return enableUpgradeMinorVersion_;
}

std::string DescribeEngineVersionResult::getProxyVersionRelease()const
{
	return proxyVersionRelease_;
}

bool DescribeEngineVersionResult::getEnableUpgradeMajorVersion()const
{
	return enableUpgradeMajorVersion_;
}

std::string DescribeEngineVersionResult::getDBVersionRelease()const
{
	return dBVersionRelease_;
}

