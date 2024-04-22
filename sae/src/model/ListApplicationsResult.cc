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

#include <alibabacloud/sae/model/ListApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListApplicationsResult::ListApplicationsResult() :
	ServiceResult()
{}

ListApplicationsResult::ListApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsResult::~ListApplicationsResult()
{}

void ListApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allApplicationsNode = dataNode["Applications"]["Application"];
	for (auto dataNodeApplicationsApplication : allApplicationsNode)
	{
		Data::Application applicationObject;
		if(!dataNodeApplicationsApplication["AppName"].isNull())
			applicationObject.appName = dataNodeApplicationsApplication["AppName"].asString();
		if(!dataNodeApplicationsApplication["NamespaceId"].isNull())
			applicationObject.namespaceId = dataNodeApplicationsApplication["NamespaceId"].asString();
		if(!dataNodeApplicationsApplication["AppDeletingStatus"].isNull())
			applicationObject.appDeletingStatus = dataNodeApplicationsApplication["AppDeletingStatus"].asString() == "true";
		if(!dataNodeApplicationsApplication["AppId"].isNull())
			applicationObject.appId = dataNodeApplicationsApplication["AppId"].asString();
		if(!dataNodeApplicationsApplication["ScaleRuleEnabled"].isNull())
			applicationObject.scaleRuleEnabled = dataNodeApplicationsApplication["ScaleRuleEnabled"].asString() == "true";
		if(!dataNodeApplicationsApplication["ScaleRuleType"].isNull())
			applicationObject.scaleRuleType = dataNodeApplicationsApplication["ScaleRuleType"].asString();
		if(!dataNodeApplicationsApplication["RunningInstances"].isNull())
			applicationObject.runningInstances = std::stoi(dataNodeApplicationsApplication["RunningInstances"].asString());
		if(!dataNodeApplicationsApplication["Instances"].isNull())
			applicationObject.instances = std::stoi(dataNodeApplicationsApplication["Instances"].asString());
		if(!dataNodeApplicationsApplication["RegionId"].isNull())
			applicationObject.regionId = dataNodeApplicationsApplication["RegionId"].asString();
		if(!dataNodeApplicationsApplication["AppDescription"].isNull())
			applicationObject.appDescription = dataNodeApplicationsApplication["AppDescription"].asString();
		if(!dataNodeApplicationsApplication["Cpu"].isNull())
			applicationObject.cpu = std::stoi(dataNodeApplicationsApplication["Cpu"].asString());
		if(!dataNodeApplicationsApplication["Mem"].isNull())
			applicationObject.mem = std::stoi(dataNodeApplicationsApplication["Mem"].asString());
		auto allTagsNode = dataNodeApplicationsApplication["Tags"]["TagsItem"];
		for (auto dataNodeApplicationsApplicationTagsTagsItem : allTagsNode)
		{
			Data::Application::TagsItem tagsObject;
			if(!dataNodeApplicationsApplicationTagsTagsItem["Key"].isNull())
				tagsObject.key = dataNodeApplicationsApplicationTagsTagsItem["Key"].asString();
			if(!dataNodeApplicationsApplicationTagsTagsItem["Value"].isNull())
				tagsObject.value = dataNodeApplicationsApplicationTagsTagsItem["Value"].asString();
			applicationObject.tags.push_back(tagsObject);
		}
		data_.applications.push_back(applicationObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::string ListApplicationsResult::getMessage()const
{
	return message_;
}

int ListApplicationsResult::getPageSize()const
{
	return pageSize_;
}

int ListApplicationsResult::getCurrentPage()const
{
	return currentPage_;
}

ListApplicationsResult::Data ListApplicationsResult::getData()const
{
	return data_;
}

std::string ListApplicationsResult::getErrorCode()const
{
	return errorCode_;
}

int ListApplicationsResult::getTotalSize()const
{
	return totalSize_;
}

std::string ListApplicationsResult::getCode()const
{
	return code_;
}

bool ListApplicationsResult::getSuccess()const
{
	return success_;
}

