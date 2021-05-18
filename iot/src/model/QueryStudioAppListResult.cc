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

#include <alibabacloud/iot/model/QueryStudioAppListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryStudioAppListResult::QueryStudioAppListResult() :
	ServiceResult()
{}

QueryStudioAppListResult::QueryStudioAppListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStudioAppListResult::~QueryStudioAppListResult()
{}

void QueryStudioAppListResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["AppInfo"];
	for (auto dataNodeListAppInfo : allListNode)
	{
		Data::AppInfo appInfoObject;
		if(!dataNodeListAppInfo["Name"].isNull())
			appInfoObject.name = dataNodeListAppInfo["Name"].asString();
		if(!dataNodeListAppInfo["AppId"].isNull())
			appInfoObject.appId = dataNodeListAppInfo["AppId"].asString();
		if(!dataNodeListAppInfo["AppKey"].isNull())
			appInfoObject.appKey = dataNodeListAppInfo["AppKey"].asString();
		if(!dataNodeListAppInfo["AppSecret"].isNull())
			appInfoObject.appSecret = dataNodeListAppInfo["AppSecret"].asString();
		if(!dataNodeListAppInfo["ProjectId"].isNull())
			appInfoObject.projectId = dataNodeListAppInfo["ProjectId"].asString();
		if(!dataNodeListAppInfo["Type"].isNull())
			appInfoObject.type = dataNodeListAppInfo["Type"].asString();
		if(!dataNodeListAppInfo["Description"].isNull())
			appInfoObject.description = dataNodeListAppInfo["Description"].asString();
		if(!dataNodeListAppInfo["GmtCreate"].isNull())
			appInfoObject.gmtCreate = dataNodeListAppInfo["GmtCreate"].asString();
		if(!dataNodeListAppInfo["GmtModified"].isNull())
			appInfoObject.gmtModified = dataNodeListAppInfo["GmtModified"].asString();
		if(!dataNodeListAppInfo["GmtRelease"].isNull())
			appInfoObject.gmtRelease = dataNodeListAppInfo["GmtRelease"].asString();
		data_.list.push_back(appInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryStudioAppListResult::Data QueryStudioAppListResult::getData()const
{
	return data_;
}

std::string QueryStudioAppListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryStudioAppListResult::getCode()const
{
	return code_;
}

bool QueryStudioAppListResult::getSuccess()const
{
	return success_;
}

