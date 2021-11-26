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

#include <alibabacloud/qualitycheck/model/GetTaskRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetTaskRuleListResult::GetTaskRuleListResult() :
	ServiceResult()
{}

GetTaskRuleListResult::GetTaskRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskRuleListResult::~GetTaskRuleListResult()
{}

void GetTaskRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RuleCountInfo"];
	for (auto valueDataRuleCountInfo : allDataNode)
	{
		RuleCountInfo dataObject;
		if(!valueDataRuleCountInfo["Type"].isNull())
			dataObject.type = std::stoi(valueDataRuleCountInfo["Type"].asString());
		if(!valueDataRuleCountInfo["Status"].isNull())
			dataObject.status = std::stoi(valueDataRuleCountInfo["Status"].asString());
		if(!valueDataRuleCountInfo["PreReviewNumber"].isNull())
			dataObject.preReviewNumber = std::stoi(valueDataRuleCountInfo["PreReviewNumber"].asString());
		if(!valueDataRuleCountInfo["HitNumber"].isNull())
			dataObject.hitNumber = std::stoi(valueDataRuleCountInfo["HitNumber"].asString());
		if(!valueDataRuleCountInfo["Select"].isNull())
			dataObject.select = valueDataRuleCountInfo["Select"].asString() == "true";
		if(!valueDataRuleCountInfo["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataRuleCountInfo["CreateTime"].asString());
		if(!valueDataRuleCountInfo["CreateEmpid"].isNull())
			dataObject.createEmpid = valueDataRuleCountInfo["CreateEmpid"].asString();
		if(!valueDataRuleCountInfo["RealViolationNumber"].isNull())
			dataObject.realViolationNumber = std::stoi(valueDataRuleCountInfo["RealViolationNumber"].asString());
		if(!valueDataRuleCountInfo["LastUpdateEmpid"].isNull())
			dataObject.lastUpdateEmpid = valueDataRuleCountInfo["LastUpdateEmpid"].asString();
		if(!valueDataRuleCountInfo["IsDelete"].isNull())
			dataObject.isDelete = std::stoi(valueDataRuleCountInfo["IsDelete"].asString());
		if(!valueDataRuleCountInfo["HitRate"].isNull())
			dataObject.hitRate = std::stof(valueDataRuleCountInfo["HitRate"].asString());
		if(!valueDataRuleCountInfo["Rid"].isNull())
			dataObject.rid = valueDataRuleCountInfo["Rid"].asString();
		if(!valueDataRuleCountInfo["CheckNumber"].isNull())
			dataObject.checkNumber = std::stoi(valueDataRuleCountInfo["CheckNumber"].asString());
		if(!valueDataRuleCountInfo["TypeName"].isNull())
			dataObject.typeName = valueDataRuleCountInfo["TypeName"].asString();
		if(!valueDataRuleCountInfo["LastUpdateTime"].isNull())
			dataObject.lastUpdateTime = std::stol(valueDataRuleCountInfo["LastUpdateTime"].asString());
		if(!valueDataRuleCountInfo["Name"].isNull())
			dataObject.name = valueDataRuleCountInfo["Name"].asString();
		if(!valueDataRuleCountInfo["HitRealViolationRate"].isNull())
			dataObject.hitRealViolationRate = std::stof(valueDataRuleCountInfo["HitRealViolationRate"].asString());
		if(!valueDataRuleCountInfo["ReviewNumber"].isNull())
			dataObject.reviewNumber = std::stoi(valueDataRuleCountInfo["ReviewNumber"].asString());
		data_.push_back(dataObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["DataSize"].isNull())
		dataSize_ = std::stoi(value["DataSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ReviewStatus"].isNull())
		reviewStatus_ = std::stoi(value["ReviewStatus"].asString());
	if(!value["CompSubTaskCount"].isNull())
		compSubTaskCount_ = std::stoi(value["CompSubTaskCount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["TotalSubTaskCount"].isNull())
		totalSubTaskCount_ = std::stoi(value["TotalSubTaskCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int GetTaskRuleListResult::getCompSubTaskCount()const
{
	return compSubTaskCount_;
}

int GetTaskRuleListResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetTaskRuleListResult::getMessage()const
{
	return message_;
}

int GetTaskRuleListResult::getPageSize()const
{
	return pageSize_;
}

int GetTaskRuleListResult::getCurrentPage()const
{
	return currentPage_;
}

int GetTaskRuleListResult::getReviewStatus()const
{
	return reviewStatus_;
}

int GetTaskRuleListResult::getDataSize()const
{
	return dataSize_;
}

std::vector<GetTaskRuleListResult::RuleCountInfo> GetTaskRuleListResult::getData()const
{
	return data_;
}

std::string GetTaskRuleListResult::getCode()const
{
	return code_;
}

bool GetTaskRuleListResult::getSuccess()const
{
	return success_;
}

int GetTaskRuleListResult::getTotalSubTaskCount()const
{
	return totalSubTaskCount_;
}

