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

#include <alibabacloud/iot/model/ListSourceReplicaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListSourceReplicaResult::ListSourceReplicaResult() :
	ServiceResult()
{}

ListSourceReplicaResult::ListSourceReplicaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSourceReplicaResult::~ListSourceReplicaResult()
{}

void ListSourceReplicaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stol(dataNode["TotalPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	auto allDataListNode = dataNode["DataList"]["DataListItem"];
	for (auto dataNodeDataListDataListItem : allDataListNode)
	{
		Data::DataListItem dataListItemObject;
		if(!dataNodeDataListDataListItem["ReplicaUid"].isNull())
			dataListItemObject.replicaUid = dataNodeDataListDataListItem["ReplicaUid"].asString();
		if(!dataNodeDataListDataListItem["Name"].isNull())
			dataListItemObject.name = dataNodeDataListDataListItem["Name"].asString();
		if(!dataNodeDataListDataListItem["Code"].isNull())
			dataListItemObject.code = dataNodeDataListDataListItem["Code"].asString();
		if(!dataNodeDataListDataListItem["SourceUid"].isNull())
			dataListItemObject.sourceUid = dataNodeDataListDataListItem["SourceUid"].asString();
		if(!dataNodeDataListDataListItem["TableUid"].isNull())
			dataListItemObject.tableUid = dataNodeDataListDataListItem["TableUid"].asString();
		if(!dataNodeDataListDataListItem["SourceType"].isNull())
			dataListItemObject.sourceType = dataNodeDataListDataListItem["SourceType"].asString();
		if(!dataNodeDataListDataListItem["TimeCycle"].isNull())
			dataListItemObject.timeCycle = std::stoi(dataNodeDataListDataListItem["TimeCycle"].asString());
		if(!dataNodeDataListDataListItem["TimeUnit"].isNull())
			dataListItemObject.timeUnit = dataNodeDataListDataListItem["TimeUnit"].asString();
		if(!dataNodeDataListDataListItem["Region"].isNull())
			dataListItemObject.region = std::stoi(dataNodeDataListDataListItem["Region"].asString());
		if(!dataNodeDataListDataListItem["BeginLatest"].isNull())
			dataListItemObject.beginLatest = std::stol(dataNodeDataListDataListItem["BeginLatest"].asString());
		if(!dataNodeDataListDataListItem["EndLatest"].isNull())
			dataListItemObject.endLatest = std::stol(dataNodeDataListDataListItem["EndLatest"].asString());
		if(!dataNodeDataListDataListItem["ExtraProperty"].isNull())
			dataListItemObject.extraProperty = dataNodeDataListDataListItem["ExtraProperty"].asString();
		if(!dataNodeDataListDataListItem["Status"].isNull())
			dataListItemObject.status = std::stoi(dataNodeDataListDataListItem["Status"].asString());
		if(!dataNodeDataListDataListItem["StorageSize"].isNull())
			dataListItemObject.storageSize = std::stol(dataNodeDataListDataListItem["StorageSize"].asString());
		if(!dataNodeDataListDataListItem["ProductCreateTime"].isNull())
			dataListItemObject.productCreateTime = std::stol(dataNodeDataListDataListItem["ProductCreateTime"].asString());
		if(!dataNodeDataListDataListItem["NodeType"].isNull())
			dataListItemObject.nodeType = std::stoi(dataNodeDataListDataListItem["NodeType"].asString());
		if(!dataNodeDataListDataListItem["NeedTips"].isNull())
			dataListItemObject.needTips = dataNodeDataListDataListItem["NeedTips"].asString() == "true";
		if(!dataNodeDataListDataListItem["LongJobUid"].isNull())
			dataListItemObject.longJobUid = dataNodeDataListDataListItem["LongJobUid"].asString();
		if(!dataNodeDataListDataListItem["Desc"].isNull())
			dataListItemObject.desc = dataNodeDataListDataListItem["Desc"].asString();
		if(!dataNodeDataListDataListItem["GmtCreate"].isNull())
			dataListItemObject.gmtCreate = std::stol(dataNodeDataListDataListItem["GmtCreate"].asString());
		data_.dataList.push_back(dataListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListSourceReplicaResult::Data ListSourceReplicaResult::getData()const
{
	return data_;
}

std::string ListSourceReplicaResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListSourceReplicaResult::getCode()const
{
	return code_;
}

bool ListSourceReplicaResult::getSuccess()const
{
	return success_;
}

