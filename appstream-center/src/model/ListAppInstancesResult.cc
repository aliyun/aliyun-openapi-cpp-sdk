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

#include <alibabacloud/appstream-center/model/ListAppInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

ListAppInstancesResult::ListAppInstancesResult() :
	ServiceResult()
{}

ListAppInstancesResult::ListAppInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppInstancesResult::~ListAppInstancesResult()
{}

void ListAppInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppInstanceModelsNode = value["AppInstanceModels"]["data"];
	for (auto valueAppInstanceModelsdata : allAppInstanceModelsNode)
	{
		Data appInstanceModelsObject;
		if(!valueAppInstanceModelsdata["AppInstanceId"].isNull())
			appInstanceModelsObject.appInstanceId = valueAppInstanceModelsdata["AppInstanceId"].asString();
		if(!valueAppInstanceModelsdata["AppInstanceGroupId"].isNull())
			appInstanceModelsObject.appInstanceGroupId = valueAppInstanceModelsdata["AppInstanceGroupId"].asString();
		if(!valueAppInstanceModelsdata["Status"].isNull())
			appInstanceModelsObject.status = valueAppInstanceModelsdata["Status"].asString();
		if(!valueAppInstanceModelsdata["MainEthPublicIp"].isNull())
			appInstanceModelsObject.mainEthPublicIp = valueAppInstanceModelsdata["MainEthPublicIp"].asString();
		if(!valueAppInstanceModelsdata["GmtCreate"].isNull())
			appInstanceModelsObject.gmtCreate = valueAppInstanceModelsdata["GmtCreate"].asString();
		if(!valueAppInstanceModelsdata["GmtModified"].isNull())
			appInstanceModelsObject.gmtModified = valueAppInstanceModelsdata["GmtModified"].asString();
		if(!valueAppInstanceModelsdata["SessionStatus"].isNull())
			appInstanceModelsObject.sessionStatus = valueAppInstanceModelsdata["SessionStatus"].asString();
		appInstanceModels_.push_back(appInstanceModelsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListAppInstancesResult::Data> ListAppInstancesResult::getAppInstanceModels()const
{
	return appInstanceModels_;
}

int ListAppInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListAppInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

