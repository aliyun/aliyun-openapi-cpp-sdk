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

#include <alibabacloud/dbs/model/DescribePreCheckProgressListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribePreCheckProgressListResult::DescribePreCheckProgressListResult() :
	ServiceResult()
{}

DescribePreCheckProgressListResult::DescribePreCheckProgressListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePreCheckProgressListResult::~DescribePreCheckProgressListResult()
{}

void DescribePreCheckProgressListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["PreCheckProgressDetail"];
	for (auto valueItemsPreCheckProgressDetail : allItemsNode)
	{
		PreCheckProgressDetail itemsObject;
		if(!valueItemsPreCheckProgressDetail["FinishTime"].isNull())
			itemsObject.finishTime = std::stol(valueItemsPreCheckProgressDetail["FinishTime"].asString());
		if(!valueItemsPreCheckProgressDetail["State"].isNull())
			itemsObject.state = valueItemsPreCheckProgressDetail["State"].asString();
		if(!valueItemsPreCheckProgressDetail["BootTime"].isNull())
			itemsObject.bootTime = std::stol(valueItemsPreCheckProgressDetail["BootTime"].asString());
		if(!valueItemsPreCheckProgressDetail["JobId"].isNull())
			itemsObject.jobId = valueItemsPreCheckProgressDetail["JobId"].asString();
		if(!valueItemsPreCheckProgressDetail["Item"].isNull())
			itemsObject.item = valueItemsPreCheckProgressDetail["Item"].asString();
		if(!valueItemsPreCheckProgressDetail["ErrMsg"].isNull())
			itemsObject.errMsg = valueItemsPreCheckProgressDetail["ErrMsg"].asString();
		if(!valueItemsPreCheckProgressDetail["OrderNum"].isNull())
			itemsObject.orderNum = valueItemsPreCheckProgressDetail["OrderNum"].asString();
		if(!valueItemsPreCheckProgressDetail["Names"].isNull())
			itemsObject.names = valueItemsPreCheckProgressDetail["Names"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::string DescribePreCheckProgressListResult::getStatus()const
{
	return status_;
}

int DescribePreCheckProgressListResult::getProgress()const
{
	return progress_;
}

int DescribePreCheckProgressListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribePreCheckProgressListResult::PreCheckProgressDetail> DescribePreCheckProgressListResult::getItems()const
{
	return items_;
}

std::string DescribePreCheckProgressListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribePreCheckProgressListResult::getSuccess()const
{
	return success_;
}

std::string DescribePreCheckProgressListResult::getErrCode()const
{
	return errCode_;
}

