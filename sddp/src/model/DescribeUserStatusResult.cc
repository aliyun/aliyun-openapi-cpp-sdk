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

#include <alibabacloud/sddp/model/DescribeUserStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeUserStatusResult::DescribeUserStatusResult() :
	ServiceResult()
{}

DescribeUserStatusResult::DescribeUserStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserStatusResult::~DescribeUserStatusResult()
{}

void DescribeUserStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userStatusNode = value["UserStatus"];
	if(!userStatusNode["UseOssSize"].isNull())
		userStatus_.useOssSize = std::stol(userStatusNode["UseOssSize"].asString());
	if(!userStatusNode["UseInstanceNum"].isNull())
		userStatus_.useInstanceNum = std::stoi(userStatusNode["UseInstanceNum"].asString());
	if(!userStatusNode["InstanceNum"].isNull())
		userStatus_.instanceNum = std::stoi(userStatusNode["InstanceNum"].asString());
	if(!userStatusNode["ChargeType"].isNull())
		userStatus_.chargeType = userStatusNode["ChargeType"].asString();
	if(!userStatusNode["IncSensitiveTables"].isNull())
		userStatus_.incSensitiveTables = std::stol(userStatusNode["IncSensitiveTables"].asString());
	if(!userStatusNode["AuditUpgradeStatus"].isNull())
		userStatus_.auditUpgradeStatus = userStatusNode["AuditUpgradeStatus"].asString() == "true";
	if(!userStatusNode["DataMaskTasks"].isNull())
		userStatus_.dataMaskTasks = std::stol(userStatusNode["DataMaskTasks"].asString());
	if(!userStatusNode["Authed"].isNull())
		userStatus_.authed = userStatusNode["Authed"].asString() == "true";
	if(!userStatusNode["LabStatus"].isNull())
		userStatus_.labStatus = std::stoi(userStatusNode["LabStatus"].asString());
	if(!userStatusNode["Version"].isNull())
		userStatus_.version = userStatusNode["Version"].asString();
	if(!userStatusNode["OdpsSet"].isNull())
		userStatus_.odpsSet = userStatusNode["OdpsSet"].asString() == "true";
	if(!userStatusNode["OssBucketSet"].isNull())
		userStatus_.ossBucketSet = userStatusNode["OssBucketSet"].asString() == "true";
	if(!userStatusNode["SensitiveTable"].isNull())
		userStatus_.sensitiveTable = std::stol(userStatusNode["SensitiveTable"].asString());
	if(!userStatusNode["RemainDays"].isNull())
		userStatus_.remainDays = std::stoi(userStatusNode["RemainDays"].asString());
	if(!userStatusNode["TotalDataMaskColumns"].isNull())
		userStatus_.totalDataMaskColumns = std::stol(userStatusNode["TotalDataMaskColumns"].asString());
	if(!userStatusNode["DatamaskColumns"].isNull())
		userStatus_.datamaskColumns = std::stol(userStatusNode["DatamaskColumns"].asString());
	if(!userStatusNode["AuthProductList"].isNull())
		userStatus_.authProductList = userStatusNode["AuthProductList"].asString();
	if(!userStatusNode["Trail"].isNull())
		userStatus_.trail = userStatusNode["Trail"].asString() == "true";
	if(!userStatusNode["DivulgeCount"].isNull())
		userStatus_.divulgeCount = std::stol(userStatusNode["DivulgeCount"].asString());
	if(!userStatusNode["RdsSet"].isNull())
		userStatus_.rdsSet = userStatusNode["RdsSet"].asString() == "true";
	if(!userStatusNode["DbAuditStatus"].isNull())
		userStatus_.dbAuditStatus = std::stoi(userStatusNode["DbAuditStatus"].asString());
	if(!userStatusNode["RenewStatus"].isNull())
		userStatus_.renewStatus = userStatusNode["RenewStatus"].asString() == "true";
	if(!userStatusNode["SensitiveObjects"].isNull())
		userStatus_.sensitiveObjects = std::stol(userStatusNode["SensitiveObjects"].asString());
	if(!userStatusNode["DataMaskColumns"].isNull())
		userStatus_.dataMaskColumns = std::stol(userStatusNode["DataMaskColumns"].asString());
	if(!userStatusNode["DlpTotalCount"].isNull())
		userStatus_.dlpTotalCount = std::stol(userStatusNode["DlpTotalCount"].asString());
	if(!userStatusNode["SensitiveObject"].isNull())
		userStatus_.sensitiveObject = std::stol(userStatusNode["SensitiveObject"].asString());
	if(!userStatusNode["DlpCount"].isNull())
		userStatus_.dlpCount = std::stol(userStatusNode["DlpCount"].asString());
	if(!userStatusNode["InstanceId"].isNull())
		userStatus_.instanceId = userStatusNode["InstanceId"].asString();
	if(!userStatusNode["AccessKeyId"].isNull())
		userStatus_.accessKeyId = userStatusNode["AccessKeyId"].asString();
	if(!userStatusNode["OssSize"].isNull())
		userStatus_.ossSize = std::stol(userStatusNode["OssSize"].asString());
	if(!userStatusNode["SensitiveTotalTop"].isNull())
		userStatus_.sensitiveTotalTop = userStatusNode["SensitiveTotalTop"].asString();
	if(!userStatusNode["SensitiveTables"].isNull())
		userStatus_.sensitiveTables = std::stol(userStatusNode["SensitiveTables"].asString());
	if(!userStatusNode["SensitiveTop"].isNull())
		userStatus_.sensitiveTop = userStatusNode["SensitiveTop"].asString();
	if(!userStatusNode["Purchased"].isNull())
		userStatus_.purchased = userStatusNode["Purchased"].asString() == "true";
	if(!userStatusNode["Buyed"].isNull())
		userStatus_.buyed = userStatusNode["Buyed"].asString() == "true";
	if(!userStatusNode["IncSensitiveObjects"].isNull())
		userStatus_.incSensitiveObjects = std::stol(userStatusNode["IncSensitiveObjects"].asString());
	if(!userStatusNode["InstanceStatus"].isNull())
		userStatus_.instanceStatus = std::stoi(userStatusNode["InstanceStatus"].asString());
	if(!userStatusNode["AssetScanned"].isNull())
		userStatus_.assetScanned = userStatusNode["AssetScanned"].asString() == "true";
	if(!userStatusNode["AlarmCount"].isNull())
		userStatus_.alarmCount = std::stol(userStatusNode["AlarmCount"].asString());
	if(!userStatusNode["DisplayTime"].isNull())
		userStatus_.displayTime = userStatusNode["DisplayTime"].asString();
	if(!userStatusNode["DataManagerRole"].isNull())
		userStatus_.dataManagerRole = std::stoi(userStatusNode["DataManagerRole"].asString());
	if(!userStatusNode["ReleaseDays"].isNull())
		userStatus_.releaseDays = std::stoi(userStatusNode["ReleaseDays"].asString());
	if(!userStatusNode["AuditClosable"].isNull())
		userStatus_.auditClosable = userStatusNode["AuditClosable"].asString() == "true";
	if(!userStatusNode["AuditReleasable"].isNull())
		userStatus_.auditReleasable = userStatusNode["AuditReleasable"].asString() == "true";
	if(!userStatusNode["ReleaseTime"].isNull())
		userStatus_.releaseTime = std::stol(userStatusNode["ReleaseTime"].asString());
	if(!userStatusNode["InstanceTotalCount"].isNull())
		userStatus_.instanceTotalCount = std::stol(userStatusNode["InstanceTotalCount"].asString());
	if(!userStatusNode["OssTotalSize"].isNull())
		userStatus_.ossTotalSize = std::stol(userStatusNode["OssTotalSize"].asString());
	if(!userStatusNode["UseAgentAudit"].isNull())
		userStatus_.useAgentAudit = userStatusNode["UseAgentAudit"].asString() == "true";
	if(!userStatusNode["ProtectionDays"].isNull())
		userStatus_.protectionDays = std::stoi(userStatusNode["ProtectionDays"].asString());

}

DescribeUserStatusResult::UserStatus DescribeUserStatusResult::getUserStatus()const
{
	return userStatus_;
}

