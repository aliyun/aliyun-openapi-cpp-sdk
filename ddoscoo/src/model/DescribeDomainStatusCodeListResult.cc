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

#include <alibabacloud/ddoscoo/model/DescribeDomainStatusCodeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainStatusCodeListResult::DescribeDomainStatusCodeListResult() :
	ServiceResult()
{}

DescribeDomainStatusCodeListResult::DescribeDomainStatusCodeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainStatusCodeListResult::~DescribeDomainStatusCodeListResult()
{}

void DescribeDomainStatusCodeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatusCodeListNode = value["StatusCodeList"]["StatusCode"];
	for (auto valueStatusCodeListStatusCode : allStatusCodeListNode)
	{
		StatusCode statusCodeListObject;
		if(!valueStatusCodeListStatusCode["Index"].isNull())
			statusCodeListObject.index = std::stoi(valueStatusCodeListStatusCode["Index"].asString());
		if(!valueStatusCodeListStatusCode["Status502"].isNull())
			statusCodeListObject.status502 = std::stol(valueStatusCodeListStatusCode["Status502"].asString());
		if(!valueStatusCodeListStatusCode["Time"].isNull())
			statusCodeListObject.time = std::stol(valueStatusCodeListStatusCode["Time"].asString());
		if(!valueStatusCodeListStatusCode["Status405"].isNull())
			statusCodeListObject.status405 = std::stol(valueStatusCodeListStatusCode["Status405"].asString());
		if(!valueStatusCodeListStatusCode["Status3XX"].isNull())
			statusCodeListObject.status3XX = std::stol(valueStatusCodeListStatusCode["Status3XX"].asString());
		if(!valueStatusCodeListStatusCode["Status503"].isNull())
			statusCodeListObject.status503 = std::stol(valueStatusCodeListStatusCode["Status503"].asString());
		if(!valueStatusCodeListStatusCode["Status4XX"].isNull())
			statusCodeListObject.status4XX = std::stol(valueStatusCodeListStatusCode["Status4XX"].asString());
		if(!valueStatusCodeListStatusCode["Status2XX"].isNull())
			statusCodeListObject.status2XX = std::stol(valueStatusCodeListStatusCode["Status2XX"].asString());
		if(!valueStatusCodeListStatusCode["Status5XX"].isNull())
			statusCodeListObject.status5XX = std::stol(valueStatusCodeListStatusCode["Status5XX"].asString());
		if(!valueStatusCodeListStatusCode["Status504"].isNull())
			statusCodeListObject.status504 = std::stol(valueStatusCodeListStatusCode["Status504"].asString());
		if(!valueStatusCodeListStatusCode["Status200"].isNull())
			statusCodeListObject.status200 = std::stol(valueStatusCodeListStatusCode["Status200"].asString());
		if(!valueStatusCodeListStatusCode["Status403"].isNull())
			statusCodeListObject.status403 = std::stol(valueStatusCodeListStatusCode["Status403"].asString());
		if(!valueStatusCodeListStatusCode["Status404"].isNull())
			statusCodeListObject.status404 = std::stol(valueStatusCodeListStatusCode["Status404"].asString());
		if(!valueStatusCodeListStatusCode["Status501"].isNull())
			statusCodeListObject.status501 = std::stol(valueStatusCodeListStatusCode["Status501"].asString());
		statusCodeList_.push_back(statusCodeListObject);
	}

}

std::vector<DescribeDomainStatusCodeListResult::StatusCode> DescribeDomainStatusCodeListResult::getStatusCodeList()const
{
	return statusCodeList_;
}

