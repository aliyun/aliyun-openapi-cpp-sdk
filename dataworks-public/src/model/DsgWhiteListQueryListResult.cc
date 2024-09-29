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

#include <alibabacloud/dataworks-public/model/DsgWhiteListQueryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

DsgWhiteListQueryListResult::DsgWhiteListQueryListResult() :
	ServiceResult()
{}

DsgWhiteListQueryListResult::DsgWhiteListQueryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DsgWhiteListQueryListResult::~DsgWhiteListQueryListResult()
{}

void DsgWhiteListQueryListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageDataNode = value["PageData"];
	if(!pageDataNode["PageNumber"].isNull())
		pageData_.pageNumber = std::stoi(pageDataNode["PageNumber"].asString());
	if(!pageDataNode["PageSize"].isNull())
		pageData_.pageSize = std::stoi(pageDataNode["PageSize"].asString());
	if(!pageDataNode["TotalCount"].isNull())
		pageData_.totalCount = std::stoi(pageDataNode["TotalCount"].asString());
	auto allDataNode = pageDataNode["Data"]["Datas"];
	for (auto pageDataNodeDataDatas : allDataNode)
	{
		PageData::Datas datasObject;
		if(!pageDataNodeDataDatas["Id"].isNull())
			datasObject.id = std::stol(pageDataNodeDataDatas["Id"].asString());
		if(!pageDataNodeDataDatas["Type"].isNull())
			datasObject.type = pageDataNodeDataDatas["Type"].asString();
		if(!pageDataNodeDataDatas["GmtCreate"].isNull())
			datasObject.gmtCreate = pageDataNodeDataDatas["GmtCreate"].asString();
		if(!pageDataNodeDataDatas["GmtModified"].isNull())
			datasObject.gmtModified = pageDataNodeDataDatas["GmtModified"].asString();
		if(!pageDataNodeDataDatas["RuleId"].isNull())
			datasObject.ruleId = std::stol(pageDataNodeDataDatas["RuleId"].asString());
		if(!pageDataNodeDataDatas["SceneId"].isNull())
			datasObject.sceneId = std::stol(pageDataNodeDataDatas["SceneId"].asString());
		if(!pageDataNodeDataDatas["StartTime"].isNull())
			datasObject.startTime = pageDataNodeDataDatas["StartTime"].asString();
		if(!pageDataNodeDataDatas["EndTime"].isNull())
			datasObject.endTime = pageDataNodeDataDatas["EndTime"].asString();
		auto allUserGroups = value["UserGroups"]["UserGroup"];
		for (auto value : allUserGroups)
			datasObject.userGroups.push_back(value.asString());
		pageData_.data.push_back(datasObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

DsgWhiteListQueryListResult::PageData DsgWhiteListQueryListResult::getPageData()const
{
	return pageData_;
}

int DsgWhiteListQueryListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DsgWhiteListQueryListResult::getErrorCode()const
{
	return errorCode_;
}

std::string DsgWhiteListQueryListResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DsgWhiteListQueryListResult::getSuccess()const
{
	return success_;
}

