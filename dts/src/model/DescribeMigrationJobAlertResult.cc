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

#include <alibabacloud/dts/model/DescribeMigrationJobAlertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeMigrationJobAlertResult::DescribeMigrationJobAlertResult() :
	ServiceResult()
{}

DescribeMigrationJobAlertResult::DescribeMigrationJobAlertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMigrationJobAlertResult::~DescribeMigrationJobAlertResult()
{}

void DescribeMigrationJobAlertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["MigrationJobName"].isNull())
		migrationJobName_ = value["MigrationJobName"].asString();
	if(!value["ErrorAlertStatus"].isNull())
		errorAlertStatus_ = value["ErrorAlertStatus"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrorAlertPhone"].isNull())
		errorAlertPhone_ = value["ErrorAlertPhone"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DelayAlertStatus"].isNull())
		delayAlertStatus_ = value["DelayAlertStatus"].asString();
	if(!value["DelayAlertPhone"].isNull())
		delayAlertPhone_ = value["DelayAlertPhone"].asString();
	if(!value["MigrationJobId"].isNull())
		migrationJobId_ = value["MigrationJobId"].asString();
	if(!value["DelayOverSeconds"].isNull())
		delayOverSeconds_ = value["DelayOverSeconds"].asString();

}

std::string DescribeMigrationJobAlertResult::getErrorAlertPhone()const
{
	return errorAlertPhone_;
}

std::string DescribeMigrationJobAlertResult::getDelayAlertPhone()const
{
	return delayAlertPhone_;
}

std::string DescribeMigrationJobAlertResult::getMigrationJobName()const
{
	return migrationJobName_;
}

std::string DescribeMigrationJobAlertResult::getErrorAlertStatus()const
{
	return errorAlertStatus_;
}

std::string DescribeMigrationJobAlertResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeMigrationJobAlertResult::getDelayAlertStatus()const
{
	return delayAlertStatus_;
}

std::string DescribeMigrationJobAlertResult::getSuccess()const
{
	return success_;
}

std::string DescribeMigrationJobAlertResult::getDelayOverSeconds()const
{
	return delayOverSeconds_;
}

std::string DescribeMigrationJobAlertResult::getErrCode()const
{
	return errCode_;
}

std::string DescribeMigrationJobAlertResult::getMigrationJobId()const
{
	return migrationJobId_;
}

