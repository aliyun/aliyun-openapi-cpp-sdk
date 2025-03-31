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

#include <alibabacloud/cloud-siem/model/DescribeDisposeAndPlaybookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeDisposeAndPlaybookResult::DescribeDisposeAndPlaybookResult() :
	ServiceResult()
{}

DescribeDisposeAndPlaybookResult::DescribeDisposeAndPlaybookResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDisposeAndPlaybookResult::~DescribeDisposeAndPlaybookResult()
{}

void DescribeDisposeAndPlaybookResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allResponseDataNode = dataNode["ResponseData"]["ResponseDataItem"];
	for (auto dataNodeResponseDataResponseDataItem : allResponseDataNode)
	{
		Data::ResponseDataItem responseDataItemObject;
		if(!dataNodeResponseDataResponseDataItem["EntityId"].isNull())
			responseDataItemObject.entityId = std::stol(dataNodeResponseDataResponseDataItem["EntityId"].asString());
		if(!dataNodeResponseDataResponseDataItem["EntityType"].isNull())
			responseDataItemObject.entityType = dataNodeResponseDataResponseDataItem["EntityType"].asString();
		if(!dataNodeResponseDataResponseDataItem["OpcodeMap"].isNull())
			responseDataItemObject.opcodeMap = dataNodeResponseDataResponseDataItem["OpcodeMap"].asString();
		if(!dataNodeResponseDataResponseDataItem["EntityInfo"].isNull())
			responseDataItemObject.entityInfo = dataNodeResponseDataResponseDataItem["EntityInfo"].asString();
		if(!dataNodeResponseDataResponseDataItem["Dispose"].isNull())
			responseDataItemObject.dispose = dataNodeResponseDataResponseDataItem["Dispose"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertNum"].isNull())
			responseDataItemObject.alertNum = std::stoi(dataNodeResponseDataResponseDataItem["AlertNum"].asString());
		auto allPlaybookListNode = dataNodeResponseDataResponseDataItem["PlaybookList"]["PlaybookListItem"];
		for (auto dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem : allPlaybookListNode)
		{
			Data::ResponseDataItem::PlaybookListItem playbookListObject;
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["OpCode"].isNull())
				playbookListObject.opCode = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["OpCode"].asString();
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["OpLevel"].isNull())
				playbookListObject.opLevel = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["OpLevel"].asString();
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Description"].isNull())
				playbookListObject.description = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Description"].asString();
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["DisplayName"].isNull())
				playbookListObject.displayName = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["DisplayName"].asString();
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["TaskConfig"].isNull())
				playbookListObject.taskConfig = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["TaskConfig"].asString();
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Name"].isNull())
				playbookListObject.name = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Name"].asString();
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Uuid"].isNull())
				playbookListObject.uuid = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Uuid"].asString();
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["WafPlaybook"].isNull())
				playbookListObject.wafPlaybook = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["WafPlaybook"].asString() == "true";
			if(!dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Available"].isNull())
				playbookListObject.available = dataNodeResponseDataResponseDataItemPlaybookListPlaybookListItem["Available"].asString();
			auto allParamConfig = value["ParamConfig"]["ParamConfig"];
			for (auto value : allParamConfig)
				playbookListObject.paramConfig.push_back(value.asString());
			responseDataItemObject.playbookList.push_back(playbookListObject);
		}
		auto allOpcodeSet = value["OpcodeSet"]["OpcodeSet"];
		for (auto value : allOpcodeSet)
			responseDataItemObject.opcodeSet.push_back(value.asString());
		auto allScope = value["Scope"]["Scope"];
		for (auto value : allScope)
			responseDataItemObject.scope.push_back(value.asString());
		data_.responseData.push_back(responseDataItemObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeDisposeAndPlaybookResult::getMessage()const
{
	return message_;
}

DescribeDisposeAndPlaybookResult::Data DescribeDisposeAndPlaybookResult::getData()const
{
	return data_;
}

int DescribeDisposeAndPlaybookResult::getCode()const
{
	return code_;
}

bool DescribeDisposeAndPlaybookResult::getSuccess()const
{
	return success_;
}

