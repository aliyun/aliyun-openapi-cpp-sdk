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

#include <alibabacloud/cdrs/model/ListCityMapImageDetailsRequest.h>

using AlibabaCloud::CDRS::Model::ListCityMapImageDetailsRequest;

ListCityMapImageDetailsRequest::ListCityMapImageDetailsRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListCityMapImageDetails")
{
	setMethod(HttpRequest::Method::Post);
}

ListCityMapImageDetailsRequest::~ListCityMapImageDetailsRequest()
{}

std::string ListCityMapImageDetailsRequest::getTimeInterval()const
{
	return timeInterval_;
}

void ListCityMapImageDetailsRequest::setTimeInterval(const std::string& timeInterval)
{
	timeInterval_ = timeInterval;
	setBodyParameter("TimeInterval", timeInterval);
}

long ListCityMapImageDetailsRequest::getRecordNumber()const
{
	return recordNumber_;
}

void ListCityMapImageDetailsRequest::setRecordNumber(long recordNumber)
{
	recordNumber_ = recordNumber;
	setBodyParameter("RecordNumber", std::to_string(recordNumber));
}

std::string ListCityMapImageDetailsRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListCityMapImageDetailsRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

