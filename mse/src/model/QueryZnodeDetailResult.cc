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

#include <alibabacloud/mse/model/QueryZnodeDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryZnodeDetailResult::QueryZnodeDetailResult() :
	ServiceResult()
{}

QueryZnodeDetailResult::QueryZnodeDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryZnodeDetailResult::~QueryZnodeDetailResult()
{}

void QueryZnodeDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Data"].isNull())
		data_.data = dataNode["Data"].asString();
	if(!dataNode["Path"].isNull())
		data_.path = dataNode["Path"].asString();
	if(!dataNode["Dir"].isNull())
		data_.dir = dataNode["Dir"].asString() == "true";
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string QueryZnodeDetailResult::getMessage()const
{
	return message_;
}

QueryZnodeDetailResult::Data QueryZnodeDetailResult::getData()const
{
	return data_;
}

std::string QueryZnodeDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryZnodeDetailResult::getSuccess()const
{
	return success_;
}

