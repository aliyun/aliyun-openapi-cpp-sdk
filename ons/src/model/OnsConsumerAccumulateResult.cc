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

#include <alibabacloud/ons/model/OnsConsumerAccumulateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsConsumerAccumulateResult::OnsConsumerAccumulateResult() :
	ServiceResult()
{}

OnsConsumerAccumulateResult::OnsConsumerAccumulateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsConsumerAccumulateResult::~OnsConsumerAccumulateResult()
{}

void OnsConsumerAccumulateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Online"].isNull())
		data_.online = dataNode["Online"].asString() == "true";
	if(!dataNode["TotalDiff"].isNull())
		data_.totalDiff = std::stol(dataNode["TotalDiff"].asString());
	if(!dataNode["ConsumeTps"].isNull())
		data_.consumeTps = std::stof(dataNode["ConsumeTps"].asString());
	if(!dataNode["LastTimestamp"].isNull())
		data_.lastTimestamp = std::stol(dataNode["LastTimestamp"].asString());
	if(!dataNode["DelayTime"].isNull())
		data_.delayTime = std::stol(dataNode["DelayTime"].asString());
	auto allDetailInTopicList = value["DetailInTopicList"]["DetailInTopicDo"];
	for (auto value : allDetailInTopicList)
	{
		Data::DetailInTopicDo detailInTopicDoObject;
		if(!value["Topic"].isNull())
			detailInTopicDoObject.topic = value["Topic"].asString();
		if(!value["TotalDiff"].isNull())
			detailInTopicDoObject.totalDiff = std::stol(value["TotalDiff"].asString());
		if(!value["LastTimestamp"].isNull())
			detailInTopicDoObject.lastTimestamp = std::stol(value["LastTimestamp"].asString());
		if(!value["DelayTime"].isNull())
			detailInTopicDoObject.delayTime = std::stol(value["DelayTime"].asString());
		data_.detailInTopicList.push_back(detailInTopicDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsConsumerAccumulateResult::Data OnsConsumerAccumulateResult::getData()const
{
	return data_;
}

std::string OnsConsumerAccumulateResult::getHelpUrl()const
{
	return helpUrl_;
}

