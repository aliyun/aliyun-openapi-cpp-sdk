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

#include <alibabacloud/bssopenapi/model/QueryRelationListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryRelationListResult::QueryRelationListResult() :
	ServiceResult()
{}

QueryRelationListResult::QueryRelationListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRelationListResult::~QueryRelationListResult()
{}

void QueryRelationListResult::parse(const std::string &payload)
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
	auto allFinancialRelationInfoListNode = dataNode["FinancialRelationInfoList"]["FinancialRelationInfoListItem"];
	for (auto dataNodeFinancialRelationInfoListFinancialRelationInfoListItem : allFinancialRelationInfoListNode)
	{
		Data::FinancialRelationInfoListItem financialRelationInfoListItemObject;
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["EndTime"].isNull())
			financialRelationInfoListItemObject.endTime = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["EndTime"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["RelationType"].isNull())
			financialRelationInfoListItemObject.relationType = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["RelationType"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountNickName"].isNull())
			financialRelationInfoListItemObject.accountNickName = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountNickName"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["StartTime"].isNull())
			financialRelationInfoListItemObject.startTime = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["StartTime"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["State"].isNull())
			financialRelationInfoListItemObject.state = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["State"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountId"].isNull())
			financialRelationInfoListItemObject.accountId = std::stol(dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountId"].asString());
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["SetupTime"].isNull())
			financialRelationInfoListItemObject.setupTime = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["SetupTime"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountType"].isNull())
			financialRelationInfoListItemObject.accountType = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountType"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountName"].isNull())
			financialRelationInfoListItemObject.accountName = dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["AccountName"].asString();
		if(!dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["RelationId"].isNull())
			financialRelationInfoListItemObject.relationId = std::stol(dataNodeFinancialRelationInfoListFinancialRelationInfoListItem["RelationId"].asString());
		data_.financialRelationInfoList.push_back(financialRelationInfoListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryRelationListResult::getMessage()const
{
	return message_;
}

QueryRelationListResult::Data QueryRelationListResult::getData()const
{
	return data_;
}

std::string QueryRelationListResult::getCode()const
{
	return code_;
}

bool QueryRelationListResult::getSuccess()const
{
	return success_;
}

