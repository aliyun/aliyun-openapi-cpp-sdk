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

#include <alibabacloud/cloudauth/model/MobileDetectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

MobileDetectResult::MobileDetectResult() :
	ServiceResult()
{}

MobileDetectResult::MobileDetectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MobileDetectResult::~MobileDetectResult()
{}

void MobileDetectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultObjectNode = value["ResultObject"];
	if(!resultObjectNode["ChargeCount"].isNull())
		resultObject_.chargeCount = resultObjectNode["ChargeCount"].asString();
	auto allItemsNode = resultObjectNode["Items"]["ItemsItem"];
	for (auto resultObjectNodeItemsItemsItem : allItemsNode)
	{
		ResultObject::ItemsItem itemsItemObject;
		if(!resultObjectNodeItemsItemsItem["Mobile"].isNull())
			itemsItemObject.mobile = resultObjectNodeItemsItemsItem["Mobile"].asString();
		if(!resultObjectNodeItemsItemsItem["BizCode"].isNull())
			itemsItemObject.bizCode = resultObjectNodeItemsItemsItem["BizCode"].asString();
		if(!resultObjectNodeItemsItemsItem["SubCode"].isNull())
			itemsItemObject.subCode = resultObjectNodeItemsItemsItem["SubCode"].asString();
		if(!resultObjectNodeItemsItemsItem["IspName"].isNull())
			itemsItemObject.ispName = resultObjectNodeItemsItemsItem["IspName"].asString();
		if(!resultObjectNodeItemsItemsItem["Area"].isNull())
			itemsItemObject.area = resultObjectNodeItemsItemsItem["Area"].asString();
		resultObject_.items.push_back(itemsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

MobileDetectResult::ResultObject MobileDetectResult::getResultObject()const
{
	return resultObject_;
}

std::string MobileDetectResult::getMessage()const
{
	return message_;
}

std::string MobileDetectResult::getCode()const
{
	return code_;
}

