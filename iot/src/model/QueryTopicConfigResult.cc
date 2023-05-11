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

#include <alibabacloud/iot/model/QueryTopicConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryTopicConfigResult::QueryTopicConfigResult() :
	ServiceResult()
{}

QueryTopicConfigResult::QueryTopicConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTopicConfigResult::~QueryTopicConfigResult()
{}

void QueryTopicConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TopicConfigInfo"];
	for (auto valueDataTopicConfigInfo : allDataNode)
	{
		TopicConfigInfo dataObject;
		if(!valueDataTopicConfigInfo["ProductKey"].isNull())
			dataObject.productKey = valueDataTopicConfigInfo["ProductKey"].asString();
		if(!valueDataTopicConfigInfo["TopicFullName"].isNull())
			dataObject.topicFullName = valueDataTopicConfigInfo["TopicFullName"].asString();
		if(!valueDataTopicConfigInfo["Operation"].isNull())
			dataObject.operation = valueDataTopicConfigInfo["Operation"].asString();
		if(!valueDataTopicConfigInfo["Description"].isNull())
			dataObject.description = valueDataTopicConfigInfo["Description"].asString();
		if(!valueDataTopicConfigInfo["EnableBroadcast"].isNull())
			dataObject.enableBroadcast = valueDataTopicConfigInfo["EnableBroadcast"].asString() == "true";
		if(!valueDataTopicConfigInfo["EnableProxySubscribe"].isNull())
			dataObject.enableProxySubscribe = valueDataTopicConfigInfo["EnableProxySubscribe"].asString() == "true";
		if(!valueDataTopicConfigInfo["Codec"].isNull())
			dataObject.codec = valueDataTopicConfigInfo["Codec"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryTopicConfigResult::getMessage()const
{
	return message_;
}

std::vector<QueryTopicConfigResult::TopicConfigInfo> QueryTopicConfigResult::getData()const
{
	return data_;
}

std::string QueryTopicConfigResult::getCode()const
{
	return code_;
}

bool QueryTopicConfigResult::getSuccess()const
{
	return success_;
}

