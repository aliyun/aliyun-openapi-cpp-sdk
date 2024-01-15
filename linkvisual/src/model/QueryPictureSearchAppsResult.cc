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

#include <alibabacloud/linkvisual/model/QueryPictureSearchAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryPictureSearchAppsResult::QueryPictureSearchAppsResult() :
	ServiceResult()
{}

QueryPictureSearchAppsResult::QueryPictureSearchAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPictureSearchAppsResult::~QueryPictureSearchAppsResult()
{}

void QueryPictureSearchAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageCount"].isNull())
		data_.pageCount = std::stoi(dataNode["PageCount"].asString());
	auto allPageDataNode = dataNode["PageData"]["pageDataItem"];
	for (auto dataNodePageDatapageDataItem : allPageDataNode)
	{
		Data::PageDataItem pageDataItemObject;
		if(!dataNodePageDatapageDataItem["AppInstanceId"].isNull())
			pageDataItemObject.appInstanceId = dataNodePageDatapageDataItem["AppInstanceId"].asString();
		if(!dataNodePageDatapageDataItem["ModifiedTime"].isNull())
			pageDataItemObject.modifiedTime = std::stol(dataNodePageDatapageDataItem["ModifiedTime"].asString());
		if(!dataNodePageDatapageDataItem["Description"].isNull())
			pageDataItemObject.description = dataNodePageDatapageDataItem["Description"].asString();
		if(!dataNodePageDatapageDataItem["Version"].isNull())
			pageDataItemObject.version = dataNodePageDatapageDataItem["Version"].asString();
		if(!dataNodePageDatapageDataItem["CreateTime"].isNull())
			pageDataItemObject.createTime = std::stol(dataNodePageDatapageDataItem["CreateTime"].asString());
		if(!dataNodePageDatapageDataItem["AppTemplateId"].isNull())
			pageDataItemObject.appTemplateId = dataNodePageDatapageDataItem["AppTemplateId"].asString();
		if(!dataNodePageDatapageDataItem["Name"].isNull())
			pageDataItemObject.name = dataNodePageDatapageDataItem["Name"].asString();
		data_.pageData.push_back(pageDataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryPictureSearchAppsResult::Data QueryPictureSearchAppsResult::getData()const
{
	return data_;
}

std::string QueryPictureSearchAppsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryPictureSearchAppsResult::getCode()const
{
	return code_;
}

bool QueryPictureSearchAppsResult::getSuccess()const
{
	return success_;
}

