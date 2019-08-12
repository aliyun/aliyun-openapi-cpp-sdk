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

#include <alibabacloud/ccc/model/ListIvrTrackingDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListIvrTrackingDetailResult::ListIvrTrackingDetailResult() :
	ServiceResult()
{}

ListIvrTrackingDetailResult::ListIvrTrackingDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIvrTrackingDetailResult::~ListIvrTrackingDetailResult()
{}

void ListIvrTrackingDetailResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto ivrTrackingDetailsNode = value["IvrTrackingDetails"];
	if(!ivrTrackingDetailsNode["TotalCount"].isNull())
		ivrTrackingDetails_.totalCount = std::stoi(ivrTrackingDetailsNode["TotalCount"].asString());
	if(!ivrTrackingDetailsNode["PageNumber"].isNull())
		ivrTrackingDetails_.pageNumber = std::stoi(ivrTrackingDetailsNode["PageNumber"].asString());
	if(!ivrTrackingDetailsNode["PageSize"].isNull())
		ivrTrackingDetails_.pageSize = std::stoi(ivrTrackingDetailsNode["PageSize"].asString());
	auto allList = value["List"]["IvrTrackingDetail"];
	for (auto value : allList)
	{
		IvrTrackingDetails::IvrTrackingDetail ivrTrackingDetailObject;
		if(!value["FlowName"].isNull())
			ivrTrackingDetailObject.flowName = value["FlowName"].asString();
		if(!value["NodeName"].isNull())
			ivrTrackingDetailObject.nodeName = value["NodeName"].asString();
		if(!value["NodeType"].isNull())
			ivrTrackingDetailObject.nodeType = value["NodeType"].asString();
		if(!value["ContactId"].isNull())
			ivrTrackingDetailObject.contactId = value["ContactId"].asString();
		if(!value["CallingNumber"].isNull())
			ivrTrackingDetailObject.callingNumber = value["CallingNumber"].asString();
		if(!value["CalledNumber"].isNull())
			ivrTrackingDetailObject.calledNumber = value["CalledNumber"].asString();
		if(!value["StartTime"].isNull())
			ivrTrackingDetailObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["StopTime"].isNull())
			ivrTrackingDetailObject.stopTime = std::stol(value["StopTime"].asString());
		if(!value["Status"].isNull())
			ivrTrackingDetailObject.status = value["Status"].asString();
		if(!value["InputData"].isNull())
			ivrTrackingDetailObject.inputData = value["InputData"].asString();
		if(!value["OutputData"].isNull())
			ivrTrackingDetailObject.outputData = value["OutputData"].asString();
		if(!value["Description"].isNull())
			ivrTrackingDetailObject.description = value["Description"].asString();
		if(!value["DeviceID"].isNull())
			ivrTrackingDetailObject.deviceID = value["DeviceID"].asString();
		if(!value["TenantId"].isNull())
			ivrTrackingDetailObject.tenantId = value["TenantId"].asString();
		ivrTrackingDetails_.list.push_back(ivrTrackingDetailObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListIvrTrackingDetailResult::getMessage()const
{
	return message_;
}

ListIvrTrackingDetailResult::IvrTrackingDetails ListIvrTrackingDetailResult::getIvrTrackingDetails()const
{
	return ivrTrackingDetails_;
}

int ListIvrTrackingDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListIvrTrackingDetailResult::getCode()const
{
	return code_;
}

bool ListIvrTrackingDetailResult::getSuccess()const
{
	return success_;
}

