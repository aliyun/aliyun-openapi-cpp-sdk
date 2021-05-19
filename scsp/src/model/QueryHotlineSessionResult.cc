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

#include <alibabacloud/scsp/model/QueryHotlineSessionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

QueryHotlineSessionResult::QueryHotlineSessionResult() :
	ServiceResult()
{}

QueryHotlineSessionResult::QueryHotlineSessionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryHotlineSessionResult::~QueryHotlineSessionResult()
{}

void QueryHotlineSessionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allCallDetailRecordNode = dataNode["CallDetailRecord"]["CallDetailRecordItem"];
	for (auto dataNodeCallDetailRecordCallDetailRecordItem : allCallDetailRecordNode)
	{
		Data::CallDetailRecordItem callDetailRecordItemObject;
		if(!dataNodeCallDetailRecordCallDetailRecordItem["CallResult"].isNull())
			callDetailRecordItemObject.callResult = dataNodeCallDetailRecordCallDetailRecordItem["CallResult"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["ServicerName"].isNull())
			callDetailRecordItemObject.servicerName = dataNodeCallDetailRecordCallDetailRecordItem["ServicerName"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["OutQueueTime"].isNull())
			callDetailRecordItemObject.outQueueTime = dataNodeCallDetailRecordCallDetailRecordItem["OutQueueTime"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["CallContinueTime"].isNull())
			callDetailRecordItemObject.callContinueTime = std::stoi(dataNodeCallDetailRecordCallDetailRecordItem["CallContinueTime"].asString());
		if(!dataNodeCallDetailRecordCallDetailRecordItem["CreateTime"].isNull())
			callDetailRecordItemObject.createTime = dataNodeCallDetailRecordCallDetailRecordItem["CreateTime"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["PickUpTime"].isNull())
			callDetailRecordItemObject.pickUpTime = dataNodeCallDetailRecordCallDetailRecordItem["PickUpTime"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["RingContinueTime"].isNull())
			callDetailRecordItemObject.ringContinueTime = std::stoi(dataNodeCallDetailRecordCallDetailRecordItem["RingContinueTime"].asString());
		if(!dataNodeCallDetailRecordCallDetailRecordItem["CalledNumber"].isNull())
			callDetailRecordItemObject.calledNumber = dataNodeCallDetailRecordCallDetailRecordItem["CalledNumber"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["ServicerId"].isNull())
			callDetailRecordItemObject.servicerId = dataNodeCallDetailRecordCallDetailRecordItem["ServicerId"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["HangUpTime"].isNull())
			callDetailRecordItemObject.hangUpTime = dataNodeCallDetailRecordCallDetailRecordItem["HangUpTime"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["EvaluationLevel"].isNull())
			callDetailRecordItemObject.evaluationLevel = std::stoi(dataNodeCallDetailRecordCallDetailRecordItem["EvaluationLevel"].asString());
		if(!dataNodeCallDetailRecordCallDetailRecordItem["HangUpRole"].isNull())
			callDetailRecordItemObject.hangUpRole = dataNodeCallDetailRecordCallDetailRecordItem["HangUpRole"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["MemberName"].isNull())
			callDetailRecordItemObject.memberName = dataNodeCallDetailRecordCallDetailRecordItem["MemberName"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["EvaluationScore"].isNull())
			callDetailRecordItemObject.evaluationScore = std::stoi(dataNodeCallDetailRecordCallDetailRecordItem["EvaluationScore"].asString());
		if(!dataNodeCallDetailRecordCallDetailRecordItem["Acid"].isNull())
			callDetailRecordItemObject.acid = dataNodeCallDetailRecordCallDetailRecordItem["Acid"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["RingStartTime"].isNull())
			callDetailRecordItemObject.ringStartTime = dataNodeCallDetailRecordCallDetailRecordItem["RingStartTime"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["CallType"].isNull())
			callDetailRecordItemObject.callType = std::stoi(dataNodeCallDetailRecordCallDetailRecordItem["CallType"].asString());
		if(!dataNodeCallDetailRecordCallDetailRecordItem["GroupName"].isNull())
			callDetailRecordItemObject.groupName = dataNodeCallDetailRecordCallDetailRecordItem["GroupName"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["GroupId"].isNull())
			callDetailRecordItemObject.groupId = std::stol(dataNodeCallDetailRecordCallDetailRecordItem["GroupId"].asString());
		if(!dataNodeCallDetailRecordCallDetailRecordItem["RingEndTime"].isNull())
			callDetailRecordItemObject.ringEndTime = dataNodeCallDetailRecordCallDetailRecordItem["RingEndTime"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["InQueueTime"].isNull())
			callDetailRecordItemObject.inQueueTime = dataNodeCallDetailRecordCallDetailRecordItem["InQueueTime"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["CallingNumber"].isNull())
			callDetailRecordItemObject.callingNumber = dataNodeCallDetailRecordCallDetailRecordItem["CallingNumber"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["MemberId"].isNull())
			callDetailRecordItemObject.memberId = dataNodeCallDetailRecordCallDetailRecordItem["MemberId"].asString();
		if(!dataNodeCallDetailRecordCallDetailRecordItem["QueueUpContinueTime"].isNull())
			callDetailRecordItemObject.queueUpContinueTime = std::stoi(dataNodeCallDetailRecordCallDetailRecordItem["QueueUpContinueTime"].asString());
		data_.callDetailRecord.push_back(callDetailRecordItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryHotlineSessionResult::getMessage()const
{
	return message_;
}

QueryHotlineSessionResult::Data QueryHotlineSessionResult::getData()const
{
	return data_;
}

std::string QueryHotlineSessionResult::getCode()const
{
	return code_;
}

bool QueryHotlineSessionResult::getSuccess()const
{
	return success_;
}

