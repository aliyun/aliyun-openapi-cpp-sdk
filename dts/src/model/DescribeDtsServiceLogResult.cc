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

#include <alibabacloud/dts/model/DescribeDtsServiceLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDtsServiceLogResult::DescribeDtsServiceLogResult() :
	ServiceResult()
{}

DescribeDtsServiceLogResult::DescribeDtsServiceLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDtsServiceLogResult::~DescribeDtsServiceLogResult()
{}

void DescribeDtsServiceLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceLogContextsNode = value["ServiceLogContexts"]["ServiceLogContext"];
	for (auto valueServiceLogContextsServiceLogContext : allServiceLogContextsNode)
	{
		ServiceLogContext serviceLogContextsObject;
		if(!valueServiceLogContextsServiceLogContext["Context"].isNull())
			serviceLogContextsObject.context = valueServiceLogContextsServiceLogContext["Context"].asString();
		if(!valueServiceLogContextsServiceLogContext["Time"].isNull())
			serviceLogContextsObject.time = valueServiceLogContextsServiceLogContext["Time"].asString();
		if(!valueServiceLogContextsServiceLogContext["State"].isNull())
			serviceLogContextsObject.state = valueServiceLogContextsServiceLogContext["State"].asString();
		serviceLogContexts_.push_back(serviceLogContextsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

long DescribeDtsServiceLogResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeDtsServiceLogResult::ServiceLogContext> DescribeDtsServiceLogResult::getServiceLogContexts()const
{
	return serviceLogContexts_;
}

int DescribeDtsServiceLogResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDtsServiceLogResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDtsServiceLogResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDtsServiceLogResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDtsServiceLogResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDtsServiceLogResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeDtsServiceLogResult::getSuccess()const
{
	return success_;
}

std::string DescribeDtsServiceLogResult::getErrCode()const
{
	return errCode_;
}

