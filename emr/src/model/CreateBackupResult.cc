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

#include <alibabacloud/emr/model/CreateBackupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

CreateBackupResult::CreateBackupResult() :
	ServiceResult()
{}

CreateBackupResult::CreateBackupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBackupResult::~CreateBackupResult()
{}

void CreateBackupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["DataSourceId"].isNull())
		dataSourceId_ = std::stol(value["DataSourceId"].asString());
	if(!value["TaskType"].isNull())
		taskType_ = value["TaskType"].asString();
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["TaskDetail"].isNull())
		taskDetail_ = value["TaskDetail"].asString();
	if(!value["TaskResultDetail"].isNull())
		taskResultDetail_ = value["TaskResultDetail"].asString();
	if(!value["TaskProcess"].isNull())
		taskProcess_ = std::stoi(value["TaskProcess"].asString());
	if(!value["TriggerUser"].isNull())
		triggerUser_ = value["TriggerUser"].asString();
	if(!value["TriggerType"].isNull())
		triggerType_ = value["TriggerType"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["ClusterBizId"].isNull())
		clusterBizId_ = value["ClusterBizId"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["EcmTaskId"].isNull())
		ecmTaskId_ = std::stol(value["EcmTaskId"].asString());

}

std::string CreateBackupResult::getTriggerType()const
{
	return triggerType_;
}

long CreateBackupResult::getEndTime()const
{
	return endTime_;
}

long CreateBackupResult::getStartTime()const
{
	return startTime_;
}

long CreateBackupResult::getGmtModified()const
{
	return gmtModified_;
}

std::string CreateBackupResult::getTaskStatus()const
{
	return taskStatus_;
}

std::string CreateBackupResult::getTaskDetail()const
{
	return taskDetail_;
}

std::string CreateBackupResult::getTriggerUser()const
{
	return triggerUser_;
}

long CreateBackupResult::getGmtCreate()const
{
	return gmtCreate_;
}

int CreateBackupResult::getTaskProcess()const
{
	return taskProcess_;
}

std::string CreateBackupResult::getClusterBizId()const
{
	return clusterBizId_;
}

std::string CreateBackupResult::getTaskType()const
{
	return taskType_;
}

std::string CreateBackupResult::getBizId()const
{
	return bizId_;
}

long CreateBackupResult::getDataSourceId()const
{
	return dataSourceId_;
}

std::string CreateBackupResult::getHostName()const
{
	return hostName_;
}

long CreateBackupResult::getEcmTaskId()const
{
	return ecmTaskId_;
}

std::string CreateBackupResult::getTaskResultDetail()const
{
	return taskResultDetail_;
}

