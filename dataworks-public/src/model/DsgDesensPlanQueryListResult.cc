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

#include <alibabacloud/dataworks-public/model/DsgDesensPlanQueryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

DsgDesensPlanQueryListResult::DsgDesensPlanQueryListResult() :
	ServiceResult()
{}

DsgDesensPlanQueryListResult::DsgDesensPlanQueryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DsgDesensPlanQueryListResult::~DsgDesensPlanQueryListResult()
{}

void DsgDesensPlanQueryListResult::parse(const std::string &payload)
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
		if(!pageDataNodeDataDatas["DataType"].isNull())
			datasObject.dataType = pageDataNodeDataDatas["DataType"].asString();
		if(!pageDataNodeDataDatas["RuleName"].isNull())
			datasObject.ruleName = pageDataNodeDataDatas["RuleName"].asString();
		if(!pageDataNodeDataDatas["Owner"].isNull())
			datasObject.owner = pageDataNodeDataDatas["Owner"].asString();
		if(!pageDataNodeDataDatas["GmtCreate"].isNull())
			datasObject.gmtCreate = pageDataNodeDataDatas["GmtCreate"].asString();
		if(!pageDataNodeDataDatas["GmtModified"].isNull())
			datasObject.gmtModified = pageDataNodeDataDatas["GmtModified"].asString();
		if(!pageDataNodeDataDatas["Status"].isNull())
			datasObject.status = std::stoi(pageDataNodeDataDatas["Status"].asString());
		if(!pageDataNodeDataDatas["DesensWay"].isNull())
			datasObject.desensWay = pageDataNodeDataDatas["DesensWay"].asString();
		if(!pageDataNodeDataDatas["DesenMode"].isNull())
			datasObject.desenMode = pageDataNodeDataDatas["DesenMode"].asString();
		if(!pageDataNodeDataDatas["DesensRule"].isNull())
			datasObject.desensRule = pageDataNodeDataDatas["DesensRule"].asString();
		if(!pageDataNodeDataDatas["SceneCode"].isNull())
			datasObject.sceneCode = pageDataNodeDataDatas["SceneCode"].asString();
		if(!pageDataNodeDataDatas["CheckWatermark"].isNull())
			datasObject.checkWatermark = pageDataNodeDataDatas["CheckWatermark"].asString() == "true";
		if(!pageDataNodeDataDatas["SceneName"].isNull())
			datasObject.sceneName = pageDataNodeDataDatas["SceneName"].asString();
		auto desensPlanNode = value["DesensPlan"];
		if(!desensPlanNode["DesensPlanType"].isNull())
			datasObject.desensPlan.desensPlanType = desensPlanNode["DesensPlanType"].asString();
		if(!desensPlanNode["ExtParam"].isNull())
			datasObject.desensPlan.extParam = desensPlanNode["ExtParam"].asString();
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

DsgDesensPlanQueryListResult::PageData DsgDesensPlanQueryListResult::getPageData()const
{
	return pageData_;
}

int DsgDesensPlanQueryListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DsgDesensPlanQueryListResult::getErrorCode()const
{
	return errorCode_;
}

std::string DsgDesensPlanQueryListResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DsgDesensPlanQueryListResult::getSuccess()const
{
	return success_;
}

