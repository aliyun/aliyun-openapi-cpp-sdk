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

#include <alibabacloud/cloudapi/model/DescribeApiTrafficControlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiTrafficControlsResult::DescribeApiTrafficControlsResult() :
	ServiceResult()
{}

DescribeApiTrafficControlsResult::DescribeApiTrafficControlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiTrafficControlsResult::~DescribeApiTrafficControlsResult()
{}

void DescribeApiTrafficControlsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allApiTrafficControls = value["ApiTrafficControls"]["ApiTrafficControlItem"];
	for (auto value : allApiTrafficControls)
	{
		ApiTrafficControlItem apiTrafficControlsObject;
		if(!value["ApiId"].isNull())
			apiTrafficControlsObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			apiTrafficControlsObject.apiName = value["ApiName"].asString();
		if(!value["TrafficControlId"].isNull())
			apiTrafficControlsObject.trafficControlId = value["TrafficControlId"].asString();
		if(!value["TrafficControlName"].isNull())
			apiTrafficControlsObject.trafficControlName = value["TrafficControlName"].asString();
		if(!value["BoundTime"].isNull())
			apiTrafficControlsObject.boundTime = value["BoundTime"].asString();
		apiTrafficControls_.push_back(apiTrafficControlsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeApiTrafficControlsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeApiTrafficControlsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApiTrafficControlsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeApiTrafficControlsResult::ApiTrafficControlItem> DescribeApiTrafficControlsResult::getApiTrafficControls()const
{
	return apiTrafficControls_;
}

