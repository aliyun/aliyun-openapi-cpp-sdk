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

#include <alibabacloud/drds/model/ListVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

ListVersionsResult::ListVersionsResult() :
	ServiceResult()
{}

ListVersionsResult::ListVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVersionsResult::~ListVersionsResult()
{}

void ListVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allversionsNode = value["versions"]["versionsItem"];
	for (auto valueversionsversionsItem : allversionsNode)
	{
		VersionsItem versionsObject;
		if(!valueversionsversionsItem["DrdsVersion"].isNull())
			versionsObject.drdsVersion = valueversionsversionsItem["DrdsVersion"].asString();
		if(!valueversionsversionsItem["Latest"].isNull())
			versionsObject.latest = valueversionsversionsItem["Latest"].asString() == "true";
		versions_.push_back(versionsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListVersionsResult::VersionsItem> ListVersionsResult::getversions()const
{
	return versions_;
}

bool ListVersionsResult::getSuccess()const
{
	return success_;
}

