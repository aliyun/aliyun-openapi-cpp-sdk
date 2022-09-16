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

#include <alibabacloud/ecd/model/DescribeCustomizedListHeadersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeCustomizedListHeadersResult::DescribeCustomizedListHeadersResult() :
	ServiceResult()
{}

DescribeCustomizedListHeadersResult::DescribeCustomizedListHeadersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomizedListHeadersResult::~DescribeCustomizedListHeadersResult()
{}

void DescribeCustomizedListHeadersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHeadersNode = value["Headers"]["Header"];
	for (auto valueHeadersHeader : allHeadersNode)
	{
		Header headersObject;
		if(!valueHeadersHeader["DisplayType"].isNull())
			headersObject.displayType = valueHeadersHeader["DisplayType"].asString();
		if(!valueHeadersHeader["HeaderKey"].isNull())
			headersObject.headerKey = valueHeadersHeader["HeaderKey"].asString();
		if(!valueHeadersHeader["HeaderName"].isNull())
			headersObject.headerName = valueHeadersHeader["HeaderName"].asString();
		headers_.push_back(headersObject);
	}

}

std::vector<DescribeCustomizedListHeadersResult::Header> DescribeCustomizedListHeadersResult::getHeaders()const
{
	return headers_;
}

