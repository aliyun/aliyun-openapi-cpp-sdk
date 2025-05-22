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

#include <alibabacloud/rds/model/EvaluateLocalExtendDiskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

EvaluateLocalExtendDiskResult::EvaluateLocalExtendDiskResult() :
	ServiceResult()
{}

EvaluateLocalExtendDiskResult::EvaluateLocalExtendDiskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EvaluateLocalExtendDiskResult::~EvaluateLocalExtendDiskResult()
{}

void EvaluateLocalExtendDiskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Available"].isNull())
		available_ = value["Available"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["DBInstanceTransType"].isNull())
		dBInstanceTransType_ = value["DBInstanceTransType"].asString();
	if(!value["LocalUpgradeDiskLimit"].isNull())
		localUpgradeDiskLimit_ = std::stol(value["LocalUpgradeDiskLimit"].asString());

}

std::string EvaluateLocalExtendDiskResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string EvaluateLocalExtendDiskResult::getDBInstanceTransType()const
{
	return dBInstanceTransType_;
}

std::string EvaluateLocalExtendDiskResult::getAvailable()const
{
	return available_;
}

long EvaluateLocalExtendDiskResult::getLocalUpgradeDiskLimit()const
{
	return localUpgradeDiskLimit_;
}

