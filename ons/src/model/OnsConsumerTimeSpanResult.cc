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

#include <alibabacloud/ons/model/OnsConsumerTimeSpanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsConsumerTimeSpanResult::OnsConsumerTimeSpanResult() :
	ServiceResult()
{}

OnsConsumerTimeSpanResult::OnsConsumerTimeSpanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsConsumerTimeSpanResult::~OnsConsumerTimeSpanResult()
{}

void OnsConsumerTimeSpanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxTimeStamp"].isNull())
		data_.maxTimeStamp = std::stol(dataNode["MaxTimeStamp"].asString());
	if(!dataNode["ConsumeTimeStamp"].isNull())
		data_.consumeTimeStamp = std::stol(dataNode["ConsumeTimeStamp"].asString());
	if(!dataNode["Topic"].isNull())
		data_.topic = dataNode["Topic"].asString();
	if(!dataNode["MinTimeStamp"].isNull())
		data_.minTimeStamp = std::stol(dataNode["MinTimeStamp"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsConsumerTimeSpanResult::Data OnsConsumerTimeSpanResult::getData()const
{
	return data_;
}

std::string OnsConsumerTimeSpanResult::getHelpUrl()const
{
	return helpUrl_;
}

