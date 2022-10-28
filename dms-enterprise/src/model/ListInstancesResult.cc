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

#include <alibabacloud/dms-enterprise/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["Instance"];
	for (auto valueInstanceListInstance : allInstanceListNode)
	{
		Instance instanceListObject;
		if(!valueInstanceListInstance["VpcId"].isNull())
			instanceListObject.vpcId = valueInstanceListInstance["VpcId"].asString();
		if(!valueInstanceListInstance["DatabaseUser"].isNull())
			instanceListObject.databaseUser = valueInstanceListInstance["DatabaseUser"].asString();
		if(!valueInstanceListInstance["DbaId"].isNull())
			instanceListObject.dbaId = valueInstanceListInstance["DbaId"].asString();
		if(!valueInstanceListInstance["UseDsql"].isNull())
			instanceListObject.useDsql = std::stoi(valueInstanceListInstance["UseDsql"].asString());
		if(!valueInstanceListInstance["Port"].isNull())
			instanceListObject.port = std::stoi(valueInstanceListInstance["Port"].asString());
		if(!valueInstanceListInstance["EcsInstanceId"].isNull())
			instanceListObject.ecsInstanceId = valueInstanceListInstance["EcsInstanceId"].asString();
		if(!valueInstanceListInstance["EnvType"].isNull())
			instanceListObject.envType = valueInstanceListInstance["EnvType"].asString();
		if(!valueInstanceListInstance["Sid"].isNull())
			instanceListObject.sid = valueInstanceListInstance["Sid"].asString();
		if(!valueInstanceListInstance["SafeRuleId"].isNull())
			instanceListObject.safeRuleId = valueInstanceListInstance["SafeRuleId"].asString();
		if(!valueInstanceListInstance["DbaNickName"].isNull())
			instanceListObject.dbaNickName = valueInstanceListInstance["DbaNickName"].asString();
		if(!valueInstanceListInstance["QueryTimeout"].isNull())
			instanceListObject.queryTimeout = std::stoi(valueInstanceListInstance["QueryTimeout"].asString());
		if(!valueInstanceListInstance["InstanceSource"].isNull())
			instanceListObject.instanceSource = valueInstanceListInstance["InstanceSource"].asString();
		if(!valueInstanceListInstance["Host"].isNull())
			instanceListObject.host = valueInstanceListInstance["Host"].asString();
		if(!valueInstanceListInstance["State"].isNull())
			instanceListObject.state = valueInstanceListInstance["State"].asString();
		if(!valueInstanceListInstance["DataLinkName"].isNull())
			instanceListObject.dataLinkName = valueInstanceListInstance["DataLinkName"].asString();
		if(!valueInstanceListInstance["ExportTimeout"].isNull())
			instanceListObject.exportTimeout = std::stoi(valueInstanceListInstance["ExportTimeout"].asString());
		if(!valueInstanceListInstance["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstance["InstanceId"].asString();
		if(!valueInstanceListInstance["InstanceType"].isNull())
			instanceListObject.instanceType = valueInstanceListInstance["InstanceType"].asString();
		if(!valueInstanceListInstance["DatabasePassword"].isNull())
			instanceListObject.databasePassword = valueInstanceListInstance["DatabasePassword"].asString();
		if(!valueInstanceListInstance["InstanceAlias"].isNull())
			instanceListObject.instanceAlias = valueInstanceListInstance["InstanceAlias"].asString();
		if(!valueInstanceListInstance["DdlOnline"].isNull())
			instanceListObject.ddlOnline = std::stoi(valueInstanceListInstance["DdlOnline"].asString());
		if(!valueInstanceListInstance["EcsRegion"].isNull())
			instanceListObject.ecsRegion = valueInstanceListInstance["EcsRegion"].asString();
		if(!valueInstanceListInstance["SellSitd"].isNull())
			instanceListObject.sellSitd = valueInstanceListInstance["SellSitd"].asString() == "true";
		auto standardGroupNode = value["StandardGroup"];
		if(!standardGroupNode["GroupName"].isNull())
			instanceListObject.standardGroup.groupName = standardGroupNode["GroupName"].asString();
		if(!standardGroupNode["GroupMode"].isNull())
			instanceListObject.standardGroup.groupMode = standardGroupNode["GroupMode"].asString();
		auto allOwnerIdList = value["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			instanceListObject.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = value["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			instanceListObject.ownerNameList.push_back(value.asString());
		instanceList_.push_back(instanceListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long ListInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListInstancesResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListInstancesResult::Instance> ListInstancesResult::getInstanceList()const
{
	return instanceList_;
}

std::string ListInstancesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListInstancesResult::getSuccess()const
{
	return success_;
}

