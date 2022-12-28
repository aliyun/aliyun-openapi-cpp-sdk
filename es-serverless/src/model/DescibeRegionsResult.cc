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

#include <alibabacloud/es-serverless/model/DescibeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Es_serverless;
using namespace AlibabaCloud::Es_serverless::Model;

DescibeRegionsResult::DescibeRegionsResult() :
	ServiceResult()
{}

DescibeRegionsResult::DescibeRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescibeRegionsResult::~DescibeRegionsResult()
{}

void DescibeRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["RegionInfo"];
	for (auto valueresultRegionInfo : allresultNode)
	{
		RegionInfo resultObject;
		if(!valueresultRegionInfo["regionId"].isNull())
			resultObject.regionId = valueresultRegionInfo["regionId"].asString();
		if(!valueresultRegionInfo["localName"].isNull())
			resultObject.localName = valueresultRegionInfo["localName"].asString();
		if(!valueresultRegionInfo["endpoint"].isNull())
			resultObject.endpoint = valueresultRegionInfo["endpoint"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<DescibeRegionsResult::RegionInfo> DescibeRegionsResult::getresult()const
{
	return result_;
}

std::string DescibeRegionsResult::getRequestId()const
{
	return requestId_;
}

