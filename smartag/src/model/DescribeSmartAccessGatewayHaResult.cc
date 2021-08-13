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
	auto allLinkBackupInfoListNode = value["LinkBackupInfoList"]["LinkBackupInfoListItem"];
	for (auto valueLinkBackupInfoListLinkBackupInfoListItem : allLinkBackupInfoListNode)
	{
		LinkBackupInfoListItem linkBackupInfoListObject;
		if(!valueLinkBackupInfoListLinkBackupInfoListItem["MainLinkId"].isNull())
			linkBackupInfoListObject.mainLinkId = valueLinkBackupInfoListLinkBackupInfoListItem["MainLinkId"].asString();
		if(!valueLinkBackupInfoListLinkBackupInfoListItem["BackupLinkState"].isNull())
			linkBackupInfoListObject.backupLinkState = valueLinkBackupInfoListLinkBackupInfoListItem["BackupLinkState"].asString();
		if(!valueLinkBackupInfoListLinkBackupInfoListItem["LinkLevelBackupState"].isNull())
			linkBackupInfoListObject.linkLevelBackupState = valueLinkBackupInfoListLinkBackupInfoListItem["LinkLevelBackupState"].asString();
		if(!valueLinkBackupInfoListLinkBackupInfoListItem["BackupLinkId"].isNull())
			linkBackupInfoListObject.backupLinkId = valueLinkBackupInfoListLinkBackupInfoListItem["BackupLinkId"].asString();
		if(!valueLinkBackupInfoListLinkBackupInfoListItem["MainLinkState"].isNull())
			linkBackupInfoListObject.mainLinkState = valueLinkBackupInfoListLinkBackupInfoListItem["MainLinkState"].asString();
		if(!valueLinkBackupInfoListLinkBackupInfoListItem["LinkLevelBackupType"].isNull())
			linkBackupInfoListObject.linkLevelBackupType = valueLinkBackupInfoListLinkBackupInfoListItem["LinkLevelBackupType"].asString();
		linkBackupInfoList_.push_back(linkBackupInfoListObject);
	}
	if(!value["DeviceLevelBackupState"].isNull())
		deviceLevelBackupState_ = value["DeviceLevelBackupState"].asString();
	if(!value["BackupDeviceId"].isNull())
		backupDeviceId_ = value["BackupDeviceId"].asString();
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();
	if(!value["DeviceLevelBackupType"].isNull())
		deviceLevelBackupType_ = value["DeviceLevelBackupType"].asString();
	if(!value["MainDeviceId"].isNull())
		mainDeviceId_ = value["MainDeviceId"].asString();

}

std::string DescribeSmartAccessGatewayHaResult::getDeviceLevelBackupState()const
{
	return deviceLevelBackupState_;
}

std::vector<DescribeSmartAccessGatewayHaResult::LinkBackupInfoListItem> DescribeSmartAccessGatewayHaResult::getLinkBackupInfoList()const
{
	return linkBackupInfoList_;
}

std::string DescribeSmartAccessGatewayHaResult::getBackupDeviceId()const
{
	return backupDeviceId_;
}

std::string DescribeSmartAccessGatewayHaResult::getSmartAGId()const
{
	return smartAGId_;
}

std::string DescribeSmartAccessGatewayHaResult::getDeviceLevelBackupType()const
{
	return deviceLevelBackupType_;
}

std::string DescribeSmartAccessGatewayHaResult::getMainDeviceId()const
{
	return mainDeviceId_;
}

