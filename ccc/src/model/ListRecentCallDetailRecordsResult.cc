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

#include <alibabacloud/ccc/model/ListRecentCallDetailRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRecentCallDetailRecordsResult::ListRecentCallDetailRecordsResult() :
	ServiceResult()
{}

ListRecentCallDetailRecordsResult::ListRecentCallDetailRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecentCallDetailRecordsResult::~ListRecentCallDetailRecordsResult()
{}

void ListRecentCallDetailRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["CallDetailRecord"];
	for (auto dataNodeListCallDetailRecord : allListNode)
	{
		Data::CallDetailRecord callDetailRecordObject;
		if(!dataNodeListCallDetailRecord["StartTime"].isNull())
			callDetailRecordObject.startTime = std::stol(dataNodeListCallDetailRecord["StartTime"].asString());
		if(!dataNodeListCallDetailRecord["ContactDisposition"].isNull())
			callDetailRecordObject.contactDisposition = dataNodeListCallDetailRecord["ContactDisposition"].asString();
		if(!dataNodeListCallDetailRecord["ContactType"].isNull())
			callDetailRecordObject.contactType = dataNodeListCallDetailRecord["ContactType"].asString();
		if(!dataNodeListCallDetailRecord["AgentIds"].isNull())
			callDetailRecordObject.agentIds = dataNodeListCallDetailRecord["AgentIds"].asString();
		if(!dataNodeListCallDetailRecord["ContactId"].isNull())
			callDetailRecordObject.contactId = dataNodeListCallDetailRecord["ContactId"].asString();
		if(!dataNodeListCallDetailRecord["CallDuration"].isNull())
			callDetailRecordObject.callDuration = dataNodeListCallDetailRecord["CallDuration"].asString();
		if(!dataNodeListCallDetailRecord["CallingNumber"].isNull())
			callDetailRecordObject.callingNumber = dataNodeListCallDetailRecord["CallingNumber"].asString();
		if(!dataNodeListCallDetailRecord["Duration"].isNull())
			callDetailRecordObject.duration = std::stol(dataNodeListCallDetailRecord["Duration"].asString());
		if(!dataNodeListCallDetailRecord["InstanceId"].isNull())
			callDetailRecordObject.instanceId = dataNodeListCallDetailRecord["InstanceId"].asString();
		if(!dataNodeListCallDetailRecord["CalledNumber"].isNull())
			callDetailRecordObject.calledNumber = dataNodeListCallDetailRecord["CalledNumber"].asString();
		if(!dataNodeListCallDetailRecord["SkillGroupIds"].isNull())
			callDetailRecordObject.skillGroupIds = dataNodeListCallDetailRecord["SkillGroupIds"].asString();
		data_.list.push_back(callDetailRecordObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListRecentCallDetailRecordsResult::getMessage()const
{
	return message_;
}

int ListRecentCallDetailRecordsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListRecentCallDetailRecordsResult::Data ListRecentCallDetailRecordsResult::getData()const
{
	return data_;
}

std::string ListRecentCallDetailRecordsResult::getCode()const
{
	return code_;
}

