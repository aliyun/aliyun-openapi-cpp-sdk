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

#include <alibabacloud/dms-enterprise/model/GetOwnerApplyOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetOwnerApplyOrderDetailResult::GetOwnerApplyOrderDetailResult() :
	ServiceResult()
{}

GetOwnerApplyOrderDetailResult::GetOwnerApplyOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOwnerApplyOrderDetailResult::~GetOwnerApplyOrderDetailResult()
{}

void GetOwnerApplyOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ownerApplyOrderDetailNode = value["OwnerApplyOrderDetail"];
	if(!ownerApplyOrderDetailNode["ApplyType"].isNull())
		ownerApplyOrderDetail_.applyType = ownerApplyOrderDetailNode["ApplyType"].asString();
	auto allResourcesNode = ownerApplyOrderDetailNode["Resources"]["Resource"];
	for (auto ownerApplyOrderDetailNodeResourcesResource : allResourcesNode)
	{
		OwnerApplyOrderDetail::Resource resourceObject;
		if(!ownerApplyOrderDetailNodeResourcesResource["Logic"].isNull())
			resourceObject.logic = ownerApplyOrderDetailNodeResourcesResource["Logic"].asString() == "true";
		if(!ownerApplyOrderDetailNodeResourcesResource["TargetId"].isNull())
			resourceObject.targetId = ownerApplyOrderDetailNodeResourcesResource["TargetId"].asString();
		auto resourceDetailNode = value["ResourceDetail"];
		if(!resourceDetailNode["SearchName"].isNull())
			resourceObject.resourceDetail.searchName = resourceDetailNode["SearchName"].asString();
		if(!resourceDetailNode["DbType"].isNull())
			resourceObject.resourceDetail.dbType = resourceDetailNode["DbType"].asString();
		if(!resourceDetailNode["EnvType"].isNull())
			resourceObject.resourceDetail.envType = resourceDetailNode["EnvType"].asString();
		if(!resourceDetailNode["TableName"].isNull())
			resourceObject.resourceDetail.tableName = resourceDetailNode["TableName"].asString();
			auto allOwnerIds = resourceDetailNode["OwnerIds"]["OwnerId"];
			for (auto value : allOwnerIds)
				resourceObject.resourceDetail.ownerIds.push_back(value.asString());
			auto allOwnerNickNames = resourceDetailNode["OwnerNickNames"]["OwnerNickName"];
			for (auto value : allOwnerNickNames)
				resourceObject.resourceDetail.ownerNickNames.push_back(value.asString());
		ownerApplyOrderDetail_.resources.push_back(resourceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetOwnerApplyOrderDetailResult::OwnerApplyOrderDetail GetOwnerApplyOrderDetailResult::getOwnerApplyOrderDetail()const
{
	return ownerApplyOrderDetail_;
}

std::string GetOwnerApplyOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetOwnerApplyOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetOwnerApplyOrderDetailResult::getSuccess()const
{
	return success_;
}

