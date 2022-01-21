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

#include <alibabacloud/dms-enterprise/model/GetOpLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetOpLogResult::GetOpLogResult() :
	ServiceResult()
{}

GetOpLogResult::GetOpLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOpLogResult::~GetOpLogResult()
{}

void GetOpLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOpLogDetailsNode = value["OpLogDetails"]["OpLogDetail"];
	for (auto valueOpLogDetailsOpLogDetail : allOpLogDetailsNode)
	{
		OpLogDetail opLogDetailsObject;
		if(!valueOpLogDetailsOpLogDetail["Module"].isNull())
			opLogDetailsObject.module = valueOpLogDetailsOpLogDetail["Module"].asString();
		if(!valueOpLogDetailsOpLogDetail["Database"].isNull())
			opLogDetailsObject.database = valueOpLogDetailsOpLogDetail["Database"].asString();
		if(!valueOpLogDetailsOpLogDetail["UserId"].isNull())
			opLogDetailsObject.userId = valueOpLogDetailsOpLogDetail["UserId"].asString();
		if(!valueOpLogDetailsOpLogDetail["OpUserId"].isNull())
			opLogDetailsObject.opUserId = std::stol(valueOpLogDetailsOpLogDetail["OpUserId"].asString());
		if(!valueOpLogDetailsOpLogDetail["OpContent"].isNull())
			opLogDetailsObject.opContent = valueOpLogDetailsOpLogDetail["OpContent"].asString();
		if(!valueOpLogDetailsOpLogDetail["UserNick"].isNull())
			opLogDetailsObject.userNick = valueOpLogDetailsOpLogDetail["UserNick"].asString();
		if(!valueOpLogDetailsOpLogDetail["OrderId"].isNull())
			opLogDetailsObject.orderId = std::stol(valueOpLogDetailsOpLogDetail["OrderId"].asString());
		if(!valueOpLogDetailsOpLogDetail["OpTime"].isNull())
			opLogDetailsObject.opTime = valueOpLogDetailsOpLogDetail["OpTime"].asString();
		opLogDetails_.push_back(opLogDetailsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long GetOpLogResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<GetOpLogResult::OpLogDetail> GetOpLogResult::getOpLogDetails()const
{
	return opLogDetails_;
}

std::string GetOpLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetOpLogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetOpLogResult::getSuccess()const
{
	return success_;
}

