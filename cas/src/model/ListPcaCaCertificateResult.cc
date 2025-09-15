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

#include <alibabacloud/cas/model/ListPcaCaCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

ListPcaCaCertificateResult::ListPcaCaCertificateResult() :
	ServiceResult()
{}

ListPcaCaCertificateResult::ListPcaCaCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPcaCaCertificateResult::~ListPcaCaCertificateResult()
{}

void ListPcaCaCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["CertIdentifier"].isNull())
			listObject.certIdentifier = valueListListItem["CertIdentifier"].asString();
		if(!valueListListItem["Status"].isNull())
			listObject.status = valueListListItem["Status"].asString();
		if(!valueListListItem["CommonName"].isNull())
			listObject.commonName = valueListListItem["CommonName"].asString();
		if(!valueListListItem["IssuerIdentifier"].isNull())
			listObject.issuerIdentifier = valueListListItem["IssuerIdentifier"].asString();
		if(!valueListListItem["PrivateCaInstanceId"].isNull())
			listObject.privateCaInstanceId = valueListListItem["PrivateCaInstanceId"].asString();
		if(!valueListListItem["PrivateCaRegionId"].isNull())
			listObject.privateCaRegionId = valueListListItem["PrivateCaRegionId"].asString();
		if(!valueListListItem["UserId"].isNull())
			listObject.userId = valueListListItem["UserId"].asString();
		if(!valueListListItem["InnerResult"].isNull())
			listObject.innerResult = valueListListItem["InnerResult"].asString();
		list_.push_back(listObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

long ListPcaCaCertificateResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPcaCaCertificateResult::getNextToken()const
{
	return nextToken_;
}

int ListPcaCaCertificateResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListPcaCaCertificateResult::ListItem> ListPcaCaCertificateResult::getList()const
{
	return list_;
}

