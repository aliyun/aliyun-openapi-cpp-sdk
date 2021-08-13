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

#include <alibabacloud/smartag/model/ListDpiSignaturesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ListDpiSignaturesResult::ListDpiSignaturesResult() :
	ServiceResult()
{}

ListDpiSignaturesResult::ListDpiSignaturesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDpiSignaturesResult::~ListDpiSignaturesResult()
{}

void ListDpiSignaturesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDpiSignatureNode = value["DpiSignature"]["DpiSignatureItem"];
	for (auto valueDpiSignatureDpiSignatureItem : allDpiSignatureNode)
	{
		DpiSignatureItem dpiSignatureObject;
		if(!valueDpiSignatureDpiSignatureItem["DpiSignatureId"].isNull())
			dpiSignatureObject.dpiSignatureId = valueDpiSignatureDpiSignatureItem["DpiSignatureId"].asString();
		if(!valueDpiSignatureDpiSignatureItem["MinSignatureDbVersion"].isNull())
			dpiSignatureObject.minSignatureDbVersion = valueDpiSignatureDpiSignatureItem["MinSignatureDbVersion"].asString();
		if(!valueDpiSignatureDpiSignatureItem["DpiGroupId"].isNull())
			dpiSignatureObject.dpiGroupId = valueDpiSignatureDpiSignatureItem["DpiGroupId"].asString();
		if(!valueDpiSignatureDpiSignatureItem["MinEngineVersion"].isNull())
			dpiSignatureObject.minEngineVersion = valueDpiSignatureDpiSignatureItem["MinEngineVersion"].asString();
		if(!valueDpiSignatureDpiSignatureItem["DpiSignatureName"].isNull())
			dpiSignatureObject.dpiSignatureName = valueDpiSignatureDpiSignatureItem["DpiSignatureName"].asString();
		dpiSignature_.push_back(dpiSignatureObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListDpiSignaturesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDpiSignaturesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListDpiSignaturesResult::DpiSignatureItem> ListDpiSignaturesResult::getDpiSignature()const
{
	return dpiSignature_;
}

