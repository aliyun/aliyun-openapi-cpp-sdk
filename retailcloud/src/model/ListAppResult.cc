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

#include <alibabacloud/retailcloud/model/ListAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAppResult::ListAppResult() :
	ServiceResult()
{}

ListAppResult::ListAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppResult::~ListAppResult()
{}

void ListAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AppDetail"];
	for (auto valueDataAppDetail : allDataNode)
	{
		AppDetail dataObject;
		if(!valueDataAppDetail["AppId"].isNull())
			dataObject.appId = std::stol(valueDataAppDetail["AppId"].asString());
		if(!valueDataAppDetail["Title"].isNull())
			dataObject.title = valueDataAppDetail["Title"].asString();
		if(!valueDataAppDetail["Description"].isNull())
			dataObject.description = valueDataAppDetail["Description"].asString();
		if(!valueDataAppDetail["Language"].isNull())
			dataObject.language = valueDataAppDetail["Language"].asString();
		if(!valueDataAppDetail["OperatingSystem"].isNull())
			dataObject.operatingSystem = valueDataAppDetail["OperatingSystem"].asString();
		if(!valueDataAppDetail["BizName"].isNull())
			dataObject.bizName = valueDataAppDetail["BizName"].asString();
		if(!valueDataAppDetail["ServiceType"].isNull())
			dataObject.serviceType = valueDataAppDetail["ServiceType"].asString();
		if(!valueDataAppDetail["DeployType"].isNull())
			dataObject.deployType = valueDataAppDetail["DeployType"].asString();
		if(!valueDataAppDetail["BizTitle"].isNull())
			dataObject.bizTitle = valueDataAppDetail["BizTitle"].asString();
		if(!valueDataAppDetail["AppStateType"].isNull())
			dataObject.appStateType = valueDataAppDetail["AppStateType"].asString();
		auto allMiddleWareListNode = valueDataAppDetail["MiddleWareList"]["MiddleWareInfo"];
		for (auto valueDataAppDetailMiddleWareListMiddleWareInfo : allMiddleWareListNode)
		{
			AppDetail::MiddleWareInfo middleWareListObject;
			if(!valueDataAppDetailMiddleWareListMiddleWareInfo["AppId"].isNull())
				middleWareListObject.appId = std::stol(valueDataAppDetailMiddleWareListMiddleWareInfo["AppId"].asString());
			if(!valueDataAppDetailMiddleWareListMiddleWareInfo["Code"].isNull())
				middleWareListObject.code = std::stoi(valueDataAppDetailMiddleWareListMiddleWareInfo["Code"].asString());
			if(!valueDataAppDetailMiddleWareListMiddleWareInfo["Name"].isNull())
				middleWareListObject.name = valueDataAppDetailMiddleWareListMiddleWareInfo["Name"].asString();
			dataObject.middleWareList.push_back(middleWareListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListAppResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAppResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListAppResult::AppDetail> ListAppResult::getData()const
{
	return data_;
}

int ListAppResult::getCode()const
{
	return code_;
}

