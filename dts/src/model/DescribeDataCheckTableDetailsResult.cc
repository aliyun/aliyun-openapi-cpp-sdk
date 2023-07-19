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

#include <alibabacloud/dts/model/DescribeDataCheckTableDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDataCheckTableDetailsResult::DescribeDataCheckTableDetailsResult() :
	ServiceResult()
{}

DescribeDataCheckTableDetailsResult::DescribeDataCheckTableDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataCheckTableDetailsResult::~DescribeDataCheckTableDetailsResult()
{}

void DescribeDataCheckTableDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTableDetailsNode = value["TableDetails"]["TableDetailsItem"];
	for (auto valueTableDetailsTableDetailsItem : allTableDetailsNode)
	{
		TableDetailsItem tableDetailsObject;
		if(!valueTableDetailsTableDetailsItem["Status"].isNull())
			tableDetailsObject.status = valueTableDetailsTableDetailsItem["Status"].asString();
		if(!valueTableDetailsTableDetailsItem["Id"].isNull())
			tableDetailsObject.id = std::stol(valueTableDetailsTableDetailsItem["Id"].asString());
		if(!valueTableDetailsTableDetailsItem["SourceDbName"].isNull())
			tableDetailsObject.sourceDbName = valueTableDetailsTableDetailsItem["SourceDbName"].asString();
		if(!valueTableDetailsTableDetailsItem["TargetDbName"].isNull())
			tableDetailsObject.targetDbName = valueTableDetailsTableDetailsItem["TargetDbName"].asString();
		if(!valueTableDetailsTableDetailsItem["SourceTbName"].isNull())
			tableDetailsObject.sourceTbName = valueTableDetailsTableDetailsItem["SourceTbName"].asString();
		if(!valueTableDetailsTableDetailsItem["TargetTbName"].isNull())
			tableDetailsObject.targetTbName = valueTableDetailsTableDetailsItem["TargetTbName"].asString();
		if(!valueTableDetailsTableDetailsItem["TotalCount"].isNull())
			tableDetailsObject.totalCount = std::stol(valueTableDetailsTableDetailsItem["TotalCount"].asString());
		if(!valueTableDetailsTableDetailsItem["FinishCount"].isNull())
			tableDetailsObject.finishCount = std::stol(valueTableDetailsTableDetailsItem["FinishCount"].asString());
		if(!valueTableDetailsTableDetailsItem["DiffCount"].isNull())
			tableDetailsObject.diffCount = std::stol(valueTableDetailsTableDetailsItem["DiffCount"].asString());
		if(!valueTableDetailsTableDetailsItem["BootTime"].isNull())
			tableDetailsObject.bootTime = valueTableDetailsTableDetailsItem["BootTime"].asString();
		if(!valueTableDetailsTableDetailsItem["ErrorCode"].isNull())
			tableDetailsObject.errorCode = std::stoi(valueTableDetailsTableDetailsItem["ErrorCode"].asString());
		tableDetails_.push_back(tableDetailsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["FinishedCount"].isNull())
		finishedCount_ = std::stol(value["FinishedCount"].asString());
	if(!value["DiffTableCount"].isNull())
		diffTableCount_ = std::stol(value["DiffTableCount"].asString());

}

long DescribeDataCheckTableDetailsResult::getDiffTableCount()const
{
	return diffTableCount_;
}

std::vector<DescribeDataCheckTableDetailsResult::TableDetailsItem> DescribeDataCheckTableDetailsResult::getTableDetails()const
{
	return tableDetails_;
}

long DescribeDataCheckTableDetailsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataCheckTableDetailsResult::getPageNumber()const
{
	return pageNumber_;
}

long DescribeDataCheckTableDetailsResult::getFinishedCount()const
{
	return finishedCount_;
}

int DescribeDataCheckTableDetailsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDataCheckTableDetailsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDataCheckTableDetailsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDataCheckTableDetailsResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeDataCheckTableDetailsResult::getSuccess()const
{
	return success_;
}

std::string DescribeDataCheckTableDetailsResult::getErrCode()const
{
	return errCode_;
}

