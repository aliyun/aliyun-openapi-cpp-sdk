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

#include <alibabacloud/ons/model/OnsTraceGetResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsTraceGetResultResult::OnsTraceGetResultResult() :
	ServiceResult()
{}

OnsTraceGetResultResult::OnsTraceGetResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsTraceGetResultResult::~OnsTraceGetResultResult()
{}

void OnsTraceGetResultResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto traceDataNode = value["TraceData"];
	if(!traceDataNode["QueryId"].isNull())
		traceData_.queryId = traceDataNode["QueryId"].asString();
	if(!traceDataNode["UserId"].isNull())
		traceData_.userId = traceDataNode["UserId"].asString();
	if(!traceDataNode["Topic"].isNull())
		traceData_.topic = traceDataNode["Topic"].asString();
	if(!traceDataNode["MsgId"].isNull())
		traceData_.msgId = traceDataNode["MsgId"].asString();
	if(!traceDataNode["MsgKey"].isNull())
		traceData_.msgKey = traceDataNode["MsgKey"].asString();
	if(!traceDataNode["Status"].isNull())
		traceData_.status = traceDataNode["Status"].asString();
	if(!traceDataNode["CreateTime"].isNull())
		traceData_.createTime = std::stol(traceDataNode["CreateTime"].asString());
	if(!traceDataNode["UpdateTime"].isNull())
		traceData_.updateTime = std::stol(traceDataNode["UpdateTime"].asString());
	if(!traceDataNode["InstanceId"].isNull())
		traceData_.instanceId = traceDataNode["InstanceId"].asString();
	auto allTraceList = value["TraceList"]["TraceMapDo"];
	for (auto value : allTraceList)
	{
		TraceData::TraceMapDo traceMapDoObject;
		if(!value["PubTime"].isNull())
			traceMapDoObject.pubTime = std::stol(value["PubTime"].asString());
		if(!value["Topic"].isNull())
			traceMapDoObject.topic = value["Topic"].asString();
		if(!value["PubGroupName"].isNull())
			traceMapDoObject.pubGroupName = value["PubGroupName"].asString();
		if(!value["MsgId"].isNull())
			traceMapDoObject.msgId = value["MsgId"].asString();
		if(!value["Tag"].isNull())
			traceMapDoObject.tag = value["Tag"].asString();
		if(!value["MsgKey"].isNull())
			traceMapDoObject.msgKey = value["MsgKey"].asString();
		if(!value["BornHost"].isNull())
			traceMapDoObject.bornHost = value["BornHost"].asString();
		if(!value["CostTime"].isNull())
			traceMapDoObject.costTime = std::stoi(value["CostTime"].asString());
		if(!value["Status"].isNull())
			traceMapDoObject.status = value["Status"].asString();
		auto allSubList = value["SubList"]["SubMapDo"];
		for (auto value : allSubList)
		{
			TraceData::TraceMapDo::SubMapDo subListObject;
			if(!value["SubGroupName"].isNull())
				subListObject.subGroupName = value["SubGroupName"].asString();
			if(!value["SuccessCount"].isNull())
				subListObject.successCount = std::stoi(value["SuccessCount"].asString());
			if(!value["FailCount"].isNull())
				subListObject.failCount = std::stoi(value["FailCount"].asString());
			auto allClientList = value["ClientList"]["SubClientInfoDo"];
			for (auto value : allClientList)
			{
				TraceData::TraceMapDo::SubMapDo::SubClientInfoDo clientListObject;
				if(!value["SubGroupName"].isNull())
					clientListObject.subGroupName = value["SubGroupName"].asString();
				if(!value["SubTime"].isNull())
					clientListObject.subTime = std::stol(value["SubTime"].asString());
				if(!value["ClientHost"].isNull())
					clientListObject.clientHost = value["ClientHost"].asString();
				if(!value["ReconsumeTimes"].isNull())
					clientListObject.reconsumeTimes = std::stoi(value["ReconsumeTimes"].asString());
				if(!value["CostTime"].isNull())
					clientListObject.costTime = std::stoi(value["CostTime"].asString());
				if(!value["Status"].isNull())
					clientListObject.status = value["Status"].asString();
				subListObject.clientList.push_back(clientListObject);
			}
			traceMapDoObject.subList.push_back(subListObject);
		}
		traceData_.traceList.push_back(traceMapDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsTraceGetResultResult::TraceData OnsTraceGetResultResult::getTraceData()const
{
	return traceData_;
}

std::string OnsTraceGetResultResult::getHelpUrl()const
{
	return helpUrl_;
}

