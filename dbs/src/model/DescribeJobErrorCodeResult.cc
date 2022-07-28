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

#include <alibabacloud/dbs/model/DescribeJobErrorCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeJobErrorCodeResult::DescribeJobErrorCodeResult() :
	ServiceResult()
{}

DescribeJobErrorCodeResult::DescribeJobErrorCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobErrorCodeResult::~DescribeJobErrorCodeResult()
{}

void DescribeJobErrorCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto itemNode = value["Item"];
	if(!itemNode["JobState"].isNull())
		item_.jobState = itemNode["JobState"].asString();
	if(!itemNode["ErrorMessage"].isNull())
		item_.errorMessage = itemNode["ErrorMessage"].asString();
	if(!itemNode["ErrorCode"].isNull())
		item_.errorCode = itemNode["ErrorCode"].asString();
	if(!itemNode["JobId"].isNull())
		item_.jobId = itemNode["JobId"].asString();
	if(!itemNode["JobType"].isNull())
		item_.jobType = itemNode["JobType"].asString();
	if(!itemNode["Language"].isNull())
		item_.language = itemNode["Language"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

DescribeJobErrorCodeResult::Item DescribeJobErrorCodeResult::getItem()const
{
	return item_;
}

int DescribeJobErrorCodeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeJobErrorCodeResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeJobErrorCodeResult::getSuccess()const
{
	return success_;
}

std::string DescribeJobErrorCodeResult::getErrCode()const
{
	return errCode_;
}

