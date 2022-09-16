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

#include <alibabacloud/ecd/model/RebuildDesktopsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

RebuildDesktopsResult::RebuildDesktopsResult() :
	ServiceResult()
{}

RebuildDesktopsResult::RebuildDesktopsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RebuildDesktopsResult::~RebuildDesktopsResult()
{}

void RebuildDesktopsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRebuildResultsNode = value["RebuildResults"]["RebuildResult"];
	for (auto valueRebuildResultsRebuildResult : allRebuildResultsNode)
	{
		RebuildResult rebuildResultsObject;
		if(!valueRebuildResultsRebuildResult["Code"].isNull())
			rebuildResultsObject.code = valueRebuildResultsRebuildResult["Code"].asString();
		if(!valueRebuildResultsRebuildResult["Message"].isNull())
			rebuildResultsObject.message = valueRebuildResultsRebuildResult["Message"].asString();
		if(!valueRebuildResultsRebuildResult["DesktopId"].isNull())
			rebuildResultsObject.desktopId = valueRebuildResultsRebuildResult["DesktopId"].asString();
		rebuildResults_.push_back(rebuildResultsObject);
	}

}

std::vector<RebuildDesktopsResult::RebuildResult> RebuildDesktopsResult::getRebuildResults()const
{
	return rebuildResults_;
}

