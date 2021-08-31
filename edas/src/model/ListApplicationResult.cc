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

#include <alibabacloud/edas/model/ListApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListApplicationResult::ListApplicationResult() :
	ServiceResult()
{}

ListApplicationResult::ListApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationResult::~ListApplicationResult()
{}

void ListApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationListNode = value["ApplicationList"]["Application"];
	for (auto valueApplicationListApplication : allApplicationListNode)
	{
		Application applicationListObject;
		if(!valueApplicationListApplication["AppId"].isNull())
			applicationListObject.appId = valueApplicationListApplication["AppId"].asString();
		if(!valueApplicationListApplication["Name"].isNull())
			applicationListObject.name = valueApplicationListApplication["Name"].asString();
		if(!valueApplicationListApplication["RegionId"].isNull())
			applicationListObject.regionId = valueApplicationListApplication["RegionId"].asString();
		if(!valueApplicationListApplication["ApplicationType"].isNull())
			applicationListObject.applicationType = valueApplicationListApplication["ApplicationType"].asString();
		if(!valueApplicationListApplication["ClusterType"].isNull())
			applicationListObject.clusterType = std::stoi(valueApplicationListApplication["ClusterType"].asString());
		if(!valueApplicationListApplication["ClusterId"].isNull())
			applicationListObject.clusterId = valueApplicationListApplication["ClusterId"].asString();
		if(!valueApplicationListApplication["BuildPackageId"].isNull())
			applicationListObject.buildPackageId = std::stol(valueApplicationListApplication["BuildPackageId"].asString());
		if(!valueApplicationListApplication["RunningInstanceCount"].isNull())
			applicationListObject.runningInstanceCount = std::stoi(valueApplicationListApplication["RunningInstanceCount"].asString());
		if(!valueApplicationListApplication["ResourceGroupId"].isNull())
			applicationListObject.resourceGroupId = valueApplicationListApplication["ResourceGroupId"].asString();
		applicationList_.push_back(applicationListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListApplicationResult::getMessage()const
{
	return message_;
}

std::vector<ListApplicationResult::Application> ListApplicationResult::getApplicationList()const
{
	return applicationList_;
}

int ListApplicationResult::getCode()const
{
	return code_;
}

