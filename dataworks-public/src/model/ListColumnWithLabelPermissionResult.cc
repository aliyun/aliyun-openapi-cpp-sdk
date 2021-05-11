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

#include <alibabacloud/dataworks-public/model/ListColumnWithLabelPermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListColumnWithLabelPermissionResult::ListColumnWithLabelPermissionResult() :
	ServiceResult()
{}

ListColumnWithLabelPermissionResult::ListColumnWithLabelPermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListColumnWithLabelPermissionResult::~ListColumnWithLabelPermissionResult()
{}

void ListColumnWithLabelPermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allColumnMetaNode = value["ColumnMeta"]["ColumnMetaItem"];
	for (auto valueColumnMetaColumnMetaItem : allColumnMetaNode)
	{
		ColumnMetaItem columnMetaObject;
		if(!valueColumnMetaColumnMetaItem["Guid"].isNull())
			columnMetaObject.guid = valueColumnMetaColumnMetaItem["Guid"].asString();
		if(!valueColumnMetaColumnMetaItem["Name"].isNull())
			columnMetaObject.name = valueColumnMetaColumnMetaItem["Name"].asString();
		if(!valueColumnMetaColumnMetaItem["Comment"].isNull())
			columnMetaObject.comment = valueColumnMetaColumnMetaItem["Comment"].asString();
		if(!valueColumnMetaColumnMetaItem["SecurityLevel"].isNull())
			columnMetaObject.securityLevel = valueColumnMetaColumnMetaItem["SecurityLevel"].asString();
		if(!valueColumnMetaColumnMetaItem["Deadline"].isNull())
			columnMetaObject.deadline = valueColumnMetaColumnMetaItem["Deadline"].asString();
		if(!valueColumnMetaColumnMetaItem["GrantedLabel"].isNull())
			columnMetaObject.grantedLabel = valueColumnMetaColumnMetaItem["GrantedLabel"].asString();
		columnMeta_.push_back(columnMetaObject);
	}

}

std::vector<ListColumnWithLabelPermissionResult::ColumnMetaItem> ListColumnWithLabelPermissionResult::getColumnMeta()const
{
	return columnMeta_;
}

