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

#include <alibabacloud/dypnsapi/model/QuerySendDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

QuerySendDetailsResult::QuerySendDetailsResult() :
	ServiceResult()
{}

QuerySendDetailsResult::QuerySendDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySendDetailsResult::~QuerySendDetailsResult()
{}

void QuerySendDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModelNode = value["Model"]["modelItem"];
	for (auto valueModelmodelItem : allModelNode)
	{
		ModelItem modelObject;
		if(!valueModelmodelItem["TemplateCode"].isNull())
			modelObject.templateCode = valueModelmodelItem["TemplateCode"].asString();
		if(!valueModelmodelItem["ReceiveDate"].isNull())
			modelObject.receiveDate = valueModelmodelItem["ReceiveDate"].asString();
		if(!valueModelmodelItem["PhoneNum"].isNull())
			modelObject.phoneNum = valueModelmodelItem["PhoneNum"].asString();
		if(!valueModelmodelItem["Content"].isNull())
			modelObject.content = valueModelmodelItem["Content"].asString();
		if(!valueModelmodelItem["SendStatus"].isNull())
			modelObject.sendStatus = std::stol(valueModelmodelItem["SendStatus"].asString());
		if(!valueModelmodelItem["OutId"].isNull())
			modelObject.outId = valueModelmodelItem["OutId"].asString();
		if(!valueModelmodelItem["SendDate"].isNull())
			modelObject.sendDate = valueModelmodelItem["SendDate"].asString();
		if(!valueModelmodelItem["ErrCode"].isNull())
			modelObject.errCode = valueModelmodelItem["ErrCode"].asString();
		model_.push_back(modelObject);
	}
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QuerySendDetailsResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

long QuerySendDetailsResult::getTotalCount()const
{
	return totalCount_;
}

std::string QuerySendDetailsResult::getMessage()const
{
	return message_;
}

std::vector<QuerySendDetailsResult::ModelItem> QuerySendDetailsResult::getModel()const
{
	return model_;
}

std::string QuerySendDetailsResult::getCode()const
{
	return code_;
}

bool QuerySendDetailsResult::getSuccess()const
{
	return success_;
}

