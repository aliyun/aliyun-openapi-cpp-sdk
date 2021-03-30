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

#include <alibabacloud/airec/model/ListInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListInstanceResult::ListInstanceResult() :
	ServiceResult()
{}

ListInstanceResult::ListInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceResult::~ListInstanceResult()
{}

void ListInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["chargeType"].isNull())
			resultObject.chargeType = valueresultResultItem["chargeType"].asString();
		if(!valueresultResultItem["commodityCode"].isNull())
			resultObject.commodityCode = valueresultResultItem["commodityCode"].asString();
		if(!valueresultResultItem["dataSetVersion"].isNull())
			resultObject.dataSetVersion = valueresultResultItem["dataSetVersion"].asString();
		if(!valueresultResultItem["expiredTime"].isNull())
			resultObject.expiredTime = valueresultResultItem["expiredTime"].asString();
		if(!valueresultResultItem["gmtCreate"].isNull())
			resultObject.gmtCreate = valueresultResultItem["gmtCreate"].asString();
		if(!valueresultResultItem["gmtModified"].isNull())
			resultObject.gmtModified = valueresultResultItem["gmtModified"].asString();
		if(!valueresultResultItem["industry"].isNull())
			resultObject.industry = valueresultResultItem["industry"].asString();
		if(!valueresultResultItem["instanceId"].isNull())
			resultObject.instanceId = valueresultResultItem["instanceId"].asString();
		if(!valueresultResultItem["lockMode"].isNull())
			resultObject.lockMode = valueresultResultItem["lockMode"].asString();
		if(!valueresultResultItem["name"].isNull())
			resultObject.name = valueresultResultItem["name"].asString();
		if(!valueresultResultItem["regionId"].isNull())
			resultObject.regionId = valueresultResultItem["regionId"].asString();
		if(!valueresultResultItem["status"].isNull())
			resultObject.status = valueresultResultItem["status"].asString();
		if(!valueresultResultItem["type"].isNull())
			resultObject.type = valueresultResultItem["type"].asString();
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListInstanceResult::ResultItem> ListInstanceResult::getresult()const
{
	return result_;
}

std::string ListInstanceResult::getMessage()const
{
	return message_;
}

std::string ListInstanceResult::getRequestId()const
{
	return requestId_;
}

std::string ListInstanceResult::getCode()const
{
	return code_;
}

