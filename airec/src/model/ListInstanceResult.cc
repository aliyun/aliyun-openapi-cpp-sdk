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
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["InstanceId"].isNull())
			resultObject.instanceId = valueResultResultItem["InstanceId"].asString();
		if(!valueResultResultItem["ChargeType"].isNull())
			resultObject.chargeType = valueResultResultItem["ChargeType"].asString();
		if(!valueResultResultItem["RegionId"].isNull())
			resultObject.regionId = valueResultResultItem["RegionId"].asString();
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["Type"].isNull())
			resultObject.type = valueResultResultItem["Type"].asString();
		if(!valueResultResultItem["ExpiredTime"].isNull())
			resultObject.expiredTime = valueResultResultItem["ExpiredTime"].asString();
		if(!valueResultResultItem["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultResultItem["GmtCreate"].asString();
		if(!valueResultResultItem["GmtModified"].isNull())
			resultObject.gmtModified = valueResultResultItem["GmtModified"].asString();
		if(!valueResultResultItem["Status"].isNull())
			resultObject.status = valueResultResultItem["Status"].asString();
		if(!valueResultResultItem["Industry"].isNull())
			resultObject.industry = valueResultResultItem["Industry"].asString();
		if(!valueResultResultItem["Scene"].isNull())
			resultObject.scene = valueResultResultItem["Scene"].asString();
		if(!valueResultResultItem["DataSetVersion"].isNull())
			resultObject.dataSetVersion = valueResultResultItem["DataSetVersion"].asString();
		if(!valueResultResultItem["CommodityCode"].isNull())
			resultObject.commodityCode = valueResultResultItem["CommodityCode"].asString();
		if(!valueResultResultItem["LockMode"].isNull())
			resultObject.lockMode = valueResultResultItem["LockMode"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListInstanceResult::getMessage()const
{
	return message_;
}

std::string ListInstanceResult::getCode()const
{
	return code_;
}

std::vector<ListInstanceResult::ResultItem> ListInstanceResult::getResult()const
{
	return result_;
}

