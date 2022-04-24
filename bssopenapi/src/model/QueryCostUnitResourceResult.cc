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

#include <alibabacloud/bssopenapi/model/QueryCostUnitResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryCostUnitResourceResult::QueryCostUnitResourceResult() :
	ServiceResult()
{}

QueryCostUnitResourceResult::QueryCostUnitResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCostUnitResourceResult::~QueryCostUnitResourceResult()
{}

void QueryCostUnitResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allResourceInstanceDtoListNode = dataNode["ResourceInstanceDtoList"]["ResourceInstanceList"];
	for (auto dataNodeResourceInstanceDtoListResourceInstanceList : allResourceInstanceDtoListNode)
	{
		Data::ResourceInstanceList resourceInstanceListObject;
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["CommodityCode"].isNull())
			resourceInstanceListObject.commodityCode = dataNodeResourceInstanceDtoListResourceInstanceList["CommodityCode"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceUserName"].isNull())
			resourceInstanceListObject.resourceUserName = dataNodeResourceInstanceDtoListResourceInstanceList["ResourceUserName"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["CommodityName"].isNull())
			resourceInstanceListObject.commodityName = dataNodeResourceInstanceDtoListResourceInstanceList["CommodityName"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceUserId"].isNull())
			resourceInstanceListObject.resourceUserId = std::stol(dataNodeResourceInstanceDtoListResourceInstanceList["ResourceUserId"].asString());
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ApportionName"].isNull())
			resourceInstanceListObject.apportionName = dataNodeResourceInstanceDtoListResourceInstanceList["ApportionName"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ApportionCode"].isNull())
			resourceInstanceListObject.apportionCode = dataNodeResourceInstanceDtoListResourceInstanceList["ApportionCode"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceType"].isNull())
			resourceInstanceListObject.resourceType = dataNodeResourceInstanceDtoListResourceInstanceList["ResourceType"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceNick"].isNull())
			resourceInstanceListObject.resourceNick = dataNodeResourceInstanceDtoListResourceInstanceList["ResourceNick"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceTag"].isNull())
			resourceInstanceListObject.resourceTag = dataNodeResourceInstanceDtoListResourceInstanceList["ResourceTag"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceId"].isNull())
			resourceInstanceListObject.resourceId = dataNodeResourceInstanceDtoListResourceInstanceList["ResourceId"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceGroup"].isNull())
			resourceInstanceListObject.resourceGroup = dataNodeResourceInstanceDtoListResourceInstanceList["ResourceGroup"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["RelatedResources"].isNull())
			resourceInstanceListObject.relatedResources = dataNodeResourceInstanceDtoListResourceInstanceList["RelatedResources"].asString();
		if(!dataNodeResourceInstanceDtoListResourceInstanceList["ResourceStatus"].isNull())
			resourceInstanceListObject.resourceStatus = dataNodeResourceInstanceDtoListResourceInstanceList["ResourceStatus"].asString();
		data_.resourceInstanceDtoList.push_back(resourceInstanceListObject);
	}
	auto costUnitNode = dataNode["CostUnit"];
	if(!costUnitNode["ParentUnitId"].isNull())
		data_.costUnit.parentUnitId = std::stol(costUnitNode["ParentUnitId"].asString());
	if(!costUnitNode["UnitName"].isNull())
		data_.costUnit.unitName = costUnitNode["UnitName"].asString();
	if(!costUnitNode["UnitId"].isNull())
		data_.costUnit.unitId = std::stol(costUnitNode["UnitId"].asString());
	if(!costUnitNode["OwnerUid"].isNull())
		data_.costUnit.ownerUid = std::stol(costUnitNode["OwnerUid"].asString());
	auto costUnitStatisInfoNode = dataNode["CostUnitStatisInfo"];
	if(!costUnitStatisInfoNode["TotalResourceCount"].isNull())
		data_.costUnitStatisInfo.totalResourceCount = std::stol(costUnitStatisInfoNode["TotalResourceCount"].asString());
	if(!costUnitStatisInfoNode["ResourceCount"].isNull())
		data_.costUnitStatisInfo.resourceCount = std::stol(costUnitStatisInfoNode["ResourceCount"].asString());
	if(!costUnitStatisInfoNode["TotalUserCount"].isNull())
		data_.costUnitStatisInfo.totalUserCount = std::stol(costUnitStatisInfoNode["TotalUserCount"].asString());
	if(!costUnitStatisInfoNode["SubUnitCount"].isNull())
		data_.costUnitStatisInfo.subUnitCount = std::stol(costUnitStatisInfoNode["SubUnitCount"].asString());
	if(!costUnitStatisInfoNode["ResourceGroupCount"].isNull())
		data_.costUnitStatisInfo.resourceGroupCount = std::stol(costUnitStatisInfoNode["ResourceGroupCount"].asString());
	if(!costUnitStatisInfoNode["TotalResourceGroupCount"].isNull())
		data_.costUnitStatisInfo.totalResourceGroupCount = std::stol(costUnitStatisInfoNode["TotalResourceGroupCount"].asString());
	if(!costUnitStatisInfoNode["UserCount"].isNull())
		data_.costUnitStatisInfo.userCount = std::stol(costUnitStatisInfoNode["UserCount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryCostUnitResourceResult::getMessage()const
{
	return message_;
}

QueryCostUnitResourceResult::Data QueryCostUnitResourceResult::getData()const
{
	return data_;
}

std::string QueryCostUnitResourceResult::getCode()const
{
	return code_;
}

bool QueryCostUnitResourceResult::getSuccess()const
{
	return success_;
}

