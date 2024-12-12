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

#include <alibabacloud/dms-enterprise/model/ListAuthorizedInstancesForUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListAuthorizedInstancesForUserResult::ListAuthorizedInstancesForUserResult() :
	ServiceResult()
{}

ListAuthorizedInstancesForUserResult::ListAuthorizedInstancesForUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuthorizedInstancesForUserResult::~ListAuthorizedInstancesForUserResult()
{}

void ListAuthorizedInstancesForUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["instancesItem"];
	for (auto valueInstancesinstancesItem : allInstancesNode)
	{
		InstancesItem instancesObject;
		if(!valueInstancesinstancesItem["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesinstancesItem["InstanceId"].asString();
		if(!valueInstancesinstancesItem["Host"].isNull())
			instancesObject.host = valueInstancesinstancesItem["Host"].asString();
		if(!valueInstancesinstancesItem["Port"].isNull())
			instancesObject.port = valueInstancesinstancesItem["Port"].asString();
		if(!valueInstancesinstancesItem["DbType"].isNull())
			instancesObject.dbType = valueInstancesinstancesItem["DbType"].asString();
		if(!valueInstancesinstancesItem["UserId"].isNull())
			instancesObject.userId = valueInstancesinstancesItem["UserId"].asString();
		if(!valueInstancesinstancesItem["UserName"].isNull())
			instancesObject.userName = valueInstancesinstancesItem["UserName"].asString();
		if(!valueInstancesinstancesItem["InstanceAlias"].isNull())
			instancesObject.instanceAlias = valueInstancesinstancesItem["InstanceAlias"].asString();
		if(!valueInstancesinstancesItem["EnvType"].isNull())
			instancesObject.envType = valueInstancesinstancesItem["EnvType"].asString();
		auto permissionDetailNode = value["PermissionDetail"];
		if(!permissionDetailNode["DsType"].isNull())
			instancesObject.permissionDetail.dsType = permissionDetailNode["DsType"].asString();
		if(!permissionDetailNode["PermType"].isNull())
			instancesObject.permissionDetail.permType = permissionDetailNode["PermType"].asString();
		if(!permissionDetailNode["ExpireDate"].isNull())
			instancesObject.permissionDetail.expireDate = permissionDetailNode["ExpireDate"].asString();
		if(!permissionDetailNode["Message"].isNull())
			instancesObject.permissionDetail.message = permissionDetailNode["Message"].asString();
		instances_.push_back(instancesObject);
	}

}

std::vector<ListAuthorizedInstancesForUserResult::InstancesItem> ListAuthorizedInstancesForUserResult::getInstances()const
{
	return instances_;
}

