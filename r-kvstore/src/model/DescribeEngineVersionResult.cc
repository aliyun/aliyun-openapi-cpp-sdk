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
	auto dBLatestMinorVersionNode = value["DBLatestMinorVersion"];
	if(!dBLatestMinorVersionNode["MinorVersion"].isNull())
		dBLatestMinorVersion_.minorVersion = dBLatestMinorVersionNode["MinorVersion"].asString();
	if(!dBLatestMinorVersionNode["Level"].isNull())
		dBLatestMinorVersion_.level = dBLatestMinorVersionNode["Level"].asString();
	auto versionReleaseNode = dBLatestMinorVersionNode["VersionRelease"];
	if(!versionReleaseNode["VersionChangesLevel"].isNull())
		dBLatestMinorVersion_.versionRelease.versionChangesLevel = versionReleaseNode["VersionChangesLevel"].asString();
	auto allReleaseInfoNode = versionReleaseNode["ReleaseInfo"]["ReleaseInfoList"];
	for (auto versionReleaseNodeReleaseInfoReleaseInfoList : allReleaseInfoNode)
	{
		DBLatestMinorVersion::VersionRelease::ReleaseInfoList releaseInfoListObject;
		if(!versionReleaseNodeReleaseInfoReleaseInfoList["ReleaseVersion"].isNull())
			releaseInfoListObject.releaseVersion = versionReleaseNodeReleaseInfoReleaseInfoList["ReleaseVersion"].asString();
		if(!versionReleaseNodeReleaseInfoReleaseInfoList["CreateTime"].isNull())
			releaseInfoListObject.createTime = versionReleaseNodeReleaseInfoReleaseInfoList["CreateTime"].asString();
		if(!versionReleaseNodeReleaseInfoReleaseInfoList["ReleaseNote"].isNull())
			releaseInfoListObject.releaseNote = versionReleaseNodeReleaseInfoReleaseInfoList["ReleaseNote"].asString();
		if(!versionReleaseNodeReleaseInfoReleaseInfoList["Level"].isNull())
			releaseInfoListObject.level = versionReleaseNodeReleaseInfoReleaseInfoList["Level"].asString();
		if(!versionReleaseNodeReleaseInfoReleaseInfoList["ReleaseNoteEn"].isNull())
			releaseInfoListObject.releaseNoteEn = versionReleaseNodeReleaseInfoReleaseInfoList["ReleaseNoteEn"].asString();
		dBLatestMinorVersion_.versionRelease.releaseInfo.push_back(releaseInfoListObject);
	}
	auto proxyLatestMinorVersionNode = value["ProxyLatestMinorVersion"];
	if(!proxyLatestMinorVersionNode["MinorVersion"].isNull())
		proxyLatestMinorVersion_.minorVersion = proxyLatestMinorVersionNode["MinorVersion"].asString();
	if(!proxyLatestMinorVersionNode["Level"].isNull())
		proxyLatestMinorVersion_.level = proxyLatestMinorVersionNode["Level"].asString();
	auto versionRelease1Node = proxyLatestMinorVersionNode["VersionRelease"];
	if(!versionRelease1Node["VersionChangesLevel"].isNull())
		proxyLatestMinorVersion_.versionRelease1.versionChangesLevel = versionRelease1Node["VersionChangesLevel"].asString();
	auto allReleaseInfo2Node = versionRelease1Node["ReleaseInfo"]["ReleaseInfoList"];
	for (auto versionRelease1NodeReleaseInfoReleaseInfoList : allReleaseInfo2Node)
	{
		ProxyLatestMinorVersion::VersionRelease1::ReleaseInfoList3 releaseInfoList3Object;
		if(!versionRelease1NodeReleaseInfoReleaseInfoList["ReleaseVersion"].isNull())
			releaseInfoList3Object.releaseVersion = versionRelease1NodeReleaseInfoReleaseInfoList["ReleaseVersion"].asString();
		if(!versionRelease1NodeReleaseInfoReleaseInfoList["CreateTime"].isNull())
			releaseInfoList3Object.createTime = versionRelease1NodeReleaseInfoReleaseInfoList["CreateTime"].asString();
		if(!versionRelease1NodeReleaseInfoReleaseInfoList["ReleaseNote"].isNull())
			releaseInfoList3Object.releaseNote = versionRelease1NodeReleaseInfoReleaseInfoList["ReleaseNote"].asString();
		if(!versionRelease1NodeReleaseInfoReleaseInfoList["Level"].isNull())
			releaseInfoList3Object.level = versionRelease1NodeReleaseInfoReleaseInfoList["Level"].asString();
		if(!versionRelease1NodeReleaseInfoReleaseInfoList["ReleaseNoteEn"].isNull())
			releaseInfoList3Object.releaseNoteEn = versionRelease1NodeReleaseInfoReleaseInfoList["ReleaseNoteEn"].asString();
		proxyLatestMinorVersion_.versionRelease1.releaseInfo2.push_back(releaseInfoList3Object);
	}
	if(!value["IsLatestVersion"].isNull())
		isLatestVersion_ = value["IsLatestVersion"].asString() == "true";
	if(!value["ProxyMinorVersion"].isNull())
		proxyMinorVersion_ = value["ProxyMinorVersion"].asString();
	if(!value["DBVersionRelease"].isNull())
		dBVersionRelease_ = value["DBVersionRelease"].asString();
	if(!value["ProxyVersionRelease"].isNull())
		proxyVersionRelease_ = value["ProxyVersionRelease"].asString();
	if(!value["EnableUpgradeMajorVersion"].isNull())
		enableUpgradeMajorVersion_ = value["EnableUpgradeMajorVersion"].asString() == "true";
	if(!value["EnableUpgradeMinorVersion"].isNull())
		enableUpgradeMinorVersion_ = value["EnableUpgradeMinorVersion"].asString() == "true";
	if(!value["MajorVersion"].isNull())
		majorVersion_ = value["MajorVersion"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["MinorVersion"].isNull())
		minorVersion_ = value["MinorVersion"].asString();
	if(!value["IsRedisCompatibleVersion"].isNull())
		isRedisCompatibleVersion_ = value["IsRedisCompatibleVersion"].asString();
	if(!value["IsSSLEnable"].isNull())
		isSSLEnable_ = value["IsSSLEnable"].asString();
	if(!value["IsNewSSLMode"].isNull())
		isNewSSLMode_ = value["IsNewSSLMode"].asString();
	if(!value["IsAutoUpgradeOpen"].isNull())
		isAutoUpgradeOpen_ = value["IsAutoUpgradeOpen"].asString();
	if(!value["IsOpenNGLB"].isNull())
		isOpenNGLB_ = value["IsOpenNGLB"].asString();

}

std::string DescribeEngineVersionResult::getMajorVersion()const
{
	return majorVersion_;
}

DescribeEngineVersionResult::DBLatestMinorVersion DescribeEngineVersionResult::getDBLatestMinorVersion()const
{
	return dBLatestMinorVersion_;
}

std::string DescribeEngineVersionResult::getIsAutoUpgradeOpen()const
{
	return isAutoUpgradeOpen_;
}

std::string DescribeEngineVersionResult::getMinorVersion()const
{
	return minorVersion_;
}

std::string DescribeEngineVersionResult::getProxyMinorVersion()const
{
	return proxyMinorVersion_;
}

std::string DescribeEngineVersionResult::getDBVersionRelease()const
{
	return dBVersionRelease_;
}

bool DescribeEngineVersionResult::getEnableUpgradeMajorVersion()const
{
	return enableUpgradeMajorVersion_;
}

bool DescribeEngineVersionResult::getIsLatestVersion()const
{
	return isLatestVersion_;
}

std::string DescribeEngineVersionResult::getIsNewSSLMode()const
{
	return isNewSSLMode_;
}

std::string DescribeEngineVersionResult::getIsOpenNGLB()const
{
	return isOpenNGLB_;
}

std::string DescribeEngineVersionResult::getIsRedisCompatibleVersion()const
{
	return isRedisCompatibleVersion_;
}

DescribeEngineVersionResult::ProxyLatestMinorVersion DescribeEngineVersionResult::getProxyLatestMinorVersion()const
{
	return proxyLatestMinorVersion_;
}

std::string DescribeEngineVersionResult::getIsSSLEnable()const
{
	return isSSLEnable_;
}

std::string DescribeEngineVersionResult::getProxyVersionRelease()const
{
	return proxyVersionRelease_;
}

bool DescribeEngineVersionResult::getEnableUpgradeMinorVersion()const
{
	return enableUpgradeMinorVersion_;
}

std::string DescribeEngineVersionResult::getEngine()const
{
	return engine_;
}

