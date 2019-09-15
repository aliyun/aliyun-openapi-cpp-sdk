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

#include <alibabacloud/aegis/model/DescribeScreenVersionConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenVersionConfigResult::DescribeScreenVersionConfigResult() :
	ServiceResult()
{}

DescribeScreenVersionConfigResult::DescribeScreenVersionConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenVersionConfigResult::~DescribeScreenVersionConfigResult()
{}

void DescribeScreenVersionConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AssetLevel"].isNull())
		assetLevel_ = std::stoi(value["AssetLevel"].asString());
	if(!value["AvdsFlag"].isNull())
		avdsFlag_ = std::stoi(value["AvdsFlag"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Flag"].isNull())
		flag_ = std::stoi(value["Flag"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["IsSasOpening"].isNull())
		isSasOpening_ = value["IsSasOpening"].asString() == "true";
	if(!value["IsTrialVersion"].isNull())
		isTrialVersion_ = std::stoi(value["IsTrialVersion"].asString());
	if(!value["LogCapacity"].isNull())
		logCapacity_ = std::stoi(value["LogCapacity"].asString());
	if(!value["LogTime"].isNull())
		logTime_ = std::stoi(value["LogTime"].asString());
	if(!value["ReleaseTime"].isNull())
		releaseTime_ = std::stol(value["ReleaseTime"].asString());
	if(!value["SasLog"].isNull())
		sasLog_ = std::stoi(value["SasLog"].asString());
	if(!value["SasScreen"].isNull())
		sasScreen_ = std::stoi(value["SasScreen"].asString());
	if(!value["Version"].isNull())
		version_ = std::stoi(value["Version"].asString());

}

int DescribeScreenVersionConfigResult::getAssetLevel()const
{
	return assetLevel_;
}

std::string DescribeScreenVersionConfigResult::getInstanceId()const
{
	return instanceId_;
}

long DescribeScreenVersionConfigResult::getCreateTime()const
{
	return createTime_;
}

int DescribeScreenVersionConfigResult::getLogTime()const
{
	return logTime_;
}

int DescribeScreenVersionConfigResult::getSasScreen()const
{
	return sasScreen_;
}

bool DescribeScreenVersionConfigResult::getIsSasOpening()const
{
	return isSasOpening_;
}

int DescribeScreenVersionConfigResult::getLogCapacity()const
{
	return logCapacity_;
}

int DescribeScreenVersionConfigResult::getFlag()const
{
	return flag_;
}

int DescribeScreenVersionConfigResult::getSasLog()const
{
	return sasLog_;
}

long DescribeScreenVersionConfigResult::getReleaseTime()const
{
	return releaseTime_;
}

int DescribeScreenVersionConfigResult::getVersion()const
{
	return version_;
}

int DescribeScreenVersionConfigResult::getAvdsFlag()const
{
	return avdsFlag_;
}

int DescribeScreenVersionConfigResult::getIsTrialVersion()const
{
	return isTrialVersion_;
}

