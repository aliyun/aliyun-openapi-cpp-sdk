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

#include <alibabacloud/iot/model/QueryStudioAppPageListOpenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryStudioAppPageListOpenResult::QueryStudioAppPageListOpenResult() :
	ServiceResult()
{}

QueryStudioAppPageListOpenResult::QueryStudioAppPageListOpenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStudioAppPageListOpenResult::~QueryStudioAppPageListOpenResult()
{}

void QueryStudioAppPageListOpenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allListNode = dataNode["List"]["PageInfo"];
	for (auto dataNodeListPageInfo : allListNode)
	{
		Data::PageInfo pageInfoObject;
		if(!dataNodeListPageInfo["Id"].isNull())
			pageInfoObject.id = std::stoi(dataNodeListPageInfo["Id"].asString());
		if(!dataNodeListPageInfo["PageId"].isNull())
			pageInfoObject.pageId = dataNodeListPageInfo["PageId"].asString();
		if(!dataNodeListPageInfo["Path"].isNull())
			pageInfoObject.path = dataNodeListPageInfo["Path"].asString();
		if(!dataNodeListPageInfo["IsHidden"].isNull())
			pageInfoObject.isHidden = std::stoi(dataNodeListPageInfo["IsHidden"].asString());
		if(!dataNodeListPageInfo["IsHome"].isNull())
			pageInfoObject.isHome = std::stoi(dataNodeListPageInfo["IsHome"].asString());
		if(!dataNodeListPageInfo["IsLoginPage"].isNull())
			pageInfoObject.isLoginPage = std::stoi(dataNodeListPageInfo["IsLoginPage"].asString());
		if(!dataNodeListPageInfo["Name"].isNull())
			pageInfoObject.name = dataNodeListPageInfo["Name"].asString();
		if(!dataNodeListPageInfo["GmtCreate"].isNull())
			pageInfoObject.gmtCreate = dataNodeListPageInfo["GmtCreate"].asString();
		if(!dataNodeListPageInfo["GmtModified"].isNull())
			pageInfoObject.gmtModified = dataNodeListPageInfo["GmtModified"].asString();
		data_.list.push_back(pageInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryStudioAppPageListOpenResult::Data QueryStudioAppPageListOpenResult::getData()const
{
	return data_;
}

std::string QueryStudioAppPageListOpenResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryStudioAppPageListOpenResult::getCode()const
{
	return code_;
}

bool QueryStudioAppPageListOpenResult::getSuccess()const
{
	return success_;
}

