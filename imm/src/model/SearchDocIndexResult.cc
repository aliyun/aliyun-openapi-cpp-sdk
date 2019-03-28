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

#include <alibabacloud/imm/model/SearchDocIndexResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

SearchDocIndexResult::SearchDocIndexResult() :
	ServiceResult()
{}

SearchDocIndexResult::SearchDocIndexResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchDocIndexResult::~SearchDocIndexResult()
{}

void SearchDocIndexResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDocInfos = value["DocInfos"]["DocInfosItem"];
	for (auto value : allDocInfos)
	{
		DocInfosItem docInfosObject;
		if(!value["UniqueId"].isNull())
			docInfosObject.uniqueId = value["UniqueId"].asString();
		if(!value["SrcUri"].isNull())
			docInfosObject.srcUri = value["SrcUri"].asString();
		if(!value["Name"].isNull())
			docInfosObject.name = value["Name"].asString();
		if(!value["ContentType"].isNull())
			docInfosObject.contentType = value["ContentType"].asString();
		if(!value["LastModified"].isNull())
			docInfosObject.lastModified = value["LastModified"].asString();
		if(!value["Size"].isNull())
			docInfosObject.size = std::stoi(value["Size"].asString());
		if(!value["PageNum"].isNull())
			docInfosObject.pageNum = std::stoi(value["PageNum"].asString());
		if(!value["CustomKey1"].isNull())
			docInfosObject.customKey1 = value["CustomKey1"].asString();
		if(!value["CustomKey2"].isNull())
			docInfosObject.customKey2 = value["CustomKey2"].asString();
		if(!value["CustomKey3"].isNull())
			docInfosObject.customKey3 = value["CustomKey3"].asString();
		if(!value["CustomKey4"].isNull())
			docInfosObject.customKey4 = value["CustomKey4"].asString();
		if(!value["CustomKey5"].isNull())
			docInfosObject.customKey5 = value["CustomKey5"].asString();
		if(!value["CustomKey6"].isNull())
			docInfosObject.customKey6 = value["CustomKey6"].asString();
		docInfos_.push_back(docInfosObject);
	}

}

std::vector<SearchDocIndexResult::DocInfosItem> SearchDocIndexResult::getDocInfos()const
{
	return docInfos_;
}

