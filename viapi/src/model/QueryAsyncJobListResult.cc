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

#include <alibabacloud/viapi/model/QueryAsyncJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi;
using namespace AlibabaCloud::Viapi::Model;

QueryAsyncJobListResult::QueryAsyncJobListResult() :
	ServiceResult()
{}

QueryAsyncJobListResult::QueryAsyncJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAsyncJobListResult::~QueryAsyncJobListResult()
{}

void QueryAsyncJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	if(!dataNode["TotalRecord"].isNull())
		data_.totalRecord = std::stoi(dataNode["TotalRecord"].asString());
	auto allResultNode = dataNode["Result"]["resultItem"];
	for (auto dataNodeResultresultItem : allResultNode)
	{
		Data::ResultItem resultItemObject;
		if(!dataNodeResultresultItem["CallerParentId"].isNull())
			resultItemObject.callerParentId = dataNodeResultresultItem["CallerParentId"].asString();
		if(!dataNodeResultresultItem["EndTime"].isNull())
			resultItemObject.endTime = dataNodeResultresultItem["EndTime"].asString();
		if(!dataNodeResultresultItem["GmtCreate"].isNull())
			resultItemObject.gmtCreate = dataNodeResultresultItem["GmtCreate"].asString();
		if(!dataNodeResultresultItem["JobId"].isNull())
			resultItemObject.jobId = dataNodeResultresultItem["JobId"].asString();
		if(!dataNodeResultresultItem["PopApiName"].isNull())
			resultItemObject.popApiName = dataNodeResultresultItem["PopApiName"].asString();
		if(!dataNodeResultresultItem["PopProduct"].isNull())
			resultItemObject.popProduct = dataNodeResultresultItem["PopProduct"].asString();
		if(!dataNodeResultresultItem["StartTime"].isNull())
			resultItemObject.startTime = dataNodeResultresultItem["StartTime"].asString();
		if(!dataNodeResultresultItem["Status"].isNull())
			resultItemObject.status = dataNodeResultresultItem["Status"].asString();
		data_.result.push_back(resultItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();

}

std::string QueryAsyncJobListResult::getHttpCode()const
{
	return httpCode_;
}

std::string QueryAsyncJobListResult::getMessage()const
{
	return message_;
}

QueryAsyncJobListResult::Data QueryAsyncJobListResult::getData()const
{
	return data_;
}

bool QueryAsyncJobListResult::getSuccess()const
{
	return success_;
}

