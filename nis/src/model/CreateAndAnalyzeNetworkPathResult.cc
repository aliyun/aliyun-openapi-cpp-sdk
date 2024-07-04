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

#include <alibabacloud/nis/model/CreateAndAnalyzeNetworkPathResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

CreateAndAnalyzeNetworkPathResult::CreateAndAnalyzeNetworkPathResult() :
	ServiceResult()
{}

CreateAndAnalyzeNetworkPathResult::CreateAndAnalyzeNetworkPathResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAndAnalyzeNetworkPathResult::~CreateAndAnalyzeNetworkPathResult()
{}

void CreateAndAnalyzeNetworkPathResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NetworkReachableAnalysisId"].isNull())
		networkReachableAnalysisId_ = value["NetworkReachableAnalysisId"].asString();
	if(!value["SourceId"].isNull())
		sourceId_ = value["SourceId"].asString();
	if(!value["TargetId"].isNull())
		targetId_ = value["TargetId"].asString();
	if(!value["SourceType"].isNull())
		sourceType_ = value["SourceType"].asString();
	if(!value["TargetType"].isNull())
		targetType_ = value["TargetType"].asString();
	if(!value["SourcePort"].isNull())
		sourcePort_ = value["SourcePort"].asString();
	if(!value["TargetPort"].isNull())
		targetPort_ = value["TargetPort"].asString();
	if(!value["Protocol"].isNull())
		protocol_ = value["Protocol"].asString();
	if(!value["SourceIpAddress"].isNull())
		sourceIpAddress_ = value["SourceIpAddress"].asString();
	if(!value["TargetIpAddress"].isNull())
		targetIpAddress_ = value["TargetIpAddress"].asString();

}

std::string CreateAndAnalyzeNetworkPathResult::getTargetPort()const
{
	return targetPort_;
}

std::string CreateAndAnalyzeNetworkPathResult::getNetworkReachableAnalysisId()const
{
	return networkReachableAnalysisId_;
}

std::string CreateAndAnalyzeNetworkPathResult::getSourceId()const
{
	return sourceId_;
}

std::string CreateAndAnalyzeNetworkPathResult::getSourceType()const
{
	return sourceType_;
}

std::string CreateAndAnalyzeNetworkPathResult::getTargetType()const
{
	return targetType_;
}

std::string CreateAndAnalyzeNetworkPathResult::getSourcePort()const
{
	return sourcePort_;
}

std::string CreateAndAnalyzeNetworkPathResult::getProtocol()const
{
	return protocol_;
}

std::string CreateAndAnalyzeNetworkPathResult::getTargetId()const
{
	return targetId_;
}

std::string CreateAndAnalyzeNetworkPathResult::getSourceIpAddress()const
{
	return sourceIpAddress_;
}

std::string CreateAndAnalyzeNetworkPathResult::getTargetIpAddress()const
{
	return targetIpAddress_;
}

