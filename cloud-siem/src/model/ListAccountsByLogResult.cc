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

#include <alibabacloud/cloud-siem/model/ListAccountsByLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListAccountsByLogResult::ListAccountsByLogResult() :
	ServiceResult()
{}

ListAccountsByLogResult::ListAccountsByLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccountsByLogResult::~ListAccountsByLogResult()
{}

void ListAccountsByLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SubUserId"].isNull())
			dataObject.subUserId = std::stol(valueDataDataItem["SubUserId"].asString());
		if(!valueDataDataItem["MainUserId"].isNull())
			dataObject.mainUserId = std::stol(valueDataDataItem["MainUserId"].asString());
		if(!valueDataDataItem["AccountId"].isNull())
			dataObject.accountId = valueDataDataItem["AccountId"].asString();
		if(!valueDataDataItem["AccountName"].isNull())
			dataObject.accountName = valueDataDataItem["AccountName"].asString();
		if(!valueDataDataItem["Imported"].isNull())
			dataObject.imported = std::stoi(valueDataDataItem["Imported"].asString());
		if(!valueDataDataItem["LogCode"].isNull())
			dataObject.logCode = valueDataDataItem["LogCode"].asString();
		if(!valueDataDataItem["ProdCode"].isNull())
			dataObject.prodCode = valueDataDataItem["ProdCode"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListAccountsByLogResult::DataItem> ListAccountsByLogResult::getData()const
{
	return data_;
}

