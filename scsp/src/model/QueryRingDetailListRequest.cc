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

#include <alibabacloud/scsp/model/QueryRingDetailListRequest.h>

using AlibabaCloud::Scsp::Model::QueryRingDetailListRequest;

QueryRingDetailListRequest::QueryRingDetailListRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "QueryRingDetailList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryRingDetailListRequest::~QueryRingDetailListRequest()
{}

std::string QueryRingDetailListRequest::getFromPhoneNumList()const
{
	return fromPhoneNumList_;
}

void QueryRingDetailListRequest::setFromPhoneNumList(const std::string& fromPhoneNumList)
{
	fromPhoneNumList_ = fromPhoneNumList;
	setBodyParameter("FromPhoneNumList", fromPhoneNumList);
}

std::string QueryRingDetailListRequest::getCallOutStatus()const
{
	return callOutStatus_;
}

void QueryRingDetailListRequest::setCallOutStatus(const std::string& callOutStatus)
{
	callOutStatus_ = callOutStatus;
	setBodyParameter("CallOutStatus", callOutStatus);
}

long QueryRingDetailListRequest::getStartDate()const
{
	return startDate_;
}

void QueryRingDetailListRequest::setStartDate(long startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", std::to_string(startDate));
}

long QueryRingDetailListRequest::getEndDate()const
{
	return endDate_;
}

void QueryRingDetailListRequest::setEndDate(long endDate)
{
	endDate_ = endDate;
	setBodyParameter("EndDate", std::to_string(endDate));
}

std::string QueryRingDetailListRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryRingDetailListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

int QueryRingDetailListRequest::getPageNo()const
{
	return pageNo_;
}

void QueryRingDetailListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

std::string QueryRingDetailListRequest::getExtra()const
{
	return extra_;
}

void QueryRingDetailListRequest::setExtra(const std::string& extra)
{
	extra_ = extra;
	setBodyParameter("Extra", extra);
}

int QueryRingDetailListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryRingDetailListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryRingDetailListRequest::getToPhoneNumList()const
{
	return toPhoneNumList_;
}

void QueryRingDetailListRequest::setToPhoneNumList(const std::string& toPhoneNumList)
{
	toPhoneNumList_ = toPhoneNumList;
	setBodyParameter("ToPhoneNumList", toPhoneNumList);
}

