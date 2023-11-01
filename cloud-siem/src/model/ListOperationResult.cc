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

#include <alibabacloud/cloud-siem/model/ListOperationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListOperationResult::ListOperationResult() :
	ServiceResult()
{}

ListOperationResult::ListOperationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOperationResult::~ListOperationResult()
{}

void ListOperationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AdminOrNot"].isNull())
		data_.adminOrNot = dataNode["AdminOrNot"].asString() == "true";
		auto allOperationList = dataNode["OperationList"]["OperationList"];
		for (auto value : allOperationList)
			data_.operationList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["DyCode"].isNull())
		dyCode_ = value["DyCode"].asString();
	if(!value["DyMessage"].isNull())
		dyMessage_ = value["DyMessage"].asString();

}

std::string ListOperationResult::getDyCode()const
{
	return dyCode_;
}

std::string ListOperationResult::getMessage()const
{
	return message_;
}

ListOperationResult::Data ListOperationResult::getData()const
{
	return data_;
}

int ListOperationResult::getCode()const
{
	return code_;
}

std::string ListOperationResult::getDyMessage()const
{
	return dyMessage_;
}

bool ListOperationResult::getSuccess()const
{
	return success_;
}

std::string ListOperationResult::getErrCode()const
{
	return errCode_;
}

