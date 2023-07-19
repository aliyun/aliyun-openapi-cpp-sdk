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

#include <alibabacloud/dts/model/DescribeDataCheckTableDiffDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDataCheckTableDiffDetailsResult::DescribeDataCheckTableDiffDetailsResult() :
	ServiceResult()
{}

DescribeDataCheckTableDiffDetailsResult::DescribeDataCheckTableDiffDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataCheckTableDiffDetailsResult::~DescribeDataCheckTableDiffDetailsResult()
{}

void DescribeDataCheckTableDiffDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiffDetailsNode = value["DiffDetails"]["DiffDetailsItem"];
	for (auto valueDiffDetailsDiffDetailsItem : allDiffDetailsNode)
	{
		DiffDetailsItem diffDetailsObject;
		if(!valueDiffDetailsDiffDetailsItem["Id"].isNull())
			diffDetailsObject.id = std::stol(valueDiffDetailsDiffDetailsItem["Id"].asString());
		if(!valueDiffDetailsDiffDetailsItem["GmtCreated"].isNull())
			diffDetailsObject.gmtCreated = valueDiffDetailsDiffDetailsItem["GmtCreated"].asString();
		if(!valueDiffDetailsDiffDetailsItem["Diff"].isNull())
			diffDetailsObject.diff = valueDiffDetailsDiffDetailsItem["Diff"].asString();
		diffDetails_.push_back(diffDetailsObject);
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
	if(!value["TbName"].isNull())
		tbName_ = value["TbName"].asString();
	if(!value["DbName"].isNull())
		dbName_ = value["DbName"].asString();
	if(!value["DiffCount"].isNull())
		diffCount_ = std::stol(value["DiffCount"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::vector<DescribeDataCheckTableDiffDetailsResult::DiffDetailsItem> DescribeDataCheckTableDiffDetailsResult::getDiffDetails()const
{
	return diffDetails_;
}

std::string DescribeDataCheckTableDiffDetailsResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeDataCheckTableDiffDetailsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDataCheckTableDiffDetailsResult::getTbName()const
{
	return tbName_;
}

std::string DescribeDataCheckTableDiffDetailsResult::getDbName()const
{
	return dbName_;
}

std::string DescribeDataCheckTableDiffDetailsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDataCheckTableDiffDetailsResult::getErrMessage()const
{
	return errMessage_;
}

long DescribeDataCheckTableDiffDetailsResult::getDiffCount()const
{
	return diffCount_;
}

bool DescribeDataCheckTableDiffDetailsResult::getSuccess()const
{
	return success_;
}

std::string DescribeDataCheckTableDiffDetailsResult::getErrCode()const
{
	return errCode_;
}

