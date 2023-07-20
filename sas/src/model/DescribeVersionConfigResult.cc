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

#include <alibabacloud/sas/model/DescribeVersionConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVersionConfigResult::DescribeVersionConfigResult() :
	ServiceResult()
{}

DescribeVersionConfigResult::DescribeVersionConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVersionConfigResult::~DescribeVersionConfigResult()
{}

void DescribeVersionConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["MVAuthCount"].isNull())
		mVAuthCount_ = std::stoi(value["MVAuthCount"].asString());
	if(!value["SasLog"].isNull())
		sasLog_ = std::stoi(value["SasLog"].asString());
	if(!value["LogCapacity"].isNull())
		logCapacity_ = std::stoi(value["LogCapacity"].asString());
	if(!value["SasScreen"].isNull())
		sasScreen_ = std::stoi(value["SasScreen"].asString());
	if(!value["HoneypotCapacity"].isNull())
		honeypotCapacity_ = std::stol(value["HoneypotCapacity"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["MVUnusedAuthCount"].isNull())
		mVUnusedAuthCount_ = std::stoi(value["MVUnusedAuthCount"].asString());
	if(!value["WebLock"].isNull())
		webLock_ = std::stoi(value["WebLock"].asString());
	if(!value["AppWhiteListAuthCount"].isNull())
		appWhiteListAuthCount_ = std::stol(value["AppWhiteListAuthCount"].asString());
	if(!value["LogTime"].isNull())
		logTime_ = std::stoi(value["LogTime"].asString());
	if(!value["Flag"].isNull())
		flag_ = std::stoi(value["Flag"].asString());
	if(!value["LastInstanceReleaseTime"].isNull())
		lastInstanceReleaseTime_ = std::stol(value["LastInstanceReleaseTime"].asString());
	if(!value["LastTrailEndTime"].isNull())
		lastTrailEndTime_ = std::stol(value["LastTrailEndTime"].asString());
	if(!value["Version"].isNull())
		version_ = std::stoi(value["Version"].asString());
	if(!value["WebLockAuthCount"].isNull())
		webLockAuthCount_ = std::stol(value["WebLockAuthCount"].asString());
	if(!value["ReleaseTime"].isNull())
		releaseTime_ = std::stol(value["ReleaseTime"].asString());
	if(!value["HighestVersion"].isNull())
		highestVersion_ = std::stoi(value["HighestVersion"].asString());
	if(!value["AssetLevel"].isNull())
		assetLevel_ = std::stoi(value["AssetLevel"].asString());
	if(!value["AvdsFlag"].isNull())
		avdsFlag_ = std::stoi(value["AvdsFlag"].asString());
	if(!value["IsPaidUser"].isNull())
		isPaidUser_ = value["IsPaidUser"].asString() == "true";
	if(!value["IsOverBalance"].isNull())
		isOverBalance_ = value["IsOverBalance"].asString() == "true";
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["SlsCapacity"].isNull())
		slsCapacity_ = std::stol(value["SlsCapacity"].asString());
	if(!value["VmCores"].isNull())
		vmCores_ = std::stoi(value["VmCores"].asString());
	if(!value["AllowPartialBuy"].isNull())
		allowPartialBuy_ = std::stoi(value["AllowPartialBuy"].asString());
	if(!value["AppWhiteList"].isNull())
		appWhiteList_ = std::stoi(value["AppWhiteList"].asString());
	if(!value["IsSasOpening"].isNull())
		isSasOpening_ = value["IsSasOpening"].asString() == "true";
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["ImageScanCapacity"].isNull())
		imageScanCapacity_ = std::stol(value["ImageScanCapacity"].asString());
	if(!value["IsTrialVersion"].isNull())
		isTrialVersion_ = std::stoi(value["IsTrialVersion"].asString());
	if(!value["UserDefinedAlarms"].isNull())
		userDefinedAlarms_ = std::stoi(value["UserDefinedAlarms"].asString());
	if(!value["OpenTime"].isNull())
		openTime_ = std::stol(value["OpenTime"].asString());
	if(!value["IsNewContainerVersion"].isNull())
		isNewContainerVersion_ = value["IsNewContainerVersion"].asString() == "true";
	if(!value["IsNewMultiVersion"].isNull())
		isNewMultiVersion_ = value["IsNewMultiVersion"].asString() == "true";
	if(!value["ThreatAnalysisCapacity"].isNull())
		threatAnalysisCapacity_ = std::stol(value["ThreatAnalysisCapacity"].asString());
	if(!value["CspmCapacity"].isNull())
		cspmCapacity_ = std::stol(value["CspmCapacity"].asString());
	if(!value["VulFixCapacity"].isNull())
		vulFixCapacity_ = std::stol(value["VulFixCapacity"].asString());
	if(!value["RaspCapacity"].isNull())
		raspCapacity_ = std::stol(value["RaspCapacity"].asString());
	if(!value["AgentlessCapacity"].isNull())
		agentlessCapacity_ = std::stol(value["AgentlessCapacity"].asString());

}

bool DescribeVersionConfigResult::getIsNewMultiVersion()const
{
	return isNewMultiVersion_;
}

bool DescribeVersionConfigResult::getIsPaidUser()const
{
	return isPaidUser_;
}

long DescribeVersionConfigResult::getImageScanCapacity()const
{
	return imageScanCapacity_;
}

long DescribeVersionConfigResult::getAppWhiteListAuthCount()const
{
	return appWhiteListAuthCount_;
}

int DescribeVersionConfigResult::getLogTime()const
{
	return logTime_;
}

long DescribeVersionConfigResult::getRaspCapacity()const
{
	return raspCapacity_;
}

int DescribeVersionConfigResult::getSasLog()const
{
	return sasLog_;
}

long DescribeVersionConfigResult::getOpenTime()const
{
	return openTime_;
}

int DescribeVersionConfigResult::getVersion()const
{
	return version_;
}

int DescribeVersionConfigResult::getAvdsFlag()const
{
	return avdsFlag_;
}

int DescribeVersionConfigResult::getHighestVersion()const
{
	return highestVersion_;
}

long DescribeVersionConfigResult::getLastTrailEndTime()const
{
	return lastTrailEndTime_;
}

long DescribeVersionConfigResult::getWebLockAuthCount()const
{
	return webLockAuthCount_;
}

long DescribeVersionConfigResult::getSlsCapacity()const
{
	return slsCapacity_;
}

int DescribeVersionConfigResult::getUserDefinedAlarms()const
{
	return userDefinedAlarms_;
}

int DescribeVersionConfigResult::getAllowPartialBuy()const
{
	return allowPartialBuy_;
}

long DescribeVersionConfigResult::getAgentlessCapacity()const
{
	return agentlessCapacity_;
}

int DescribeVersionConfigResult::getWebLock()const
{
	return webLock_;
}

long DescribeVersionConfigResult::getThreatAnalysisCapacity()const
{
	return threatAnalysisCapacity_;
}

bool DescribeVersionConfigResult::getIsOverBalance()const
{
	return isOverBalance_;
}

int DescribeVersionConfigResult::getVmCores()const
{
	return vmCores_;
}

long DescribeVersionConfigResult::getHoneypotCapacity()const
{
	return honeypotCapacity_;
}

long DescribeVersionConfigResult::getVulFixCapacity()const
{
	return vulFixCapacity_;
}

int DescribeVersionConfigResult::getAssetLevel()const
{
	return assetLevel_;
}

std::string DescribeVersionConfigResult::getInstanceId()const
{
	return instanceId_;
}

long DescribeVersionConfigResult::getLastInstanceReleaseTime()const
{
	return lastInstanceReleaseTime_;
}

long DescribeVersionConfigResult::getCreateTime()const
{
	return createTime_;
}

int DescribeVersionConfigResult::getSasScreen()const
{
	return sasScreen_;
}

long DescribeVersionConfigResult::getCspmCapacity()const
{
	return cspmCapacity_;
}

bool DescribeVersionConfigResult::getIsSasOpening()const
{
	return isSasOpening_;
}

int DescribeVersionConfigResult::getLogCapacity()const
{
	return logCapacity_;
}

int DescribeVersionConfigResult::getFlag()const
{
	return flag_;
}

int DescribeVersionConfigResult::getMVAuthCount()const
{
	return mVAuthCount_;
}

long DescribeVersionConfigResult::getGmtCreate()const
{
	return gmtCreate_;
}

long DescribeVersionConfigResult::getReleaseTime()const
{
	return releaseTime_;
}

bool DescribeVersionConfigResult::getIsNewContainerVersion()const
{
	return isNewContainerVersion_;
}

int DescribeVersionConfigResult::getMVUnusedAuthCount()const
{
	return mVUnusedAuthCount_;
}

int DescribeVersionConfigResult::getIsTrialVersion()const
{
	return isTrialVersion_;
}

int DescribeVersionConfigResult::getAppWhiteList()const
{
	return appWhiteList_;
}

