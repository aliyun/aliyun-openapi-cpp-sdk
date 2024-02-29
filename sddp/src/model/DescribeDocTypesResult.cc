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

#include <alibabacloud/sddp/model/DescribeDocTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDocTypesResult::DescribeDocTypesResult() :
	ServiceResult()
{}

DescribeDocTypesResult::DescribeDocTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDocTypesResult::~DescribeDocTypesResult()
{}

void DescribeDocTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDocTypeListNode = value["DocTypeList"]["DocType"];
	for (auto valueDocTypeListDocType : allDocTypeListNode)
	{
		DocType docTypeListObject;
		if(!valueDocTypeListDocType["Code"].isNull())
			docTypeListObject.code = std::stol(valueDocTypeListDocType["Code"].asString());
		if(!valueDocTypeListDocType["Name"].isNull())
			docTypeListObject.name = valueDocTypeListDocType["Name"].asString();
		if(!valueDocTypeListDocType["Id"].isNull())
			docTypeListObject.id = std::stol(valueDocTypeListDocType["Id"].asString());
		docTypeList_.push_back(docTypeListObject);
	}

}

std::vector<DescribeDocTypesResult::DocType> DescribeDocTypesResult::getDocTypeList()const
{
	return docTypeList_;
}

