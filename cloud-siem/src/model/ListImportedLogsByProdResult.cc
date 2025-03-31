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

#include <alibabacloud/cloud-siem/model/ListImportedLogsByProdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListImportedLogsByProdResult::ListImportedLogsByProdResult() :
	ServiceResult()
{}

ListImportedLogsByProdResult::ListImportedLogsByProdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListImportedLogsByProdResult::~ListImportedLogsByProdResult()
{}

void ListImportedLogsByProdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ProdCode"].isNull())
			dataObject.prodCode = valueDataDataItem["ProdCode"].asString();
		if(!valueDataDataItem["LogCode"].isNull())
			dataObject.logCode = valueDataDataItem["LogCode"].asString();
		if(!valueDataDataItem["LogMdsCode"].isNull())
			dataObject.logMdsCode = valueDataDataItem["LogMdsCode"].asString();
		if(!valueDataDataItem["ImportedUserCount"].isNull())
			dataObject.importedUserCount = std::stoi(valueDataDataItem["ImportedUserCount"].asString());
		if(!valueDataDataItem["UnImportedUserCount"].isNull())
			dataObject.unImportedUserCount = std::stoi(valueDataDataItem["UnImportedUserCount"].asString());
		if(!valueDataDataItem["TotalUserCount"].isNull())
			dataObject.totalUserCount = std::stoi(valueDataDataItem["TotalUserCount"].asString());
		if(!valueDataDataItem["ModifyTime"].isNull())
			dataObject.modifyTime = valueDataDataItem["ModifyTime"].asString();
		if(!valueDataDataItem["Imported"].isNull())
			dataObject.imported = std::stoi(valueDataDataItem["Imported"].asString());
		if(!valueDataDataItem["AutoImported"].isNull())
			dataObject.autoImported = std::stoi(valueDataDataItem["AutoImported"].asString());
		if(!valueDataDataItem["LogType"].isNull())
			dataObject.logType = std::stoi(valueDataDataItem["LogType"].asString());
		if(!valueDataDataItem["CloudCode"].isNull())
			dataObject.cloudCode = valueDataDataItem["CloudCode"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListImportedLogsByProdResult::DataItem> ListImportedLogsByProdResult::getData()const
{
	return data_;
}

