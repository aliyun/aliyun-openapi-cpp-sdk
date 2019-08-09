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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["OnsRestMessageDo"];
	for (auto value : allData)
	{
		OnsRestMessageDo dataObject;
		if(!value["Topic"].isNull())
			dataObject.topic = value["Topic"].asString();
		if(!value["Flag"].isNull())
			dataObject.flag = std::stoi(value["Flag"].asString());
		if(!value["Body"].isNull())
			dataObject.body = value["Body"].asString();
		if(!value["StoreSize"].isNull())
			dataObject.storeSize = std::stoi(value["StoreSize"].asString());
		if(!value["BornTimestamp"].isNull())
			dataObject.bornTimestamp = std::stol(value["BornTimestamp"].asString());
		if(!value["BornHost"].isNull())
			dataObject.bornHost = value["BornHost"].asString();
		if(!value["StoreTimestamp"].isNull())
			dataObject.storeTimestamp = std::stol(value["StoreTimestamp"].asString());
		if(!value["StoreHost"].isNull())
			dataObject.storeHost = value["StoreHost"].asString();
		if(!value["MsgId"].isNull())
			dataObject.msgId = value["MsgId"].asString();
		if(!value["OffsetId"].isNull())
			dataObject.offsetId = value["OffsetId"].asString();
		if(!value["BodyCRC"].isNull())
			dataObject.bodyCRC = std::stoi(value["BodyCRC"].asString());
		if(!value["ReconsumeTimes"].isNull())
			dataObject.reconsumeTimes = std::stoi(value["ReconsumeTimes"].asString());
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		auto allPropertyList = value["PropertyList"]["MessageProperty"];
		for (auto value : allPropertyList)
		{
			OnsRestMessageDo::MessageProperty propertyListObject;
			if(!value["Name"].isNull())
				propertyListObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				propertyListObject.value = value["Value"].asString();
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

