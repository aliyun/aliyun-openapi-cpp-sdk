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

#include <alibabacloud/cas/model/ListCertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

ListCertResult::ListCertResult() :
	ServiceResult()
{}

ListCertResult::ListCertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCertResult::~ListCertResult()
{}

void ListCertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["Status"].isNull())
			listObject.status = valueListListItem["Status"].asString();
		if(!valueListListItem["AfterDate"].isNull())
			listObject.afterDate = valueListListItem["AfterDate"].asString();
		if(!valueListListItem["Organization"].isNull())
			listObject.organization = valueListListItem["Organization"].asString();
		if(!valueListListItem["KeyExportable"].isNull())
			listObject.keyExportable = valueListListItem["KeyExportable"].asString() == "true";
		if(!valueListListItem["SubjectDn"].isNull())
			listObject.subjectDn = valueListListItem["SubjectDn"].asString();
		if(!valueListListItem["Algorithm"].isNull())
			listObject.algorithm = valueListListItem["Algorithm"].asString();
		if(!valueListListItem["CertificateType"].isNull())
			listObject.certificateType = valueListListItem["CertificateType"].asString();
		if(!valueListListItem["Identifier"].isNull())
			listObject.identifier = valueListListItem["Identifier"].asString();
		if(!valueListListItem["SerialNumber"].isNull())
			listObject.serialNumber = valueListListItem["SerialNumber"].asString();
		if(!valueListListItem["Extra"].isNull())
			listObject.extra = valueListListItem["Extra"].asString();
		if(!valueListListItem["OrganizationUnit"].isNull())
			listObject.organizationUnit = valueListListItem["OrganizationUnit"].asString();
		if(!valueListListItem["BeforeTime"].isNull())
			listObject.beforeTime = std::stol(valueListListItem["BeforeTime"].asString());
		if(!valueListListItem["AliasName"].isNull())
			listObject.aliasName = valueListListItem["AliasName"].asString();
		if(!valueListListItem["AfterTime"].isNull())
			listObject.afterTime = std::stol(valueListListItem["AfterTime"].asString());
		if(!valueListListItem["Id"].isNull())
			listObject.id = valueListListItem["Id"].asString();
		if(!valueListListItem["CommonName"].isNull())
			listObject.commonName = valueListListItem["CommonName"].asString();
		if(!valueListListItem["BeforeDate"].isNull())
			listObject.beforeDate = valueListListItem["BeforeDate"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
			listObject.tags.push_back(value.asString());
		list_.push_back(listObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["ShowSize"].isNull())
		showSize_ = std::stoi(value["ShowSize"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

long ListCertResult::getTotalCount()const
{
	return totalCount_;
}

int ListCertResult::getPageCount()const
{
	return pageCount_;
}

std::string ListCertResult::getNextToken()const
{
	return nextToken_;
}

int ListCertResult::getCurrentPage()const
{
	return currentPage_;
}

int ListCertResult::getMaxResults()const
{
	return maxResults_;
}

int ListCertResult::getShowSize()const
{
	return showSize_;
}

std::vector<ListCertResult::ListItem> ListCertResult::getList()const
{
	return list_;
}

