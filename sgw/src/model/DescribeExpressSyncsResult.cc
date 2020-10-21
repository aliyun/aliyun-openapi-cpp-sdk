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

#include <alibabacloud/sgw/model/DescribeExpressSyncsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeExpressSyncsResult::DescribeExpressSyncsResult() :
	ServiceResult()
{}

DescribeExpressSyncsResult::DescribeExpressSyncsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExpressSyncsResult::~DescribeExpressSyncsResult()
{}

void DescribeExpressSyncsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExpressSyncsNode = value["ExpressSyncs"]["ExpressSync"];
	for (auto valueExpressSyncsExpressSync : allExpressSyncsNode)
	{
		ExpressSync expressSyncsObject;
		if(!valueExpressSyncsExpressSync["ExpressSyncId"].isNull())
			expressSyncsObject.expressSyncId = valueExpressSyncsExpressSync["ExpressSyncId"].asString();
		if(!valueExpressSyncsExpressSync["Name"].isNull())
			expressSyncsObject.name = valueExpressSyncsExpressSync["Name"].asString();
		if(!valueExpressSyncsExpressSync["Description"].isNull())
			expressSyncsObject.description = valueExpressSyncsExpressSync["Description"].asString();
		if(!valueExpressSyncsExpressSync["BucketRegion"].isNull())
			expressSyncsObject.bucketRegion = valueExpressSyncsExpressSync["BucketRegion"].asString();
		if(!valueExpressSyncsExpressSync["BucketName"].isNull())
			expressSyncsObject.bucketName = valueExpressSyncsExpressSync["BucketName"].asString();
		if(!valueExpressSyncsExpressSync["BucketPrefix"].isNull())
			expressSyncsObject.bucketPrefix = valueExpressSyncsExpressSync["BucketPrefix"].asString();
		if(!valueExpressSyncsExpressSync["MnsTopic"].isNull())
			expressSyncsObject.mnsTopic = valueExpressSyncsExpressSync["MnsTopic"].asString();
		expressSyncs_.push_back(expressSyncsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<DescribeExpressSyncsResult::ExpressSync> DescribeExpressSyncsResult::getExpressSyncs()const
{
	return expressSyncs_;
}

std::string DescribeExpressSyncsResult::getMessage()const
{
	return message_;
}

std::string DescribeExpressSyncsResult::getCode()const
{
	return code_;
}

bool DescribeExpressSyncsResult::getSuccess()const
{
	return success_;
}

