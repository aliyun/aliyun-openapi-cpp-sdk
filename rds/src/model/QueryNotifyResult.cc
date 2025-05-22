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

#include <alibabacloud/rds/model/QueryNotifyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

QueryNotifyResult::QueryNotifyResult() :
	ServiceResult()
{}

QueryNotifyResult::QueryNotifyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryNotifyResult::~QueryNotifyResult()
{}

void QueryNotifyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalRecordCount"].isNull())
		data_.totalRecordCount = std::stoi(dataNode["TotalRecordCount"].asString());
	auto allNotifyItemListNode = dataNode["NotifyItemList"]["NotifyItemListItem"];
	for (auto dataNodeNotifyItemListNotifyItemListItem : allNotifyItemListNode)
	{
		Data::NotifyItemListItem notifyItemListItemObject;
		if(!dataNodeNotifyItemListNotifyItemListItem["AliUid"].isNull())
			notifyItemListItemObject.aliUid = std::stol(dataNodeNotifyItemListNotifyItemListItem["AliUid"].asString());
		if(!dataNodeNotifyItemListNotifyItemListItem["ConfirmFlag"].isNull())
			notifyItemListItemObject.confirmFlag = dataNodeNotifyItemListNotifyItemListItem["ConfirmFlag"].asString() == "true";
		if(!dataNodeNotifyItemListNotifyItemListItem["Confirmor"].isNull())
			notifyItemListItemObject.confirmor = std::stol(dataNodeNotifyItemListNotifyItemListItem["Confirmor"].asString());
		if(!dataNodeNotifyItemListNotifyItemListItem["GmtCreated"].isNull())
			notifyItemListItemObject.gmtCreated = dataNodeNotifyItemListNotifyItemListItem["GmtCreated"].asString();
		if(!dataNodeNotifyItemListNotifyItemListItem["GmtModified"].isNull())
			notifyItemListItemObject.gmtModified = dataNodeNotifyItemListNotifyItemListItem["GmtModified"].asString();
		if(!dataNodeNotifyItemListNotifyItemListItem["Id"].isNull())
			notifyItemListItemObject.id = std::stol(dataNodeNotifyItemListNotifyItemListItem["Id"].asString());
		if(!dataNodeNotifyItemListNotifyItemListItem["IdempotentCount"].isNull())
			notifyItemListItemObject.idempotentCount = dataNodeNotifyItemListNotifyItemListItem["IdempotentCount"].asString();
		if(!dataNodeNotifyItemListNotifyItemListItem["IdempotentId"].isNull())
			notifyItemListItemObject.idempotentId = dataNodeNotifyItemListNotifyItemListItem["IdempotentId"].asString();
		if(!dataNodeNotifyItemListNotifyItemListItem["Level"].isNull())
			notifyItemListItemObject.level = dataNodeNotifyItemListNotifyItemListItem["Level"].asString();
		if(!dataNodeNotifyItemListNotifyItemListItem["NotifyElement"].isNull())
			notifyItemListItemObject.notifyElement = dataNodeNotifyItemListNotifyItemListItem["NotifyElement"].asString();
		if(!dataNodeNotifyItemListNotifyItemListItem["TemplateName"].isNull())
			notifyItemListItemObject.templateName = dataNodeNotifyItemListNotifyItemListItem["TemplateName"].asString();
		if(!dataNodeNotifyItemListNotifyItemListItem["Type"].isNull())
			notifyItemListItemObject.type = dataNodeNotifyItemListNotifyItemListItem["Type"].asString();
		data_.notifyItemList.push_back(notifyItemListItemObject);
	}

}

QueryNotifyResult::Data QueryNotifyResult::getData()const
{
	return data_;
}

