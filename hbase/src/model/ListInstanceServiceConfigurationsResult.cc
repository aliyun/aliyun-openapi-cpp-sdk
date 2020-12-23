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

#include <alibabacloud/hbase/model/ListInstanceServiceConfigurationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

ListInstanceServiceConfigurationsResult::ListInstanceServiceConfigurationsResult() :
	ServiceResult()
{}

ListInstanceServiceConfigurationsResult::ListInstanceServiceConfigurationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceServiceConfigurationsResult::~ListInstanceServiceConfigurationsResult()
{}

void ListInstanceServiceConfigurationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigureListNode = value["ConfigureList"]["Config"];
	for (auto valueConfigureListConfig : allConfigureListNode)
	{
		Config configureListObject;
		if(!valueConfigureListConfig["ConfigureName"].isNull())
			configureListObject.configureName = valueConfigureListConfig["ConfigureName"].asString();
		if(!valueConfigureListConfig["DefaultValue"].isNull())
			configureListObject.defaultValue = valueConfigureListConfig["DefaultValue"].asString();
		if(!valueConfigureListConfig["RunningValue"].isNull())
			configureListObject.runningValue = valueConfigureListConfig["RunningValue"].asString();
		if(!valueConfigureListConfig["ConfigureUnit"].isNull())
			configureListObject.configureUnit = valueConfigureListConfig["ConfigureUnit"].asString();
		if(!valueConfigureListConfig["ValueRange"].isNull())
			configureListObject.valueRange = valueConfigureListConfig["ValueRange"].asString();
		if(!valueConfigureListConfig["NeedRestart"].isNull())
			configureListObject.needRestart = valueConfigureListConfig["NeedRestart"].asString();
		if(!valueConfigureListConfig["Description"].isNull())
			configureListObject.description = valueConfigureListConfig["Description"].asString();
		configureList_.push_back(configureListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long ListInstanceServiceConfigurationsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int ListInstanceServiceConfigurationsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int ListInstanceServiceConfigurationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListInstanceServiceConfigurationsResult::Config> ListInstanceServiceConfigurationsResult::getConfigureList()const
{
	return configureList_;
}

