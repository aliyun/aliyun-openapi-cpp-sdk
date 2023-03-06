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

#include <alibabacloud/cloud-siem/model/BatchJobSubmitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

BatchJobSubmitResult::BatchJobSubmitResult() :
	ServiceResult()
{}

BatchJobSubmitResult::BatchJobSubmitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchJobSubmitResult::~BatchJobSubmitResult()
{}

void BatchJobSubmitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SubmitId"].isNull())
		data_.submitId = dataNode["SubmitId"].asString();
	if(!dataNode["TaskCount"].isNull())
		data_.taskCount = std::stoi(dataNode["TaskCount"].asString());
	if(!dataNode["ConfigId"].isNull())
		data_.configId = dataNode["ConfigId"].asString();
	auto allConfigListNode = dataNode["ConfigList"]["ConfigListItem"];
	for (auto dataNodeConfigListConfigListItem : allConfigListNode)
	{
		Data::ConfigListItem configListItemObject;
		if(!dataNodeConfigListConfigListItem["UserId"].isNull())
			configListItemObject.userId = std::stol(dataNodeConfigListConfigListItem["UserId"].asString());
		auto allProductListNode = dataNodeConfigListConfigListItem["ProductList"]["ProductListItem"];
		for (auto dataNodeConfigListConfigListItemProductListProductListItem : allProductListNode)
		{
			Data::ConfigListItem::ProductListItem productListObject;
			if(!dataNodeConfigListConfigListItemProductListProductListItem["ProductCode"].isNull())
				productListObject.productCode = dataNodeConfigListConfigListItemProductListProductListItem["ProductCode"].asString();
			auto allLogListNode = dataNodeConfigListConfigListItemProductListProductListItem["LogList"]["LogListItem"];
			for (auto dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem : allLogListNode)
			{
				Data::ConfigListItem::ProductListItem::LogListItem logListObject;
				if(!dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["ProductCode"].isNull())
					logListObject.productCode = dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["ProductCode"].asString();
				if(!dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["LogCode"].isNull())
					logListObject.logCode = dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["LogCode"].asString();
				if(!dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["RegionCode"].isNull())
					logListObject.regionCode = dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["RegionCode"].asString();
				if(!dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["ProjectNamePattern"].isNull())
					logListObject.projectNamePattern = dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["ProjectNamePattern"].asString();
				if(!dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["LogStoreNamePattern"].isNull())
					logListObject.logStoreNamePattern = dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["LogStoreNamePattern"].asString();
				if(!dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["ErrorCode"].isNull())
					logListObject.errorCode = dataNodeConfigListConfigListItemProductListProductListItemLogListLogListItem["ErrorCode"].asString();
				productListObject.logList.push_back(logListObject);
			}
			configListItemObject.productList.push_back(productListObject);
		}
		data_.configList.push_back(configListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();

}

std::string BatchJobSubmitResult::getMessage()const
{
	return message_;
}

BatchJobSubmitResult::Data BatchJobSubmitResult::getData()const
{
	return data_;
}

int BatchJobSubmitResult::getCode()const
{
	return code_;
}

bool BatchJobSubmitResult::getSuccess()const
{
	return success_;
}

std::string BatchJobSubmitResult::getErrCode()const
{
	return errCode_;
}

