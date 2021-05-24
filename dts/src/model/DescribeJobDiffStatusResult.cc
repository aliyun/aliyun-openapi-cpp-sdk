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

#include <alibabacloud/dts/model/DescribeJobDiffStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeJobDiffStatusResult::DescribeJobDiffStatusResult() :
	ServiceResult()
{}

DescribeJobDiffStatusResult::DescribeJobDiffStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobDiffStatusResult::~DescribeJobDiffStatusResult()
{}

void DescribeJobDiffStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiffInfosNode = value["DiffInfos"]["DiffInfosItem"];
	for (auto valueDiffInfosDiffInfosItem : allDiffInfosNode)
	{
		DiffInfosItem diffInfosObject;
		if(!valueDiffInfosDiffInfosItem["ScheduleJobId"].isNull())
			diffInfosObject.scheduleJobId = valueDiffInfosDiffInfosItem["ScheduleJobId"].asString();
		if(!valueDiffInfosDiffInfosItem["DbName"].isNull())
			diffInfosObject.dbName = valueDiffInfosDiffInfosItem["DbName"].asString();
		if(!valueDiffInfosDiffInfosItem["TableName"].isNull())
			diffInfosObject.tableName = valueDiffInfosDiffInfosItem["TableName"].asString();
		if(!valueDiffInfosDiffInfosItem["PkName"].isNull())
			diffInfosObject.pkName = valueDiffInfosDiffInfosItem["PkName"].asString();
		if(!valueDiffInfosDiffInfosItem["PkValue"].isNull())
			diffInfosObject.pkValue = valueDiffInfosDiffInfosItem["PkValue"].asString();
		if(!valueDiffInfosDiffInfosItem["Diff"].isNull())
			diffInfosObject.diff = valueDiffInfosDiffInfosItem["Diff"].asString();
		diffInfos_.push_back(diffInfosObject);
	}
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeJobDiffStatusResult::getTotal()const
{
	return total_;
}

int DescribeJobDiffStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeJobDiffStatusResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<DescribeJobDiffStatusResult::DiffInfosItem> DescribeJobDiffStatusResult::getDiffInfos()const
{
	return diffInfos_;
}

std::string DescribeJobDiffStatusResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeJobDiffStatusResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeJobDiffStatusResult::getSuccess()const
{
	return success_;
}

std::string DescribeJobDiffStatusResult::getErrCode()const
{
	return errCode_;
}

