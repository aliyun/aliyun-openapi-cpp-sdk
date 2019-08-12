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

#include <alibabacloud/ons/model/OnsTopicStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsTopicStatusResult::OnsTopicStatusResult() :
	ServiceResult()
{}

OnsTopicStatusResult::OnsTopicStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsTopicStatusResult::~OnsTopicStatusResult()
{}

void OnsTopicStatusResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	if(!dataNode["LastTimeStamp"].isNull())
		data_.lastTimeStamp = std::stol(dataNode["LastTimeStamp"].asString());
	if(!dataNode["Perm"].isNull())
		data_.perm = std::stoi(dataNode["Perm"].asString());
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsTopicStatusResult::Data OnsTopicStatusResult::getData()const
{
	return data_;
}

std::string OnsTopicStatusResult::getHelpUrl()const
{
	return helpUrl_;
}

