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

#include <alibabacloud/dbs/model/DescribeSandboxFromRDSResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeSandboxFromRDSResult::DescribeSandboxFromRDSResult() :
	ServiceResult()
{}

DescribeSandboxFromRDSResult::DescribeSandboxFromRDSResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSandboxFromRDSResult::~DescribeSandboxFromRDSResult()
{}

void DescribeSandboxFromRDSResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["SourceId"].isNull())
		sourceId_ = value["SourceId"].asString();
	if(!value["BackupPlanName"].isNull())
		backupPlanName_ = value["BackupPlanName"].asString();
	if(!value["BackupLog"].isNull())
		backupLog_ = value["BackupLog"].asString();
	if(!value["DbsInstanceId"].isNull())
		dbsInstanceId_ = value["DbsInstanceId"].asString();
	if(!value["SupportSandbox"].isNull())
		supportSandbox_ = value["SupportSandbox"].asString() == "true";
	if(!value["SandboxInstanceCount"].isNull())
		sandboxInstanceCount_ = std::stoi(value["SandboxInstanceCount"].asString());
	if(!value["SandboxRecoverStartTime"].isNull())
		sandboxRecoverStartTime_ = std::stol(value["SandboxRecoverStartTime"].asString());
	if(!value["SandboxRecoverEndTime"].isNull())
		sandboxRecoverEndTime_ = std::stol(value["SandboxRecoverEndTime"].asString());
	if(!value["EnabledSandbox"].isNull())
		enabledSandbox_ = value["EnabledSandbox"].asString() == "true";

}

std::string DescribeSandboxFromRDSResult::getBackupPlanName()const
{
	return backupPlanName_;
}

std::string DescribeSandboxFromRDSResult::getDbsInstanceId()const
{
	return dbsInstanceId_;
}

std::string DescribeSandboxFromRDSResult::getSourceId()const
{
	return sourceId_;
}

bool DescribeSandboxFromRDSResult::getSupportSandbox()const
{
	return supportSandbox_;
}

long DescribeSandboxFromRDSResult::getSandboxRecoverEndTime()const
{
	return sandboxRecoverEndTime_;
}

std::string DescribeSandboxFromRDSResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeSandboxFromRDSResult::getSuccess()const
{
	return success_;
}

std::string DescribeSandboxFromRDSResult::getErrCode()const
{
	return errCode_;
}

bool DescribeSandboxFromRDSResult::getEnabledSandbox()const
{
	return enabledSandbox_;
}

long DescribeSandboxFromRDSResult::getSandboxRecoverStartTime()const
{
	return sandboxRecoverStartTime_;
}

int DescribeSandboxFromRDSResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeSandboxFromRDSResult::getBackupLog()const
{
	return backupLog_;
}

int DescribeSandboxFromRDSResult::getSandboxInstanceCount()const
{
	return sandboxInstanceCount_;
}

