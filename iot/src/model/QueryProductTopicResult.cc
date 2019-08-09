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

#include <alibabacloud/iot/model/QueryProductTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryProductTopicResult::QueryProductTopicResult() :
	ServiceResult()
{}

QueryProductTopicResult::QueryProductTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryProductTopicResult::~QueryProductTopicResult()
{}

void QueryProductTopicResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["ProductTopicInfo"];
	for (auto value : allData)
	{
		ProductTopicInfo dataObject;
		if(!value["ProductKey"].isNull())
			dataObject.productKey = value["ProductKey"].asString();
		if(!value["TopicShortName"].isNull())
			dataObject.topicShortName = value["TopicShortName"].asString();
		if(!value["Operation"].isNull())
			dataObject.operation = value["Operation"].asString();
		if(!value["Desc"].isNull())
			dataObject.desc = value["Desc"].asString();
		if(!value["Id"].isNull())
			dataObject.id = value["Id"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QueryProductTopicResult::ProductTopicInfo> QueryProductTopicResult::getData()const
{
	return data_;
}

std::string QueryProductTopicResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryProductTopicResult::getCode()const
{
	return code_;
}

bool QueryProductTopicResult::getSuccess()const
{
	return success_;
}

