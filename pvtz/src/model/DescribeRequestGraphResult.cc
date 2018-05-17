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

#include <alibabacloud/pvtz/model/DescribeRequestGraphResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

DescribeRequestGraphResult::DescribeRequestGraphResult() :
	ServiceResult()
{}

DescribeRequestGraphResult::DescribeRequestGraphResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRequestGraphResult::~DescribeRequestGraphResult()
{}

void DescribeRequestGraphResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRequestDetails = value["RequestDetails"]["ZoneRequestTop"];
	for (auto value : allRequestDetails)
	{
		ZoneRequestTop requestDetailsObject;
		if(!value["Time"].isNull())
			requestDetailsObject.time = value["Time"].asString();
		if(!value["Timestamp"].isNull())
			requestDetailsObject.timestamp = std::stol(value["Timestamp"].asString());
		if(!value["RequestCount"].isNull())
			requestDetailsObject.requestCount = std::stol(value["RequestCount"].asString());
		requestDetails_.push_back(requestDetailsObject);
	}

}

std::vector<DescribeRequestGraphResult::ZoneRequestTop> DescribeRequestGraphResult::getRequestDetails()const
{
	return requestDetails_;
}

