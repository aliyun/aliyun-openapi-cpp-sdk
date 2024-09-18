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

#include <alibabacloud/quickbi-public/model/ListSharedReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListSharedReportsResult::ListSharedReportsResult() :
	ServiceResult()
{}

ListSharedReportsResult::ListSharedReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSharedReportsResult::~ListSharedReportsResult()
{}

void ListSharedReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stoi(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["TotalNum"].isNull())
		result_.totalNum = std::stoi(resultNode["TotalNum"].asString());
	if(!resultNode["TotalPages"].isNull())
		result_.totalPages = std::stoi(resultNode["TotalPages"].asString());
	auto allDataNode = resultNode["Data"]["DataItem"];
	for (auto resultNodeDataDataItem : allDataNode)
	{
		Result::DataItem dataItemObject;
		if(!resultNodeDataDataItem["Favorite"].isNull())
			dataItemObject.favorite = resultNodeDataDataItem["Favorite"].asString() == "true";
		if(!resultNodeDataDataItem["GmtCreate"].isNull())
			dataItemObject.gmtCreate = resultNodeDataDataItem["GmtCreate"].asString();
		if(!resultNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = resultNodeDataDataItem["GmtModified"].asString();
		if(!resultNodeDataDataItem["HasEditAuth"].isNull())
			dataItemObject.hasEditAuth = resultNodeDataDataItem["HasEditAuth"].asString() == "true";
		if(!resultNodeDataDataItem["HasViewAuth"].isNull())
			dataItemObject.hasViewAuth = resultNodeDataDataItem["HasViewAuth"].asString() == "true";
		if(!resultNodeDataDataItem["Name"].isNull())
			dataItemObject.name = resultNodeDataDataItem["Name"].asString();
		if(!resultNodeDataDataItem["OwnerName"].isNull())
			dataItemObject.ownerName = resultNodeDataDataItem["OwnerName"].asString();
		if(!resultNodeDataDataItem["OwnerNum"].isNull())
			dataItemObject.ownerNum = resultNodeDataDataItem["OwnerNum"].asString();
		if(!resultNodeDataDataItem["PublishStatus"].isNull())
			dataItemObject.publishStatus = std::stoi(resultNodeDataDataItem["PublishStatus"].asString());
		if(!resultNodeDataDataItem["TreeId"].isNull())
			dataItemObject.treeId = resultNodeDataDataItem["TreeId"].asString();
		if(!resultNodeDataDataItem["Type"].isNull())
			dataItemObject.type = resultNodeDataDataItem["Type"].asString();
		if(!resultNodeDataDataItem["WorkspaceId"].isNull())
			dataItemObject.workspaceId = resultNodeDataDataItem["WorkspaceId"].asString();
		if(!resultNodeDataDataItem["WorkspaceName"].isNull())
			dataItemObject.workspaceName = resultNodeDataDataItem["WorkspaceName"].asString();
		result_.data.push_back(dataItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListSharedReportsResult::getSuccess()const
{
	return success_;
}

ListSharedReportsResult::Result ListSharedReportsResult::getResult()const
{
	return result_;
}

