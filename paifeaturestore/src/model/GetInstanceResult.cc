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

#include <alibabacloud/paifeaturestore/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto featureDBInstanceInfoNode = value["FeatureDBInstanceInfo"];
	if(!featureDBInstanceInfoNode["Status"].isNull())
		featureDBInstanceInfo_.status = featureDBInstanceInfoNode["Status"].asString();
	auto featureDBInfoNode = value["FeatureDBInfo"];
	if(!featureDBInfoNode["Status"].isNull())
		featureDBInfo_.status = featureDBInfoNode["Status"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();
	if(!value["Progress"].isNull())
		progress_ = value["Progress"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();

}

std::string GetInstanceResult::getStatus()const
{
	return status_;
}

double GetInstanceResult::getProgress()const
{
	return progress_;
}

std::string GetInstanceResult::getType()const
{
	return type_;
}

std::string GetInstanceResult::getMessage()const
{
	return message_;
}

GetInstanceResult::FeatureDBInstanceInfo GetInstanceResult::getFeatureDBInstanceInfo()const
{
	return featureDBInstanceInfo_;
}

GetInstanceResult::FeatureDBInfo GetInstanceResult::getFeatureDBInfo()const
{
	return featureDBInfo_;
}

std::string GetInstanceResult::getRegionId()const
{
	return regionId_;
}

std::string GetInstanceResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetInstanceResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

