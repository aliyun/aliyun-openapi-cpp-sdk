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

#include <alibabacloud/paifeaturestore/model/GetTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetTaskResult::GetTaskResult() :
	ServiceResult()
{}

GetTaskResult::GetTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskResult::~GetTaskResult()
{}

void GetTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["ObjectType"].isNull())
		objectType_ = value["ObjectType"].asString();
	if(!value["ObjectId"].isNull())
		objectId_ = value["ObjectId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Config"].isNull())
		config_ = value["Config"].asString();
	if(!value["RunningConfig"].isNull())
		runningConfig_ = value["RunningConfig"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();
	if(!value["GmtExecutedTime"].isNull())
		gmtExecutedTime_ = value["GmtExecutedTime"].asString();
	if(!value["GmtFinishedTime"].isNull())
		gmtFinishedTime_ = value["GmtFinishedTime"].asString();

}

std::string GetTaskResult::getStatus()const
{
	return status_;
}

std::string GetTaskResult::getObjectType()const
{
	return objectType_;
}

std::string GetTaskResult::getType()const
{
	return type_;
}

std::string GetTaskResult::getRunningConfig()const
{
	return runningConfig_;
}

std::string GetTaskResult::getProjectName()const
{
	return projectName_;
}

std::string GetTaskResult::getObjectId()const
{
	return objectId_;
}

std::string GetTaskResult::getConfig()const
{
	return config_;
}

std::string GetTaskResult::getGmtExecutedTime()const
{
	return gmtExecutedTime_;
}

std::string GetTaskResult::getGmtFinishedTime()const
{
	return gmtFinishedTime_;
}

std::string GetTaskResult::getProjectId()const
{
	return projectId_;
}

std::string GetTaskResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetTaskResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

