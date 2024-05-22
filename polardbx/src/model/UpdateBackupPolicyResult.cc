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

#include <alibabacloud/polardbx/model/UpdateBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

UpdateBackupPolicyResult::UpdateBackupPolicyResult() :
	ServiceResult()
{}

UpdateBackupPolicyResult::UpdateBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateBackupPolicyResult::~UpdateBackupPolicyResult()
{}

void UpdateBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Account"];
	for (auto valueDataAccount : allDataNode)
	{
		Account dataObject;
		if(!valueDataAccount["LogLocalRetentionSpace"].isNull())
			dataObject.logLocalRetentionSpace = std::stoi(valueDataAccount["LogLocalRetentionSpace"].asString());
		if(!valueDataAccount["DBInstanceName"].isNull())
			dataObject.dBInstanceName = valueDataAccount["DBInstanceName"].asString();
		if(!valueDataAccount["BackupWay"].isNull())
			dataObject.backupWay = valueDataAccount["BackupWay"].asString();
		if(!valueDataAccount["BackupPeriod"].isNull())
			dataObject.backupPeriod = valueDataAccount["BackupPeriod"].asString();
		if(!valueDataAccount["ForceCleanOnHighSpaceUsage"].isNull())
			dataObject.forceCleanOnHighSpaceUsage = std::stoi(valueDataAccount["ForceCleanOnHighSpaceUsage"].asString());
		if(!valueDataAccount["BackupType"].isNull())
			dataObject.backupType = valueDataAccount["BackupType"].asString();
		if(!valueDataAccount["LocalLogRetention"].isNull())
			dataObject.localLogRetention = std::stoi(valueDataAccount["LocalLogRetention"].asString());
		if(!valueDataAccount["RemoveLogRetention"].isNull())
			dataObject.removeLogRetention = std::stoi(valueDataAccount["RemoveLogRetention"].asString());
		if(!valueDataAccount["BackupPlanBegin"].isNull())
			dataObject.backupPlanBegin = valueDataAccount["BackupPlanBegin"].asString();
		if(!valueDataAccount["BackupSetRetention"].isNull())
			dataObject.backupSetRetention = std::stoi(valueDataAccount["BackupSetRetention"].asString());
		if(!valueDataAccount["IsEnabled"].isNull())
			dataObject.isEnabled = std::stoi(valueDataAccount["IsEnabled"].asString());
		if(!valueDataAccount["ColdDataBackupInterval"].isNull())
			dataObject.coldDataBackupInterval = std::stoi(valueDataAccount["ColdDataBackupInterval"].asString());
		if(!valueDataAccount["ColdDataBackupRetention"].isNull())
			dataObject.coldDataBackupRetention = std::stoi(valueDataAccount["ColdDataBackupRetention"].asString());
		if(!valueDataAccount["LocalLogRetentionNumber"].isNull())
			dataObject.localLogRetentionNumber = std::stoi(valueDataAccount["LocalLogRetentionNumber"].asString());
		if(!valueDataAccount["IsCrossRegionDataBackupEnabled"].isNull())
			dataObject.isCrossRegionDataBackupEnabled = valueDataAccount["IsCrossRegionDataBackupEnabled"].asString() == "true";
		if(!valueDataAccount["IsCrossRegionLogBackupEnabled"].isNull())
			dataObject.isCrossRegionLogBackupEnabled = valueDataAccount["IsCrossRegionLogBackupEnabled"].asString() == "true";
		if(!valueDataAccount["DestCrossRegion"].isNull())
			dataObject.destCrossRegion = valueDataAccount["DestCrossRegion"].asString();
		if(!valueDataAccount["CrossRegionDataBackupRetention"].isNull())
			dataObject.crossRegionDataBackupRetention = std::stoi(valueDataAccount["CrossRegionDataBackupRetention"].asString());
		if(!valueDataAccount["CrossRegionLogBackupRetention"].isNull())
			dataObject.crossRegionLogBackupRetention = std::stoi(valueDataAccount["CrossRegionLogBackupRetention"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateBackupPolicyResult::getMessage()const
{
	return message_;
}

std::vector<UpdateBackupPolicyResult::Account> UpdateBackupPolicyResult::getData()const
{
	return data_;
}

bool UpdateBackupPolicyResult::getSuccess()const
{
	return success_;
}

