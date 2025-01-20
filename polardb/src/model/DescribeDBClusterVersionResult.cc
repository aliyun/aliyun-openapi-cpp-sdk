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

#include <alibabacloud/polardb/model/DescribeDBClusterVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterVersionResult::DescribeDBClusterVersionResult() :
	ServiceResult()
{}

DescribeDBClusterVersionResult::DescribeDBClusterVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterVersionResult::~DescribeDBClusterVersionResult()
{}

void DescribeDBClusterVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBRevisionVersionListNode = value["DBRevisionVersionList"]["DBRevisionVersionListItem"];
	for (auto valueDBRevisionVersionListDBRevisionVersionListItem : allDBRevisionVersionListNode)
	{
		DBRevisionVersionListItem dBRevisionVersionListObject;
		if(!valueDBRevisionVersionListDBRevisionVersionListItem["ReleaseType"].isNull())
			dBRevisionVersionListObject.releaseType = valueDBRevisionVersionListDBRevisionVersionListItem["ReleaseType"].asString();
		if(!valueDBRevisionVersionListDBRevisionVersionListItem["RevisionVersionCode"].isNull())
			dBRevisionVersionListObject.revisionVersionCode = valueDBRevisionVersionListDBRevisionVersionListItem["RevisionVersionCode"].asString();
		if(!valueDBRevisionVersionListDBRevisionVersionListItem["RevisionVersionName"].isNull())
			dBRevisionVersionListObject.revisionVersionName = valueDBRevisionVersionListDBRevisionVersionListItem["RevisionVersionName"].asString();
		if(!valueDBRevisionVersionListDBRevisionVersionListItem["ReleaseNote"].isNull())
			dBRevisionVersionListObject.releaseNote = valueDBRevisionVersionListDBRevisionVersionListItem["ReleaseNote"].asString();
		dBRevisionVersionList_.push_back(dBRevisionVersionListObject);
	}
	auto allProxyRevisionVersionListNode = value["ProxyRevisionVersionList"]["ProxyRevisionVersionListItem"];
	for (auto valueProxyRevisionVersionListProxyRevisionVersionListItem : allProxyRevisionVersionListNode)
	{
		ProxyRevisionVersionListItem proxyRevisionVersionListObject;
		if(!valueProxyRevisionVersionListProxyRevisionVersionListItem["ReleaseType"].isNull())
			proxyRevisionVersionListObject.releaseType = valueProxyRevisionVersionListProxyRevisionVersionListItem["ReleaseType"].asString();
		if(!valueProxyRevisionVersionListProxyRevisionVersionListItem["RevisionVersionCode"].isNull())
			proxyRevisionVersionListObject.revisionVersionCode = valueProxyRevisionVersionListProxyRevisionVersionListItem["RevisionVersionCode"].asString();
		if(!valueProxyRevisionVersionListProxyRevisionVersionListItem["RevisionVersionName"].isNull())
			proxyRevisionVersionListObject.revisionVersionName = valueProxyRevisionVersionListProxyRevisionVersionListItem["RevisionVersionName"].asString();
		if(!valueProxyRevisionVersionListProxyRevisionVersionListItem["ReleaseNote"].isNull())
			proxyRevisionVersionListObject.releaseNote = valueProxyRevisionVersionListProxyRevisionVersionListItem["ReleaseNote"].asString();
		proxyRevisionVersionList_.push_back(proxyRevisionVersionListObject);
	}
	if(!value["IsLatestVersion"].isNull())
		isLatestVersion_ = value["IsLatestVersion"].asString();
	if(!value["IsProxyLatestVersion"].isNull())
		isProxyLatestVersion_ = value["IsProxyLatestVersion"].asString();
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["DBRevisionVersion"].isNull())
		dBRevisionVersion_ = value["DBRevisionVersion"].asString();
	if(!value["DBVersionStatus"].isNull())
		dBVersionStatus_ = value["DBVersionStatus"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["DBMinorVersion"].isNull())
		dBMinorVersion_ = value["DBMinorVersion"].asString();
	if(!value["ProxyRevisionVersion"].isNull())
		proxyRevisionVersion_ = value["ProxyRevisionVersion"].asString();
	if(!value["ProxyVersionStatus"].isNull())
		proxyVersionStatus_ = value["ProxyVersionStatus"].asString();
	if(!value["ProxyLatestVersion"].isNull())
		proxyLatestVersion_ = value["ProxyLatestVersion"].asString();
	if(!value["DBLatestVersion"].isNull())
		dBLatestVersion_ = value["DBLatestVersion"].asString();
	if(!value["ProxyLatestVersionAfterDBEngineUpgraded"].isNull())
		proxyLatestVersionAfterDBEngineUpgraded_ = value["ProxyLatestVersionAfterDBEngineUpgraded"].asString();
	if(!value["DBInnerRevisionVersion"].isNull())
		dBInnerRevisionVersion_ = value["DBInnerRevisionVersion"].asString();

}

std::string DescribeDBClusterVersionResult::getDBRevisionVersion()const
{
	return dBRevisionVersion_;
}

std::vector<DescribeDBClusterVersionResult::ProxyRevisionVersionListItem> DescribeDBClusterVersionResult::getProxyRevisionVersionList()const
{
	return proxyRevisionVersionList_;
}

std::string DescribeDBClusterVersionResult::getProxyLatestVersionAfterDBEngineUpgraded()const
{
	return proxyLatestVersionAfterDBEngineUpgraded_;
}

std::string DescribeDBClusterVersionResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterVersionResult::getProxyRevisionVersion()const
{
	return proxyRevisionVersion_;
}

std::string DescribeDBClusterVersionResult::getDBLatestVersion()const
{
	return dBLatestVersion_;
}

std::string DescribeDBClusterVersionResult::getProxyLatestVersion()const
{
	return proxyLatestVersion_;
}

std::string DescribeDBClusterVersionResult::getProxyVersionStatus()const
{
	return proxyVersionStatus_;
}

std::string DescribeDBClusterVersionResult::getIsLatestVersion()const
{
	return isLatestVersion_;
}

std::string DescribeDBClusterVersionResult::getIsProxyLatestVersion()const
{
	return isProxyLatestVersion_;
}

std::string DescribeDBClusterVersionResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeDBClusterVersionResult::getDBVersionStatus()const
{
	return dBVersionStatus_;
}

std::string DescribeDBClusterVersionResult::getDBMinorVersion()const
{
	return dBMinorVersion_;
}

std::vector<DescribeDBClusterVersionResult::DBRevisionVersionListItem> DescribeDBClusterVersionResult::getDBRevisionVersionList()const
{
	return dBRevisionVersionList_;
}

std::string DescribeDBClusterVersionResult::getDBInnerRevisionVersion()const
{
	return dBInnerRevisionVersion_;
}

