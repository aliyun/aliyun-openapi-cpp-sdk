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

#include <alibabacloud/cloudapi/model/DescribeApiSignaturesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiSignaturesResult::DescribeApiSignaturesResult() :
	ServiceResult()
{}

DescribeApiSignaturesResult::DescribeApiSignaturesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiSignaturesResult::~DescribeApiSignaturesResult()
{}

void DescribeApiSignaturesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allApiSignatures = value["ApiSignatures"]["ApiSignatureItem"];
	for (auto value : allApiSignatures)
	{
		ApiSignatureItem apiSignaturesObject;
		if(!value["ApiId"].isNull())
			apiSignaturesObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			apiSignaturesObject.apiName = value["ApiName"].asString();
		if(!value["SignatureId"].isNull())
			apiSignaturesObject.signatureId = value["SignatureId"].asString();
		if(!value["SignatureName"].isNull())
			apiSignaturesObject.signatureName = value["SignatureName"].asString();
		if(!value["BoundTime"].isNull())
			apiSignaturesObject.boundTime = value["BoundTime"].asString();
		apiSignatures_.push_back(apiSignaturesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeApiSignaturesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeApiSignaturesResult::ApiSignatureItem> DescribeApiSignaturesResult::getApiSignatures()const
{
	return apiSignatures_;
}

int DescribeApiSignaturesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApiSignaturesResult::getPageNumber()const
{
	return pageNumber_;
}

