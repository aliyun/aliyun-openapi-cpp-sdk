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

#include <alibabacloud/cloudapi/model/DescribePluginsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribePluginsResult::DescribePluginsResult() :
	ServiceResult()
{}

DescribePluginsResult::DescribePluginsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePluginsResult::~DescribePluginsResult()
{}

void DescribePluginsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPluginsNode = value["Plugins"]["PluginAttribute"];
	for (auto valuePluginsPluginAttribute : allPluginsNode)
	{
		PluginAttribute pluginsObject;
		if(!valuePluginsPluginAttribute["PluginId"].isNull())
			pluginsObject.pluginId = valuePluginsPluginAttribute["PluginId"].asString();
		if(!valuePluginsPluginAttribute["ModifiedTime"].isNull())
			pluginsObject.modifiedTime = valuePluginsPluginAttribute["ModifiedTime"].asString();
		if(!valuePluginsPluginAttribute["PluginData"].isNull())
			pluginsObject.pluginData = valuePluginsPluginAttribute["PluginData"].asString();
		if(!valuePluginsPluginAttribute["Description"].isNull())
			pluginsObject.description = valuePluginsPluginAttribute["Description"].asString();
		if(!valuePluginsPluginAttribute["PluginName"].isNull())
			pluginsObject.pluginName = valuePluginsPluginAttribute["PluginName"].asString();
		if(!valuePluginsPluginAttribute["CreatedTime"].isNull())
			pluginsObject.createdTime = valuePluginsPluginAttribute["CreatedTime"].asString();
		if(!valuePluginsPluginAttribute["PluginType"].isNull())
			pluginsObject.pluginType = valuePluginsPluginAttribute["PluginType"].asString();
		if(!valuePluginsPluginAttribute["RegionId"].isNull())
			pluginsObject.regionId = valuePluginsPluginAttribute["RegionId"].asString();
		auto allTagsNode = valuePluginsPluginAttribute["Tags"]["TagInfo"];
		for (auto valuePluginsPluginAttributeTagsTagInfo : allTagsNode)
		{
			PluginAttribute::TagInfo tagsObject;
			if(!valuePluginsPluginAttributeTagsTagInfo["Key"].isNull())
				tagsObject.key = valuePluginsPluginAttributeTagsTagInfo["Key"].asString();
			if(!valuePluginsPluginAttributeTagsTagInfo["Value"].isNull())
				tagsObject.value = valuePluginsPluginAttributeTagsTagInfo["Value"].asString();
			pluginsObject.tags.push_back(tagsObject);
		}
		plugins_.push_back(pluginsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribePluginsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePluginsResult::getPageSize()const
{
	return pageSize_;
}

int DescribePluginsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePluginsResult::PluginAttribute> DescribePluginsResult::getPlugins()const
{
	return plugins_;
}

