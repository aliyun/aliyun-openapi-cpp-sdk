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

#include <alibabacloud/emr/model/ListClusterTagForAdminResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterTagForAdminResult::ListClusterTagForAdminResult() :
	ServiceResult()
{}

ListClusterTagForAdminResult::ListClusterTagForAdminResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterTagForAdminResult::~ListClusterTagForAdminResult()
{}

void ListClusterTagForAdminResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterTagListNode = value["ClusterTagList"]["ClusterTag"];
	for (auto valueClusterTagListClusterTag : allClusterTagListNode)
	{
		ClusterTag clusterTagListObject;
		if(!valueClusterTagListClusterTag["ClusterId"].isNull())
			clusterTagListObject.clusterId = valueClusterTagListClusterTag["ClusterId"].asString();
		auto allTagInfoListNode = allClusterTagListNode["TagInfoList"]["TagInfo"];
		for (auto allClusterTagListNodeTagInfoListTagInfo : allTagInfoListNode)
		{
			ClusterTag::TagInfo tagInfoListObject;
			if(!allClusterTagListNodeTagInfoListTagInfo["TagType"].isNull())
				tagInfoListObject.tagType = allClusterTagListNodeTagInfoListTagInfo["TagType"].asString();
			if(!allClusterTagListNodeTagInfoListTagInfo["TagValue"].isNull())
				tagInfoListObject.tagValue = allClusterTagListNodeTagInfoListTagInfo["TagValue"].asString();
			if(!allClusterTagListNodeTagInfoListTagInfo["TagKey"].isNull())
				tagInfoListObject.tagKey = allClusterTagListNodeTagInfoListTagInfo["TagKey"].asString();
			clusterTagListObject.tagInfoList.push_back(tagInfoListObject);
		}
		clusterTagList_.push_back(clusterTagListObject);
	}

}

std::vector<ListClusterTagForAdminResult::ClusterTag> ListClusterTagForAdminResult::getClusterTagList()const
{
	return clusterTagList_;
}

