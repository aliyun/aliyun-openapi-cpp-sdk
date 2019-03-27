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

#include <alibabacloud/ons/model/OnsMessagePageQueryByTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMessagePageQueryByTopicResult::OnsMessagePageQueryByTopicResult() :
	ServiceResult()
{}

OnsMessagePageQueryByTopicResult::OnsMessagePageQueryByTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMessagePageQueryByTopicResult::~OnsMessagePageQueryByTopicResult()
{}

void OnsMessagePageQueryByTopicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto msgFoundDoNode = value["MsgFoundDo"];
	if(!msgFoundDoNode["TaskId"].isNull())
		msgFoundDo_.taskId = msgFoundDoNode["TaskId"].asString();
	if(!msgFoundDoNode["MaxPageCount"].isNull())
		msgFoundDo_.maxPageCount = std::stol(msgFoundDoNode["MaxPageCount"].asString());
	if(!msgFoundDoNode["CurrentPage"].isNull())
		msgFoundDo_.currentPage = std::stol(msgFoundDoNode["CurrentPage"].asString());
	auto allMsgFoundList = value["MsgFoundList"]["OnsRestMessageDo"];
	for (auto value : allMsgFoundList)
	{
		MsgFoundDo::OnsRestMessageDo onsRestMessageDoObject;
		if(!value["Topic"].isNull())
			onsRestMessageDoObject.topic = value["Topic"].asString();
		if(!value["Flag"].isNull())
			onsRestMessageDoObject.flag = std::stoi(value["Flag"].asString());
		if(!value["Body"].isNull())
			onsRestMessageDoObject.body = value["Body"].asString();
		if(!value["StoreSize"].isNull())
			onsRestMessageDoObject.storeSize = std::stoi(value["StoreSize"].asString());
		if(!value["BornTimestamp"].isNull())
			onsRestMessageDoObject.bornTimestamp = std::stol(value["BornTimestamp"].asString());
		if(!value["BornHost"].isNull())
			onsRestMessageDoObject.bornHost = value["BornHost"].asString();
		if(!value["StoreTimestamp"].isNull())
			onsRestMessageDoObject.storeTimestamp = std::stol(value["StoreTimestamp"].asString());
		if(!value["StoreHost"].isNull())
			onsRestMessageDoObject.storeHost = value["StoreHost"].asString();
		if(!value["MsgId"].isNull())
			onsRestMessageDoObject.msgId = value["MsgId"].asString();
		if(!value["OffsetId"].isNull())
			onsRestMessageDoObject.offsetId = value["OffsetId"].asString();
		if(!value["BodyCRC"].isNull())
			onsRestMessageDoObject.bodyCRC = std::stoi(value["BodyCRC"].asString());
		if(!value["ReconsumeTimes"].isNull())
			onsRestMessageDoObject.reconsumeTimes = std::stoi(value["ReconsumeTimes"].asString());
		if(!value["InstanceId"].isNull())
			onsRestMessageDoObject.instanceId = value["InstanceId"].asString();
		auto allPropertyList = value["PropertyList"]["MessageProperty"];
		for (auto value : allPropertyList)
		{
			MsgFoundDo::OnsRestMessageDo::MessageProperty propertyListObject;
			if(!value["Name"].isNull())
				propertyListObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				propertyListObject.value = value["Value"].asString();
			onsRestMessageDoObject.propertyList.push_back(propertyListObject);
		}
		msgFoundDo_.msgFoundList.push_back(onsRestMessageDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsMessagePageQueryByTopicResult::MsgFoundDo OnsMessagePageQueryByTopicResult::getMsgFoundDo()const
{
	return msgFoundDo_;
}

std::string OnsMessagePageQueryByTopicResult::getHelpUrl()const
{
	return helpUrl_;
}

