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

#include <alibabacloud/cloudapi/model/DescribeSignaturesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeSignaturesResult::DescribeSignaturesResult() :
	ServiceResult()
{}

DescribeSignaturesResult::DescribeSignaturesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSignaturesResult::~DescribeSignaturesResult()
{}

void DescribeSignaturesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSignatureInfos = value["SignatureInfos"]["SignatureInfo"];
	for (auto value : allSignatureInfos)
	{
		SignatureInfo signatureInfosObject;
		if(!value["RegionId"].isNull())
			signatureInfosObject.regionId = value["RegionId"].asString();
		if(!value["SignatureId"].isNull())
			signatureInfosObject.signatureId = value["SignatureId"].asString();
		if(!value["SignatureName"].isNull())
			signatureInfosObject.signatureName = value["SignatureName"].asString();
		if(!value["SignatureKey"].isNull())
			signatureInfosObject.signatureKey = value["SignatureKey"].asString();
		if(!value["SignatureSecret"].isNull())
			signatureInfosObject.signatureSecret = value["SignatureSecret"].asString();
		if(!value["CreatedTime"].isNull())
			signatureInfosObject.createdTime = value["CreatedTime"].asString();
		if(!value["ModifiedTime"].isNull())
			signatureInfosObject.modifiedTime = value["ModifiedTime"].asString();
		signatureInfos_.push_back(signatureInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeSignaturesResult::SignatureInfo> DescribeSignaturesResult::getSignatureInfos()const
{
	return signatureInfos_;
}

int DescribeSignaturesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSignaturesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSignaturesResult::getPageNumber()const
{
	return pageNumber_;
}

