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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayHaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSmartAccessGatewayHaResult::DescribeSmartAccessGatewayHaResult() :
	ServiceResult()
{}

DescribeSmartAccessGatewayHaResult::DescribeSmartAccessGatewayHaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmartAccessGatewayHaResult::~DescribeSmartAccessGatewayHaResult()
{}

void DescribeSmartAccessGatewayHaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["DeviceLevelBackupState"].isNull())
		deviceLevelBackupState_ = value["DeviceLevelBackupState"].asString();
	if(!value["DeviceLevelBackupType"].isNull())
		deviceLevelBackupType_ = value["DeviceLevelBackupType"].asString();
	if(!value["MainDeviceId"].isNull())
		mainDeviceId_ = value["MainDeviceId"].asString();
	if(!value["BackupDeviceId"].isNull())
		backupDeviceId_ = value["BackupDeviceId"].asString();
	if(!value["LinkLevelBackupState"].isNull())
		linkLevelBackupState_ = value["LinkLevelBackupState"].asString();
	if(!value["LinkLevelBackupType"].isNull())
		linkLevelBackupType_ = value["LinkLevelBackupType"].asString();
	if(!value["MainLinkId"].isNull())
		mainLinkId_ = value["MainLinkId"].asString();
	if(!value["BackupLinkId"].isNull())
		backupLinkId_ = value["BackupLinkId"].asString();
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();

}

std::string DescribeSmartAccessGatewayHaResult::getDeviceLevelBackupState()const
{
	return deviceLevelBackupState_;
}

std::string DescribeSmartAccessGatewayHaResult::getBackupLinkId()const
{
	return backupLinkId_;
}

std::string DescribeSmartAccessGatewayHaResult::getBackupDeviceId()const
{
	return backupDeviceId_;
}

std::string DescribeSmartAccessGatewayHaResult::getLinkLevelBackupType()const
{
	return linkLevelBackupType_;
}

std::string DescribeSmartAccessGatewayHaResult::getMainLinkId()const
{
	return mainLinkId_;
}

std::string DescribeSmartAccessGatewayHaResult::getSmartAGId()const
{
	return smartAGId_;
}

std::string DescribeSmartAccessGatewayHaResult::getDeviceLevelBackupType()const
{
	return deviceLevelBackupType_;
}

std::string DescribeSmartAccessGatewayHaResult::getLinkLevelBackupState()const
{
	return linkLevelBackupState_;
}

std::string DescribeSmartAccessGatewayHaResult::getMainDeviceId()const
{
	return mainDeviceId_;
}

