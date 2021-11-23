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

#include <alibabacloud/ons/model/OnsConsumerGetConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsConsumerGetConnectionResult::OnsConsumerGetConnectionResult() :
	ServiceResult()
{}

OnsConsumerGetConnectionResult::OnsConsumerGetConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsConsumerGetConnectionResult::~OnsConsumerGetConnectionResult()
{}

void OnsConsumerGetConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allConnectionListNode = dataNode["ConnectionList"]["ConnectionDo"];
	for (auto dataNodeConnectionListConnectionDo : allConnectionListNode)
	{
		Data::ConnectionDo connectionDoObject;
		if(!dataNodeConnectionListConnectionDo["Version"].isNull())
			connectionDoObject.version = dataNodeConnectionListConnectionDo["Version"].asString();
		if(!dataNodeConnectionListConnectionDo["ClientAddr"].isNull())
			connectionDoObject.clientAddr = dataNodeConnectionListConnectionDo["ClientAddr"].asString();
		if(!dataNodeConnectionListConnectionDo["Language"].isNull())
			connectionDoObject.language = dataNodeConnectionListConnectionDo["Language"].asString();
		if(!dataNodeConnectionListConnectionDo["ClientId"].isNull())
			connectionDoObject.clientId = dataNodeConnectionListConnectionDo["ClientId"].asString();
		data_.connectionList.push_back(connectionDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsConsumerGetConnectionResult::Data OnsConsumerGetConnectionResult::getData()const
{
	return data_;
}

std::string OnsConsumerGetConnectionResult::getHelpUrl()const
{
	return helpUrl_;
}

