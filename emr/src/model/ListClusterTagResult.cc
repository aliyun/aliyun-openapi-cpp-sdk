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

#include <alibabacloud/emr/model/ListClusterTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterTagResult::ListClusterTagResult() :
	ServiceResult()
{}

ListClusterTagResult::ListClusterTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterTagResult::~ListClusterTagResult()
{}

void ListClusterTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allClusterTagList = value["ClusterTagList"]["ClusterTag"];
	for (auto value : allClusterTagList)
	{
		ClusterTag clusterTagListObject;
		if(!value["ClusterId"].isNull())
			clusterTagListObject.clusterId = value["ClusterId"].asString();
		auto allTagInfoList = value["TagInfoList"]["TagInfo"];
		for (auto value : allTagInfoList)
		{
			ClusterTag::TagInfo tagInfoListObject;
			if(!value["TagType"].isNull())
				tagInfoListObject.tagType = value["TagType"].asString();
			if(!value["TagValue"].isNull())
				tagInfoListObject.tagValue = value["TagValue"].asString();
			if(!value["TagKey"].isNull())
				tagInfoListObject.tagKey = value["TagKey"].asString();
			clusterTagListObject.tagInfoList.push_back(tagInfoListObject);
		}
		clusterTagList_.push_back(clusterTagListObject);
	}

}

std::vector<ListClusterTagResult::ClusterTag> ListClusterTagResult::getClusterTagList()const
{
	return clusterTagList_;
}

