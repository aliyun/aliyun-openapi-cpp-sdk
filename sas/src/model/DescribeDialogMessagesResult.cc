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

#include <alibabacloud/sas/model/DescribeDialogMessagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeDialogMessagesResult::DescribeDialogMessagesResult() :
	ServiceResult()
{}

DescribeDialogMessagesResult::DescribeDialogMessagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDialogMessagesResult::~DescribeDialogMessagesResult()
{}

void DescribeDialogMessagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDialogListNode = value["DialogList"]["AegisDynamicDialogDTO"];
	for (auto valueDialogListAegisDynamicDialogDTO : allDialogListNode)
	{
		AegisDynamicDialogDTO dialogListObject;
		if(!valueDialogListAegisDynamicDialogDTO["ID"].isNull())
			dialogListObject.iD = std::stol(valueDialogListAegisDynamicDialogDTO["ID"].asString());
		if(!valueDialogListAegisDynamicDialogDTO["DialogKey"].isNull())
			dialogListObject.dialogKey = valueDialogListAegisDynamicDialogDTO["DialogKey"].asString();
		if(!valueDialogListAegisDynamicDialogDTO["Params"].isNull())
			dialogListObject.params = valueDialogListAegisDynamicDialogDTO["Params"].asString();
		dialogList_.push_back(dialogListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDialogMessagesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDialogMessagesResult::AegisDynamicDialogDTO> DescribeDialogMessagesResult::getDialogList()const
{
	return dialogList_;
}

