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

#include <alibabacloud/ccc/model/GetContactFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetContactFlowResult::GetContactFlowResult() :
	ServiceResult()
{}

GetContactFlowResult::GetContactFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetContactFlowResult::~GetContactFlowResult()
{}

void GetContactFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Definition"].isNull())
		data_.definition = dataNode["Definition"].asString();
	if(!dataNode["DraftId"].isNull())
		data_.draftId = dataNode["DraftId"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["UpdatedTime"].isNull())
		data_.updatedTime = dataNode["UpdatedTime"].asString();
	if(!dataNode["Editor"].isNull())
		data_.editor = dataNode["Editor"].asString();
	if(!dataNode["Published"].isNull())
		data_.published = dataNode["Published"].asString() == "true";
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["ContactFlowId"].isNull())
		data_.contactFlowId = dataNode["ContactFlowId"].asString();
	if(!dataNode["CreatedTime"].isNull())
		data_.createdTime = dataNode["CreatedTime"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetContactFlowResult::getMessage()const
{
	return message_;
}

int GetContactFlowResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetContactFlowResult::Data GetContactFlowResult::getData()const
{
	return data_;
}

std::string GetContactFlowResult::getCode()const
{
	return code_;
}

