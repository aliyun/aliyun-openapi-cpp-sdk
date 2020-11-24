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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagValueListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

ExploreHiTSDBInstanceDataTagValueListResult::ExploreHiTSDBInstanceDataTagValueListResult() :
	ServiceResult()
{}

ExploreHiTSDBInstanceDataTagValueListResult::ExploreHiTSDBInstanceDataTagValueListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExploreHiTSDBInstanceDataTagValueListResult::~ExploreHiTSDBInstanceDataTagValueListResult()
{}

void ExploreHiTSDBInstanceDataTagValueListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagValueListNode = value["TagValueList"]["Data"];
	for (auto valueTagValueListData : allTagValueListNode)
	{
		Data tagValueListObject;
		if(!valueTagValueListData["TagValue"].isNull())
			tagValueListObject.tagValue = valueTagValueListData["TagValue"].asString();
		tagValueList_.push_back(tagValueListObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string ExploreHiTSDBInstanceDataTagValueListResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<ExploreHiTSDBInstanceDataTagValueListResult::Data> ExploreHiTSDBInstanceDataTagValueListResult::getTagValueList()const
{
	return tagValueList_;
}

