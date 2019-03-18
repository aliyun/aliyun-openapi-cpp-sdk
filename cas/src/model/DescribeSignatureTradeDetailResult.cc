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

#include <alibabacloud/cas/model/DescribeSignatureTradeDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeSignatureTradeDetailResult::DescribeSignatureTradeDetailResult() :
	ServiceResult()
{}

DescribeSignatureTradeDetailResult::DescribeSignatureTradeDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSignatureTradeDetailResult::~DescribeSignatureTradeDetailResult()
{}

void DescribeSignatureTradeDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["DocTitle"].isNull())
		docTitle_ = value["DocTitle"].asString();
	if(!value["TransactionId"].isNull())
		transactionId_ = value["TransactionId"].asString();
	if(!value["PeopleName"].isNull())
		peopleName_ = value["PeopleName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["SignStatus"].isNull())
		signStatus_ = std::stoi(value["SignStatus"].asString());
	if(!value["SignMode"].isNull())
		signMode_ = std::stoi(value["SignMode"].asString());
	if(!value["DocId"].isNull())
		docId_ = value["DocId"].asString();
	if(!value["PeopleId"].isNull())
		peopleId_ = value["PeopleId"].asString();
	if(!value["PeopleIdentity"].isNull())
		peopleIdentity_ = value["PeopleIdentity"].asString();
	if(!value["PeopleMobile"].isNull())
		peopleMobile_ = value["PeopleMobile"].asString();
	if(!value["PeopleEmail"].isNull())
		peopleEmail_ = value["PeopleEmail"].asString();
	if(!value["SignCompany"].isNull())
		signCompany_ = value["SignCompany"].asString();

}

std::string DescribeSignatureTradeDetailResult::getDocId()const
{
	return docId_;
}

std::string DescribeSignatureTradeDetailResult::getDocTitle()const
{
	return docTitle_;
}

int DescribeSignatureTradeDetailResult::getSignMode()const
{
	return signMode_;
}

long DescribeSignatureTradeDetailResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeSignatureTradeDetailResult::getTransactionId()const
{
	return transactionId_;
}

std::string DescribeSignatureTradeDetailResult::getSignCompany()const
{
	return signCompany_;
}

std::string DescribeSignatureTradeDetailResult::getPeopleId()const
{
	return peopleId_;
}

std::string DescribeSignatureTradeDetailResult::getPeopleName()const
{
	return peopleName_;
}

int DescribeSignatureTradeDetailResult::getSignStatus()const
{
	return signStatus_;
}

std::string DescribeSignatureTradeDetailResult::getPeopleEmail()const
{
	return peopleEmail_;
}

long DescribeSignatureTradeDetailResult::getId()const
{
	return id_;
}

std::string DescribeSignatureTradeDetailResult::getPeopleMobile()const
{
	return peopleMobile_;
}

std::string DescribeSignatureTradeDetailResult::getPeopleIdentity()const
{
	return peopleIdentity_;
}

