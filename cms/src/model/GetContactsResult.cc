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

#include <alibabacloud/cms/model/GetContactsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

GetContactsResult::GetContactsResult() :
	ServiceResult()
{}

GetContactsResult::GetContactsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetContactsResult::~GetContactsResult()
{}

void GetContactsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto datapointsNode = value["Datapoints"];
	if(!datapointsNode["Name"].isNull())
		datapoints_.name = datapointsNode["Name"].asString();
		auto allContacts = datapointsNode["Contacts"]["Contact"];
		for (auto value : allContacts)
			datapoints_.contacts.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetContactsResult::getMessage()const
{
	return message_;
}

int GetContactsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetContactsResult::Datapoints GetContactsResult::getDatapoints()const
{
	return datapoints_;
}

int GetContactsResult::getCode()const
{
	return code_;
}

bool GetContactsResult::getSuccess()const
{
	return success_;
}

