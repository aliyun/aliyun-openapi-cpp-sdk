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

#include <alibabacloud/cloudauth/model/PageQueryWhiteListSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

PageQueryWhiteListSettingResult::PageQueryWhiteListSettingResult() :
	ServiceResult()
{}

PageQueryWhiteListSettingResult::PageQueryWhiteListSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageQueryWhiteListSettingResult::~PageQueryWhiteListSettingResult()
{}

void PageQueryWhiteListSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultObjectNode = value["ResultObject"]["resultObjectItem"];
	for (auto valueResultObjectresultObjectItem : allResultObjectNode)
	{
		ResultObjectItem resultObjectObject;
		if(!valueResultObjectresultObjectItem["Id"].isNull())
			resultObjectObject.id = std::stol(valueResultObjectresultObjectItem["Id"].asString());
		if(!valueResultObjectresultObjectItem["GmtCreate"].isNull())
			resultObjectObject.gmtCreate = valueResultObjectresultObjectItem["GmtCreate"].asString();
		if(!valueResultObjectresultObjectItem["GmtModified"].isNull())
			resultObjectObject.gmtModified = valueResultObjectresultObjectItem["GmtModified"].asString();
		if(!valueResultObjectresultObjectItem["ServiceCode"].isNull())
			resultObjectObject.serviceCode = valueResultObjectresultObjectItem["ServiceCode"].asString();
		if(!valueResultObjectresultObjectItem["CertifyId"].isNull())
			resultObjectObject.certifyId = valueResultObjectresultObjectItem["CertifyId"].asString();
		if(!valueResultObjectresultObjectItem["CertNo"].isNull())
			resultObjectObject.certNo = valueResultObjectresultObjectItem["CertNo"].asString();
		if(!valueResultObjectresultObjectItem["SceneId"].isNull())
			resultObjectObject.sceneId = std::stol(valueResultObjectresultObjectItem["SceneId"].asString());
		if(!valueResultObjectresultObjectItem["ValidStartDate"].isNull())
			resultObjectObject.validStartDate = valueResultObjectresultObjectItem["ValidStartDate"].asString();
		if(!valueResultObjectresultObjectItem["ValidEndDate"].isNull())
			resultObjectObject.validEndDate = valueResultObjectresultObjectItem["ValidEndDate"].asString();
		if(!valueResultObjectresultObjectItem["Status"].isNull())
			resultObjectObject.status = valueResultObjectresultObjectItem["Status"].asString();
		if(!valueResultObjectresultObjectItem["Remark"].isNull())
			resultObjectObject.remark = valueResultObjectresultObjectItem["Remark"].asString();
		resultObject_.push_back(resultObjectObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalItem"].isNull())
		totalItem_ = std::stoi(value["TotalItem"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<PageQueryWhiteListSettingResult::ResultObjectItem> PageQueryWhiteListSettingResult::getResultObject()const
{
	return resultObject_;
}

int PageQueryWhiteListSettingResult::getTotalItem()const
{
	return totalItem_;
}

std::string PageQueryWhiteListSettingResult::getMessage()const
{
	return message_;
}

int PageQueryWhiteListSettingResult::getTotalPage()const
{
	return totalPage_;
}

int PageQueryWhiteListSettingResult::getPageSize()const
{
	return pageSize_;
}

int PageQueryWhiteListSettingResult::getCurrentPage()const
{
	return currentPage_;
}

std::string PageQueryWhiteListSettingResult::getCode()const
{
	return code_;
}

bool PageQueryWhiteListSettingResult::getSuccess()const
{
	return success_;
}

