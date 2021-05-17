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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ivrTrackingDetailsNode = value["IvrTrackingDetails"];
	if(!ivrTrackingDetailsNode["TotalCount"].isNull())
		ivrTrackingDetails_.totalCount = std::stoi(ivrTrackingDetailsNode["TotalCount"].asString());
	if(!ivrTrackingDetailsNode["PageNumber"].isNull())
		ivrTrackingDetails_.pageNumber = std::stoi(ivrTrackingDetailsNode["PageNumber"].asString());
	if(!ivrTrackingDetailsNode["PageSize"].isNull())
		ivrTrackingDetails_.pageSize = std::stoi(ivrTrackingDetailsNode["PageSize"].asString());
	auto allListNode = ivrTrackingDetailsNode["List"]["IvrTrackingDetail"];
	for (auto ivrTrackingDetailsNodeListIvrTrackingDetail : allListNode)
	{
		IvrTrackingDetails::IvrTrackingDetail ivrTrackingDetailObject;
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["FlowName"].isNull())
			ivrTrackingDetailObject.flowName = ivrTrackingDetailsNodeListIvrTrackingDetail["FlowName"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["NodeName"].isNull())
			ivrTrackingDetailObject.nodeName = ivrTrackingDetailsNodeListIvrTrackingDetail["NodeName"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["NodeType"].isNull())
			ivrTrackingDetailObject.nodeType = ivrTrackingDetailsNodeListIvrTrackingDetail["NodeType"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["ContactId"].isNull())
			ivrTrackingDetailObject.contactId = ivrTrackingDetailsNodeListIvrTrackingDetail["ContactId"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["CallingNumber"].isNull())
			ivrTrackingDetailObject.callingNumber = ivrTrackingDetailsNodeListIvrTrackingDetail["CallingNumber"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["CalledNumber"].isNull())
			ivrTrackingDetailObject.calledNumber = ivrTrackingDetailsNodeListIvrTrackingDetail["CalledNumber"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["StartTime"].isNull())
			ivrTrackingDetailObject.startTime = std::stol(ivrTrackingDetailsNodeListIvrTrackingDetail["StartTime"].asString());
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["StopTime"].isNull())
			ivrTrackingDetailObject.stopTime = std::stol(ivrTrackingDetailsNodeListIvrTrackingDetail["StopTime"].asString());
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["Status"].isNull())
			ivrTrackingDetailObject.status = ivrTrackingDetailsNodeListIvrTrackingDetail["Status"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["InputData"].isNull())
			ivrTrackingDetailObject.inputData = ivrTrackingDetailsNodeListIvrTrackingDetail["InputData"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["OutputData"].isNull())
			ivrTrackingDetailObject.outputData = ivrTrackingDetailsNodeListIvrTrackingDetail["OutputData"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["Description"].isNull())
			ivrTrackingDetailObject.description = ivrTrackingDetailsNodeListIvrTrackingDetail["Description"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["DeviceID"].isNull())
			ivrTrackingDetailObject.deviceID = ivrTrackingDetailsNodeListIvrTrackingDetail["DeviceID"].asString();
		if(!ivrTrackingDetailsNodeListIvrTrackingDetail["TenantId"].isNull())
			ivrTrackingDetailObject.tenantId = ivrTrackingDetailsNodeListIvrTrackingDetail["TenantId"].asString();
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

