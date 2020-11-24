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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagKeyListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

ExploreHiTSDBInstanceDataTagKeyListResult::ExploreHiTSDBInstanceDataTagKeyListResult() :
	ServiceResult()
{}

ExploreHiTSDBInstanceDataTagKeyListResult::ExploreHiTSDBInstanceDataTagKeyListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExploreHiTSDBInstanceDataTagKeyListResult::~ExploreHiTSDBInstanceDataTagKeyListResult()
{}

void ExploreHiTSDBInstanceDataTagKeyListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagKeyListNode = value["TagKeyList"]["Data"];
	for (auto valueTagKeyListData : allTagKeyListNode)
	{
		Data tagKeyListObject;
		if(!valueTagKeyListData["TagKey"].isNull())
			tagKeyListObject.tagKey = valueTagKeyListData["TagKey"].asString();
		tagKeyList_.push_back(tagKeyListObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string ExploreHiTSDBInstanceDataTagKeyListResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<ExploreHiTSDBInstanceDataTagKeyListResult::Data> ExploreHiTSDBInstanceDataTagKeyListResult::getTagKeyList()const
{
	return tagKeyList_;
}

