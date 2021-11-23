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
	if(!msgFoundDoNode["CurrentPage"].isNull())
		msgFoundDo_.currentPage = std::stol(msgFoundDoNode["CurrentPage"].asString());
	if(!msgFoundDoNode["MaxPageCount"].isNull())
		msgFoundDo_.maxPageCount = std::stol(msgFoundDoNode["MaxPageCount"].asString());
	if(!msgFoundDoNode["TaskId"].isNull())
		msgFoundDo_.taskId = msgFoundDoNode["TaskId"].asString();
	auto allMsgFoundListNode = msgFoundDoNode["MsgFoundList"]["OnsRestMessageDo"];
	for (auto msgFoundDoNodeMsgFoundListOnsRestMessageDo : allMsgFoundListNode)
	{
		MsgFoundDo::OnsRestMessageDo onsRestMessageDoObject;
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["OffsetId"].isNull())
			onsRestMessageDoObject.offsetId = msgFoundDoNodeMsgFoundListOnsRestMessageDo["OffsetId"].asString();
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["StoreSize"].isNull())
			onsRestMessageDoObject.storeSize = std::stoi(msgFoundDoNodeMsgFoundListOnsRestMessageDo["StoreSize"].asString());
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["ReconsumeTimes"].isNull())
			onsRestMessageDoObject.reconsumeTimes = std::stoi(msgFoundDoNodeMsgFoundListOnsRestMessageDo["ReconsumeTimes"].asString());
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["StoreTimestamp"].isNull())
			onsRestMessageDoObject.storeTimestamp = std::stol(msgFoundDoNodeMsgFoundListOnsRestMessageDo["StoreTimestamp"].asString());
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["Body"].isNull())
			onsRestMessageDoObject.body = msgFoundDoNodeMsgFoundListOnsRestMessageDo["Body"].asString();
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["InstanceId"].isNull())
			onsRestMessageDoObject.instanceId = msgFoundDoNodeMsgFoundListOnsRestMessageDo["InstanceId"].asString();
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["MsgId"].isNull())
			onsRestMessageDoObject.msgId = msgFoundDoNodeMsgFoundListOnsRestMessageDo["MsgId"].asString();
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["Flag"].isNull())
			onsRestMessageDoObject.flag = std::stoi(msgFoundDoNodeMsgFoundListOnsRestMessageDo["Flag"].asString());
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["StoreHost"].isNull())
			onsRestMessageDoObject.storeHost = msgFoundDoNodeMsgFoundListOnsRestMessageDo["StoreHost"].asString();
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["Topic"].isNull())
			onsRestMessageDoObject.topic = msgFoundDoNodeMsgFoundListOnsRestMessageDo["Topic"].asString();
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["BornTimestamp"].isNull())
			onsRestMessageDoObject.bornTimestamp = std::stol(msgFoundDoNodeMsgFoundListOnsRestMessageDo["BornTimestamp"].asString());
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["BodyCRC"].isNull())
			onsRestMessageDoObject.bodyCRC = std::stoi(msgFoundDoNodeMsgFoundListOnsRestMessageDo["BodyCRC"].asString());
		if(!msgFoundDoNodeMsgFoundListOnsRestMessageDo["BornHost"].isNull())
			onsRestMessageDoObject.bornHost = msgFoundDoNodeMsgFoundListOnsRestMessageDo["BornHost"].asString();
		auto allPropertyListNode = msgFoundDoNodeMsgFoundListOnsRestMessageDo["PropertyList"]["MessageProperty"];
		for (auto msgFoundDoNodeMsgFoundListOnsRestMessageDoPropertyListMessageProperty : allPropertyListNode)
		{
			MsgFoundDo::OnsRestMessageDo::MessageProperty propertyListObject;
			if(!msgFoundDoNodeMsgFoundListOnsRestMessageDoPropertyListMessageProperty["Value"].isNull())
				propertyListObject.value = msgFoundDoNodeMsgFoundListOnsRestMessageDoPropertyListMessageProperty["Value"].asString();
			if(!msgFoundDoNodeMsgFoundListOnsRestMessageDoPropertyListMessageProperty["Name"].isNull())
				propertyListObject.name = msgFoundDoNodeMsgFoundListOnsRestMessageDoPropertyListMessageProperty["Name"].asString();
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

