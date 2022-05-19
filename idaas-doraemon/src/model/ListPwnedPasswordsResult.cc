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

#include <alibabacloud/idaas-doraemon/model/ListPwnedPasswordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

ListPwnedPasswordsResult::ListPwnedPasswordsResult() :
	ServiceResult()
{}

ListPwnedPasswordsResult::ListPwnedPasswordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPwnedPasswordsResult::~ListPwnedPasswordsResult()
{}

void ListPwnedPasswordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPwnedPasswordInfosNode = value["PwnedPasswordInfos"]["items"];
	for (auto valuePwnedPasswordInfositems : allPwnedPasswordInfosNode)
	{
		Items pwnedPasswordInfosObject;
		if(!valuePwnedPasswordInfositems["HexPasswordSha1Hash"].isNull())
			pwnedPasswordInfosObject.hexPasswordSha1Hash = valuePwnedPasswordInfositems["HexPasswordSha1Hash"].asString();
		if(!valuePwnedPasswordInfositems["PwnedCount"].isNull())
			pwnedPasswordInfosObject.pwnedCount = std::stol(valuePwnedPasswordInfositems["PwnedCount"].asString());
		pwnedPasswordInfos_.push_back(pwnedPasswordInfosObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListPwnedPasswordsResult::getTotalCount()const
{
	return totalCount_;
}

long ListPwnedPasswordsResult::getPageSize()const
{
	return pageSize_;
}

long ListPwnedPasswordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPwnedPasswordsResult::Items> ListPwnedPasswordsResult::getPwnedPasswordInfos()const
{
	return pwnedPasswordInfos_;
}

