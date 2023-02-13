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

#include <alibabacloud/bssopenapi/model/QueryBillToOSSSubscriptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryBillToOSSSubscriptionResult::QueryBillToOSSSubscriptionResult() :
	ServiceResult()
{}

QueryBillToOSSSubscriptionResult::QueryBillToOSSSubscriptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBillToOSSSubscriptionResult::~QueryBillToOSSSubscriptionResult()
{}

void QueryBillToOSSSubscriptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	if(!dataNode["AccountID"].isNull())
		data_.accountID = dataNode["AccountID"].asString();
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["BucketOwnerId"].isNull())
			itemObject.bucketOwnerId = std::stol(dataNodeItemsItem["BucketOwnerId"].asString());
		if(!dataNodeItemsItem["SubscribeType"].isNull())
			itemObject.subscribeType = dataNodeItemsItem["SubscribeType"].asString();
		if(!dataNodeItemsItem["SubscribeBucket"].isNull())
			itemObject.subscribeBucket = dataNodeItemsItem["SubscribeBucket"].asString();
		if(!dataNodeItemsItem["SubscribeTime"].isNull())
			itemObject.subscribeTime = dataNodeItemsItem["SubscribeTime"].asString();
		if(!dataNodeItemsItem["SubscribeLanguage"].isNull())
			itemObject.subscribeLanguage = dataNodeItemsItem["SubscribeLanguage"].asString();
		if(!dataNodeItemsItem["MultAccountRelSubscribe"].isNull())
			itemObject.multAccountRelSubscribe = dataNodeItemsItem["MultAccountRelSubscribe"].asString();
		if(!dataNodeItemsItem["BucketPath"].isNull())
			itemObject.bucketPath = dataNodeItemsItem["BucketPath"].asString();
		if(!dataNodeItemsItem["RowLimitPerFile"].isNull())
			itemObject.rowLimitPerFile = std::stoi(dataNodeItemsItem["RowLimitPerFile"].asString());
		data_.items.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryBillToOSSSubscriptionResult::getMessage()const
{
	return message_;
}

QueryBillToOSSSubscriptionResult::Data QueryBillToOSSSubscriptionResult::getData()const
{
	return data_;
}

std::string QueryBillToOSSSubscriptionResult::getCode()const
{
	return code_;
}

bool QueryBillToOSSSubscriptionResult::getSuccess()const
{
	return success_;
}

