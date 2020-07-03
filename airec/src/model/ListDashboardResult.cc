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

#include <alibabacloud/airec/model/ListDashboardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDashboardResult::ListDashboardResult() :
	ServiceResult()
{}

ListDashboardResult::ListDashboardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDashboardResult::~ListDashboardResult()
{}

void ListDashboardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Num"].isNull())
		result_.num = std::stoi(resultNode["Num"].asString());
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["BizDate"].isNull())
			listItemObject.bizDate = std::stol(resultNodeListListItem["BizDate"].asString());
		if(!resultNodeListListItem["Pv"].isNull())
			listItemObject.pv = std::stol(resultNodeListListItem["Pv"].asString());
		if(!resultNodeListListItem["Uv"].isNull())
			listItemObject.uv = std::stol(resultNodeListListItem["Uv"].asString());
		if(!resultNodeListListItem["Click"].isNull())
			listItemObject.click = std::stol(resultNodeListListItem["Click"].asString());
		if(!resultNodeListListItem["Ctr"].isNull())
			listItemObject.ctr = std::stof(resultNodeListListItem["Ctr"].asString());
		if(!resultNodeListListItem["UvCtr"].isNull())
			listItemObject.uvCtr = std::stof(resultNodeListListItem["UvCtr"].asString());
		if(!resultNodeListListItem["PerUvBhv"].isNull())
			listItemObject.perUvBhv = std::stof(resultNodeListListItem["PerUvBhv"].asString());
		if(!resultNodeListListItem["PerUvClick"].isNull())
			listItemObject.perUvClick = std::stof(resultNodeListListItem["PerUvClick"].asString());
		if(!resultNodeListListItem["ClickUser"].isNull())
			listItemObject.clickUser = std::stol(resultNodeListListItem["ClickUser"].asString());
		if(!resultNodeListListItem["ActiveItem"].isNull())
			listItemObject.activeItem = std::stol(resultNodeListListItem["ActiveItem"].asString());
		if(!resultNodeListListItem["TraceId"].isNull())
			listItemObject.traceId = resultNodeListListItem["TraceId"].asString();
		if(!resultNodeListListItem["SceneId"].isNull())
			listItemObject.sceneId = resultNodeListListItem["SceneId"].asString();
		result_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDashboardResult::getMessage()const
{
	return message_;
}

std::string ListDashboardResult::getCode()const
{
	return code_;
}

ListDashboardResult::Result ListDashboardResult::getResult()const
{
	return result_;
}

