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

#include <alibabacloud/dms-enterprise/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["VpcId"].isNull())
		instance_.vpcId = instanceNode["VpcId"].asString();
	if(!instanceNode["DatabaseUser"].isNull())
		instance_.databaseUser = instanceNode["DatabaseUser"].asString();
	if(!instanceNode["DbaId"].isNull())
		instance_.dbaId = instanceNode["DbaId"].asString();
	if(!instanceNode["UseDsql"].isNull())
		instance_.useDsql = std::stoi(instanceNode["UseDsql"].asString());
	if(!instanceNode["Port"].isNull())
		instance_.port = std::stoi(instanceNode["Port"].asString());
	if(!instanceNode["EcsInstanceId"].isNull())
		instance_.ecsInstanceId = instanceNode["EcsInstanceId"].asString();
	if(!instanceNode["EnvType"].isNull())
		instance_.envType = instanceNode["EnvType"].asString();
	if(!instanceNode["Sid"].isNull())
		instance_.sid = instanceNode["Sid"].asString();
	if(!instanceNode["SafeRuleId"].isNull())
		instance_.safeRuleId = instanceNode["SafeRuleId"].asString();
	if(!instanceNode["DbaNickName"].isNull())
		instance_.dbaNickName = instanceNode["DbaNickName"].asString();
	if(!instanceNode["QueryTimeout"].isNull())
		instance_.queryTimeout = std::stoi(instanceNode["QueryTimeout"].asString());
	if(!instanceNode["InstanceSource"].isNull())
		instance_.instanceSource = instanceNode["InstanceSource"].asString();
	if(!instanceNode["Host"].isNull())
		instance_.host = instanceNode["Host"].asString();
	if(!instanceNode["State"].isNull())
		instance_.state = instanceNode["State"].asString();
	if(!instanceNode["DataLinkName"].isNull())
		instance_.dataLinkName = instanceNode["DataLinkName"].asString();
	if(!instanceNode["ExportTimeout"].isNull())
		instance_.exportTimeout = std::stoi(instanceNode["ExportTimeout"].asString());
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceType"].isNull())
		instance_.instanceType = instanceNode["InstanceType"].asString();
	if(!instanceNode["DatabasePassword"].isNull())
		instance_.databasePassword = instanceNode["DatabasePassword"].asString();
	if(!instanceNode["InstanceAlias"].isNull())
		instance_.instanceAlias = instanceNode["InstanceAlias"].asString();
	if(!instanceNode["DdlOnline"].isNull())
		instance_.ddlOnline = std::stoi(instanceNode["DdlOnline"].asString());
	if(!instanceNode["EcsRegion"].isNull())
		instance_.ecsRegion = instanceNode["EcsRegion"].asString();
	if(!instanceNode["SellSitd"].isNull())
		instance_.sellSitd = instanceNode["SellSitd"].asString();
	auto standardGroupNode = instanceNode["StandardGroup"];
	if(!standardGroupNode["GroupName"].isNull())
		instance_.standardGroup.groupName = standardGroupNode["GroupName"].asString();
	if(!standardGroupNode["GroupMode"].isNull())
		instance_.standardGroup.groupMode = standardGroupNode["GroupMode"].asString();
		auto allOwnerIdList = instanceNode["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			instance_.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = instanceNode["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			instance_.ownerNameList.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetInstanceResult::Instance GetInstanceResult::getInstance()const
{
	return instance_;
}

std::string GetInstanceResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetInstanceResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetInstanceResult::getSuccess()const
{
	return success_;
}

