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

#include <alibabacloud/mse/model/AddMigrationTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

AddMigrationTaskResult::AddMigrationTaskResult() :
	ServiceResult()
{}

AddMigrationTaskResult::AddMigrationTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddMigrationTaskResult::~AddMigrationTaskResult()
{}

void AddMigrationTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["ClusterType"].isNull())
		data_.clusterType = dataNode["ClusterType"].asString();
	if(!dataNode["OriginInstanceAddress"].isNull())
		data_.originInstanceAddress = dataNode["OriginInstanceAddress"].asString();
	if(!dataNode["OriginInstanceName"].isNull())
		data_.originInstanceName = dataNode["OriginInstanceName"].asString();
	if(!dataNode["OriginInstanceNamespace"].isNull())
		data_.originInstanceNamespace = dataNode["OriginInstanceNamespace"].asString();
	if(!dataNode["TargetInstanceId"].isNull())
		data_.targetInstanceId = dataNode["TargetInstanceId"].asString();
	if(!dataNode["TargetClusterName"].isNull())
		data_.targetClusterName = dataNode["TargetClusterName"].asString();
	if(!dataNode["TargetClusterUrl"].isNull())
		data_.targetClusterUrl = dataNode["TargetClusterUrl"].asString();
	if(!dataNode["ProjectDesc"].isNull())
		data_.projectDesc = dataNode["ProjectDesc"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string AddMigrationTaskResult::getHttpCode()const
{
	return httpCode_;
}

std::string AddMigrationTaskResult::getMessage()const
{
	return message_;
}

AddMigrationTaskResult::Data AddMigrationTaskResult::getData()const
{
	return data_;
}

std::string AddMigrationTaskResult::getErrorCode()const
{
	return errorCode_;
}

bool AddMigrationTaskResult::getSuccess()const
{
	return success_;
}

