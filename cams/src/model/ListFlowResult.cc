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

#include <alibabacloud/cams/model/ListFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

ListFlowResult::ListFlowResult() :
	ServiceResult()
{}

ListFlowResult::ListFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowResult::~ListFlowResult()
{}

void ListFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Status"].isNull())
			dataObject.status = valueDatadataItem["Status"].asString();
		if(!valueDatadataItem["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDatadataItem["GmtCreate"].asString();
		if(!valueDatadataItem["GmtModified"].isNull())
			dataObject.gmtModified = valueDatadataItem["GmtModified"].asString();
		if(!valueDatadataItem["Title"].isNull())
			dataObject.title = valueDatadataItem["Title"].asString();
		if(!valueDatadataItem["PartnerId"].isNull())
			dataObject.partnerId = valueDatadataItem["PartnerId"].asString();
		if(!valueDatadataItem["Id"].isNull())
			dataObject.id = valueDatadataItem["Id"].asString();
		if(!valueDatadataItem["Code"].isNull())
			dataObject.code = valueDatadataItem["Code"].asString();
		if(!valueDatadataItem["BizCode"].isNull())
			dataObject.bizCode = valueDatadataItem["BizCode"].asString();
		if(!valueDatadataItem["Remark"].isNull())
			dataObject.remark = valueDatadataItem["Remark"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Response"].isNull())
		response_ = value["Response"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListFlowResult::getResponse()const
{
	return response_;
}

std::string ListFlowResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string ListFlowResult::getMessage()const
{
	return message_;
}

std::vector<ListFlowResult::DataItem> ListFlowResult::getData()const
{
	return data_;
}

std::string ListFlowResult::getCode()const
{
	return code_;
}

bool ListFlowResult::getSuccess()const
{
	return success_;
}

