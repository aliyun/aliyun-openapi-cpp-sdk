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

#include <alibabacloud/cloud-siem/model/ListAllProdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListAllProdsResult::ListAllProdsResult() :
	ServiceResult()
{}

ListAllProdsResult::ListAllProdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllProdsResult::~ListAllProdsResult()
{}

void ListAllProdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	auto allProdListNode = dataNode["ProdList"]["ProdListItem"];
	for (auto dataNodeProdListProdListItem : allProdListNode)
	{
		Data::ProdListItem prodListItemObject;
		if(!dataNodeProdListProdListItem["ProdCode"].isNull())
			prodListItemObject.prodCode = dataNodeProdListProdListItem["ProdCode"].asString();
		if(!dataNodeProdListProdListItem["TotalLogCount"].isNull())
			prodListItemObject.totalLogCount = std::stoi(dataNodeProdListProdListItem["TotalLogCount"].asString());
		if(!dataNodeProdListProdListItem["ImportedLogCount"].isNull())
			prodListItemObject.importedLogCount = std::stoi(dataNodeProdListProdListItem["ImportedLogCount"].asString());
		if(!dataNodeProdListProdListItem["ModifyTime"].isNull())
			prodListItemObject.modifyTime = dataNodeProdListProdListItem["ModifyTime"].asString();
		if(!dataNodeProdListProdListItem["CloudCode"].isNull())
			prodListItemObject.cloudCode = dataNodeProdListProdListItem["CloudCode"].asString();
		data_.prodList.push_back(prodListItemObject);
	}

}

ListAllProdsResult::Data ListAllProdsResult::getData()const
{
	return data_;
}

