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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["PreCheckProgressDetail"];
	for (auto value : allItems)
	{
		PreCheckProgressDetail itemsObject;
		if(!value["JobId"].isNull())
			itemsObject.jobId = value["JobId"].asString();
		if(!value["State"].isNull())
			itemsObject.state = value["State"].asString();
		if(!value["OrderNum"].isNull())
			itemsObject.orderNum = value["OrderNum"].asString();
		if(!value["ErrMsg"].isNull())
			itemsObject.errMsg = value["ErrMsg"].asString();
		if(!value["Names"].isNull())
			itemsObject.names = value["Names"].asString();
		if(!value["Item"].isNull())
			itemsObject.item = value["Item"].asString();
		if(!value["BootTime"].isNull())
			itemsObject.bootTime = std::stol(value["BootTime"].asString());
		if(!value["FinishTime"].isNull())
			itemsObject.finishTime = std::stol(value["FinishTime"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

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

