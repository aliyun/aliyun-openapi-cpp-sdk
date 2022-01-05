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

#include <alibabacloud/ccc/model/ListSipCallRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSipCallRecordsResult::ListSipCallRecordsResult() :
	ServiceResult()
{}

ListSipCallRecordsResult::ListSipCallRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSipCallRecordsResult::~ListSipCallRecordsResult()
{}

void ListSipCallRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["sipCallRecords"];
	for (auto valueDatasipCallRecords : allDataNode)
	{
		SipCallRecords dataObject;
		if(!valueDatasipCallRecords["InstanceId"].isNull())
			dataObject.instanceId = valueDatasipCallRecords["InstanceId"].asString();
		if(!valueDatasipCallRecords["CallId"].isNull())
			dataObject.callId = valueDatasipCallRecords["CallId"].asString();
		if(!valueDatasipCallRecords["ContactId"].isNull())
			dataObject.contactId = valueDatasipCallRecords["ContactId"].asString();
		if(!valueDatasipCallRecords["Caller"].isNull())
			dataObject.caller = valueDatasipCallRecords["Caller"].asString();
		if(!valueDatasipCallRecords["Callee"].isNull())
			dataObject.callee = valueDatasipCallRecords["Callee"].asString();
		if(!valueDatasipCallRecords["CallerClusterId"].isNull())
			dataObject.callerClusterId = valueDatasipCallRecords["CallerClusterId"].asString();
		if(!valueDatasipCallRecords["CalleeClusterId"].isNull())
			dataObject.calleeClusterId = valueDatasipCallRecords["CalleeClusterId"].asString();
		if(!valueDatasipCallRecords["LastResponseCode"].isNull())
			dataObject.lastResponseCode = std::stoi(valueDatasipCallRecords["LastResponseCode"].asString());
		if(!valueDatasipCallRecords["LastResponseText"].isNull())
			dataObject.lastResponseText = valueDatasipCallRecords["LastResponseText"].asString();
		if(!valueDatasipCallRecords["InviteTime"].isNull())
			dataObject.inviteTime = std::stol(valueDatasipCallRecords["InviteTime"].asString());
		if(!valueDatasipCallRecords["RingTime"].isNull())
			dataObject.ringTime = std::stol(valueDatasipCallRecords["RingTime"].asString());
		if(!valueDatasipCallRecords["EstablishedTime"].isNull())
			dataObject.establishedTime = std::stol(valueDatasipCallRecords["EstablishedTime"].asString());
		if(!valueDatasipCallRecords["ReleasedTime"].isNull())
			dataObject.releasedTime = std::stol(valueDatasipCallRecords["ReleasedTime"].asString());
		if(!valueDatasipCallRecords["ReleaseReasonCode"].isNull())
			dataObject.releaseReasonCode = std::stoi(valueDatasipCallRecords["ReleaseReasonCode"].asString());
		if(!valueDatasipCallRecords["EarlyMediaUrl"].isNull())
			dataObject.earlyMediaUrl = valueDatasipCallRecords["EarlyMediaUrl"].asString();
		if(!valueDatasipCallRecords["EarlyMediaText"].isNull())
			dataObject.earlyMediaText = valueDatasipCallRecords["EarlyMediaText"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSipCallRecordsResult::getMessage()const
{
	return message_;
}

int ListSipCallRecordsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListSipCallRecordsResult::SipCallRecords> ListSipCallRecordsResult::getData()const
{
	return data_;
}

std::string ListSipCallRecordsResult::getCode()const
{
	return code_;
}

