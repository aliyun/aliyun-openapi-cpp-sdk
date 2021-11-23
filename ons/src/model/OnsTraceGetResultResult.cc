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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto traceDataNode = value["TraceData"];
	if(!traceDataNode["Status"].isNull())
		traceData_.status = traceDataNode["Status"].asString();
	if(!traceDataNode["MsgKey"].isNull())
		traceData_.msgKey = traceDataNode["MsgKey"].asString();
	if(!traceDataNode["UpdateTime"].isNull())
		traceData_.updateTime = std::stol(traceDataNode["UpdateTime"].asString());
	if(!traceDataNode["CreateTime"].isNull())
		traceData_.createTime = std::stol(traceDataNode["CreateTime"].asString());
	if(!traceDataNode["Topic"].isNull())
		traceData_.topic = traceDataNode["Topic"].asString();
	if(!traceDataNode["UserId"].isNull())
		traceData_.userId = traceDataNode["UserId"].asString();
	if(!traceDataNode["InstanceId"].isNull())
		traceData_.instanceId = traceDataNode["InstanceId"].asString();
	if(!traceDataNode["MsgId"].isNull())
		traceData_.msgId = traceDataNode["MsgId"].asString();
	if(!traceDataNode["QueryId"].isNull())
		traceData_.queryId = traceDataNode["QueryId"].asString();
	auto allTraceListNode = traceDataNode["TraceList"]["TraceMapDo"];
	for (auto traceDataNodeTraceListTraceMapDo : allTraceListNode)
	{
		TraceData::TraceMapDo traceMapDoObject;
		if(!traceDataNodeTraceListTraceMapDo["Status"].isNull())
			traceMapDoObject.status = traceDataNodeTraceListTraceMapDo["Status"].asString();
		if(!traceDataNodeTraceListTraceMapDo["MsgKey"].isNull())
			traceMapDoObject.msgKey = traceDataNodeTraceListTraceMapDo["MsgKey"].asString();
		if(!traceDataNodeTraceListTraceMapDo["PubTime"].isNull())
			traceMapDoObject.pubTime = std::stol(traceDataNodeTraceListTraceMapDo["PubTime"].asString());
		if(!traceDataNodeTraceListTraceMapDo["Topic"].isNull())
			traceMapDoObject.topic = traceDataNodeTraceListTraceMapDo["Topic"].asString();
		if(!traceDataNodeTraceListTraceMapDo["CostTime"].isNull())
			traceMapDoObject.costTime = std::stoi(traceDataNodeTraceListTraceMapDo["CostTime"].asString());
		if(!traceDataNodeTraceListTraceMapDo["Tag"].isNull())
			traceMapDoObject.tag = traceDataNodeTraceListTraceMapDo["Tag"].asString();
		if(!traceDataNodeTraceListTraceMapDo["MsgId"].isNull())
			traceMapDoObject.msgId = traceDataNodeTraceListTraceMapDo["MsgId"].asString();
		if(!traceDataNodeTraceListTraceMapDo["PubGroupName"].isNull())
			traceMapDoObject.pubGroupName = traceDataNodeTraceListTraceMapDo["PubGroupName"].asString();
		if(!traceDataNodeTraceListTraceMapDo["BornHost"].isNull())
			traceMapDoObject.bornHost = traceDataNodeTraceListTraceMapDo["BornHost"].asString();
		auto allSubListNode = traceDataNodeTraceListTraceMapDo["SubList"]["SubMapDo"];
		for (auto traceDataNodeTraceListTraceMapDoSubListSubMapDo : allSubListNode)
		{
			TraceData::TraceMapDo::SubMapDo subListObject;
			if(!traceDataNodeTraceListTraceMapDoSubListSubMapDo["FailCount"].isNull())
				subListObject.failCount = std::stoi(traceDataNodeTraceListTraceMapDoSubListSubMapDo["FailCount"].asString());
			if(!traceDataNodeTraceListTraceMapDoSubListSubMapDo["SubGroupName"].isNull())
				subListObject.subGroupName = traceDataNodeTraceListTraceMapDoSubListSubMapDo["SubGroupName"].asString();
			if(!traceDataNodeTraceListTraceMapDoSubListSubMapDo["SuccessCount"].isNull())
				subListObject.successCount = std::stoi(traceDataNodeTraceListTraceMapDoSubListSubMapDo["SuccessCount"].asString());
			auto allClientListNode = traceDataNodeTraceListTraceMapDoSubListSubMapDo["ClientList"]["SubClientInfoDo"];
			for (auto traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo : allClientListNode)
			{
				TraceData::TraceMapDo::SubMapDo::SubClientInfoDo clientListObject;
				if(!traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["Status"].isNull())
					clientListObject.status = traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["Status"].asString();
				if(!traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["SubTime"].isNull())
					clientListObject.subTime = std::stol(traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["SubTime"].asString());
				if(!traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["ReconsumeTimes"].isNull())
					clientListObject.reconsumeTimes = std::stoi(traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["ReconsumeTimes"].asString());
				if(!traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["SubGroupName"].isNull())
					clientListObject.subGroupName = traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["SubGroupName"].asString();
				if(!traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["ClientHost"].isNull())
					clientListObject.clientHost = traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["ClientHost"].asString();
				if(!traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["CostTime"].isNull())
					clientListObject.costTime = std::stoi(traceDataNodeTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo["CostTime"].asString());
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

