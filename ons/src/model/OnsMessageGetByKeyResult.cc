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

#include <alibabacloud/ons/model/OnsMessageGetByKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMessageGetByKeyResult::OnsMessageGetByKeyResult() :
	ServiceResult()
{}

OnsMessageGetByKeyResult::OnsMessageGetByKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMessageGetByKeyResult::~OnsMessageGetByKeyResult()
{}

void OnsMessageGetByKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["OnsRestMessageDo"];
	for (auto valueDataOnsRestMessageDo : allDataNode)
	{
		OnsRestMessageDo dataObject;
		if(!valueDataOnsRestMessageDo["OffsetId"].isNull())
			dataObject.offsetId = valueDataOnsRestMessageDo["OffsetId"].asString();
		if(!valueDataOnsRestMessageDo["StoreSize"].isNull())
			dataObject.storeSize = std::stoi(valueDataOnsRestMessageDo["StoreSize"].asString());
		if(!valueDataOnsRestMessageDo["ReconsumeTimes"].isNull())
			dataObject.reconsumeTimes = std::stoi(valueDataOnsRestMessageDo["ReconsumeTimes"].asString());
		if(!valueDataOnsRestMessageDo["StoreTimestamp"].isNull())
			dataObject.storeTimestamp = std::stol(valueDataOnsRestMessageDo["StoreTimestamp"].asString());
		if(!valueDataOnsRestMessageDo["Body"].isNull())
			dataObject.body = valueDataOnsRestMessageDo["Body"].asString();
		if(!valueDataOnsRestMessageDo["InstanceId"].isNull())
			dataObject.instanceId = valueDataOnsRestMessageDo["InstanceId"].asString();
		if(!valueDataOnsRestMessageDo["MsgId"].isNull())
			dataObject.msgId = valueDataOnsRestMessageDo["MsgId"].asString();
		if(!valueDataOnsRestMessageDo["Flag"].isNull())
			dataObject.flag = std::stoi(valueDataOnsRestMessageDo["Flag"].asString());
		if(!valueDataOnsRestMessageDo["StoreHost"].isNull())
			dataObject.storeHost = valueDataOnsRestMessageDo["StoreHost"].asString();
		if(!valueDataOnsRestMessageDo["Topic"].isNull())
			dataObject.topic = valueDataOnsRestMessageDo["Topic"].asString();
		if(!valueDataOnsRestMessageDo["BornTimestamp"].isNull())
			dataObject.bornTimestamp = std::stol(valueDataOnsRestMessageDo["BornTimestamp"].asString());
		if(!valueDataOnsRestMessageDo["BodyCRC"].isNull())
			dataObject.bodyCRC = std::stoi(valueDataOnsRestMessageDo["BodyCRC"].asString());
		if(!valueDataOnsRestMessageDo["BornHost"].isNull())
			dataObject.bornHost = valueDataOnsRestMessageDo["BornHost"].asString();
		auto allPropertyListNode = valueDataOnsRestMessageDo["PropertyList"]["MessageProperty"];
		for (auto valueDataOnsRestMessageDoPropertyListMessageProperty : allPropertyListNode)
		{
			OnsRestMessageDo::MessageProperty propertyListObject;
			if(!valueDataOnsRestMessageDoPropertyListMessageProperty["Value"].isNull())
				propertyListObject.value = valueDataOnsRestMessageDoPropertyListMessageProperty["Value"].asString();
			if(!valueDataOnsRestMessageDoPropertyListMessageProperty["Name"].isNull())
				propertyListObject.name = valueDataOnsRestMessageDoPropertyListMessageProperty["Name"].asString();
			dataObject.propertyList.push_back(propertyListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

std::vector<OnsMessageGetByKeyResult::OnsRestMessageDo> OnsMessageGetByKeyResult::getData()const
{
	return data_;
}

std::string OnsMessageGetByKeyResult::getHelpUrl()const
{
	return helpUrl_;
}

