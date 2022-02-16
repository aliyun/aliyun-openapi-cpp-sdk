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

#include <alibabacloud/emr/model/ListApplicationConfigFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListApplicationConfigFilesResult::ListApplicationConfigFilesResult() :
	ServiceResult()
{}

ListApplicationConfigFilesResult::ListApplicationConfigFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationConfigFilesResult::~ListApplicationConfigFilesResult()
{}

void ListApplicationConfigFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationConfigFilesNode = value["ApplicationConfigFiles"]["ApplicationConfigFile"];
	for (auto valueApplicationConfigFilesApplicationConfigFile : allApplicationConfigFilesNode)
	{
		ApplicationConfigFile applicationConfigFilesObject;
		if(!valueApplicationConfigFilesApplicationConfigFile["Name"].isNull())
			applicationConfigFilesObject.name = valueApplicationConfigFilesApplicationConfigFile["Name"].asString();
		if(!valueApplicationConfigFilesApplicationConfigFile["Path"].isNull())
			applicationConfigFilesObject.path = valueApplicationConfigFilesApplicationConfigFile["Path"].asString();
		if(!valueApplicationConfigFilesApplicationConfigFile["Type"].isNull())
			applicationConfigFilesObject.type = valueApplicationConfigFilesApplicationConfigFile["Type"].asString();
		if(!valueApplicationConfigFilesApplicationConfigFile["User"].isNull())
			applicationConfigFilesObject.user = valueApplicationConfigFilesApplicationConfigFile["User"].asString();
		if(!valueApplicationConfigFilesApplicationConfigFile["Group"].isNull())
			applicationConfigFilesObject.group = valueApplicationConfigFilesApplicationConfigFile["Group"].asString();
		if(!valueApplicationConfigFilesApplicationConfigFile["Description"].isNull())
			applicationConfigFilesObject.description = valueApplicationConfigFilesApplicationConfigFile["Description"].asString();
		if(!valueApplicationConfigFilesApplicationConfigFile["AllowCustomConfig"].isNull())
			applicationConfigFilesObject.allowCustomConfig = valueApplicationConfigFilesApplicationConfigFile["AllowCustomConfig"].asString() == "true";
		applicationConfigFiles_.push_back(applicationConfigFilesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListApplicationConfigFilesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListApplicationConfigFilesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListApplicationConfigFilesResult::ApplicationConfigFile> ListApplicationConfigFilesResult::getApplicationConfigFiles()const
{
	return applicationConfigFiles_;
}

int ListApplicationConfigFilesResult::getMaxResults()const
{
	return maxResults_;
}

