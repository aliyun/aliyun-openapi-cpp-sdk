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

#include <alibabacloud/cdn/model/ListFCTriggerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

ListFCTriggerResult::ListFCTriggerResult() :
	ServiceResult()
{}

ListFCTriggerResult::ListFCTriggerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFCTriggerResult::~ListFCTriggerResult()
{}

void ListFCTriggerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFCTriggers = value["FCTriggers"]["FCTrigger"];
	for (auto value : allFCTriggers)
	{
		FCTrigger fCTriggersObject;
		if(!value["EventMetaName"].isNull())
			fCTriggersObject.eventMetaName = value["EventMetaName"].asString();
		if(!value["EventMetaVersion"].isNull())
			fCTriggersObject.eventMetaVersion = value["EventMetaVersion"].asString();
		if(!value["TriggerARN"].isNull())
			fCTriggersObject.triggerARN = value["TriggerARN"].asString();
		if(!value["RoleARN"].isNull())
			fCTriggersObject.roleARN = value["RoleARN"].asString();
		if(!value["SourceArn"].isNull())
			fCTriggersObject.sourceArn = value["SourceArn"].asString();
		if(!value["Notes"].isNull())
			fCTriggersObject.notes = value["Notes"].asString();
		fCTriggers_.push_back(fCTriggersObject);
	}

}

std::vector<ListFCTriggerResult::FCTrigger> ListFCTriggerResult::getFCTriggers()const
{
	return fCTriggers_;
}

