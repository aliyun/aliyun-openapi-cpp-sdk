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

#include <alibabacloud/sae/model/DescribeApplicationImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationImageResult::DescribeApplicationImageResult() :
	ServiceResult()
{}

DescribeApplicationImageResult::DescribeApplicationImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationImageResult::~DescribeApplicationImageResult()
{}

void DescribeApplicationImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RepoId"].isNull())
		data_.repoId = std::stoi(dataNode["RepoId"].asString());
	if(!dataNode["Logo"].isNull())
		data_.logo = dataNode["Logo"].asString();
	if(!dataNode["RepoOriginType"].isNull())
		data_.repoOriginType = dataNode["RepoOriginType"].asString();
	if(!dataNode["CrUrl"].isNull())
		data_.crUrl = dataNode["CrUrl"].asString();
	if(!dataNode["RepoTag"].isNull())
		data_.repoTag = dataNode["RepoTag"].asString();
	if(!dataNode["RepoType"].isNull())
		data_.repoType = dataNode["RepoType"].asString();
	if(!dataNode["RepoName"].isNull())
		data_.repoName = dataNode["RepoName"].asString();
	if(!dataNode["RepoNamespace"].isNull())
		data_.repoNamespace = dataNode["RepoNamespace"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeApplicationImageResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationImageResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationImageResult::Data DescribeApplicationImageResult::getData()const
{
	return data_;
}

std::string DescribeApplicationImageResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationImageResult::getCode()const
{
	return code_;
}

bool DescribeApplicationImageResult::getSuccess()const
{
	return success_;
}

