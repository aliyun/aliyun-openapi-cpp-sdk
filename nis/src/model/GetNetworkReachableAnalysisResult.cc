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

#include <alibabacloud/nis/model/GetNetworkReachableAnalysisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

GetNetworkReachableAnalysisResult::GetNetworkReachableAnalysisResult() :
	ServiceResult()
{}

GetNetworkReachableAnalysisResult::GetNetworkReachableAnalysisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNetworkReachableAnalysisResult::~GetNetworkReachableAnalysisResult()
{}

void GetNetworkReachableAnalysisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NetworkPathId"].isNull())
		networkPathId_ = value["NetworkPathId"].asString();
	if(!value["NetworkReachableAnalysisId"].isNull())
		networkReachableAnalysisId_ = value["NetworkReachableAnalysisId"].asString();
	if(!value["NetworkReachableAnalysisStatus"].isNull())
		networkReachableAnalysisStatus_ = value["NetworkReachableAnalysisStatus"].asString();
	if(!value["NetworkReachableAnalysisResult"].isNull())
		networkReachableAnalysisResult_ = value["NetworkReachableAnalysisResult"].asString();
	if(!value["Reachable"].isNull())
		reachable_ = value["Reachable"].asString() == "true";
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["AliUid"].isNull())
		aliUid_ = std::stol(value["AliUid"].asString());
	if(!value["NetworkPathParameter"].isNull())
		networkPathParameter_ = value["NetworkPathParameter"].asString();

}

std::string GetNetworkReachableAnalysisResult::getNetworkReachableAnalysisId()const
{
	return networkReachableAnalysisId_;
}

std::string GetNetworkReachableAnalysisResult::getCreateTime()const
{
	return createTime_;
}

bool GetNetworkReachableAnalysisResult::getReachable()const
{
	return reachable_;
}

std::string GetNetworkReachableAnalysisResult::getNetworkPathId()const
{
	return networkPathId_;
}

std::string GetNetworkReachableAnalysisResult::getNetworkReachableAnalysisResult()const
{
	return networkReachableAnalysisResult_;
}

std::string GetNetworkReachableAnalysisResult::getNetworkReachableAnalysisStatus()const
{
	return networkReachableAnalysisStatus_;
}

long GetNetworkReachableAnalysisResult::getAliUid()const
{
	return aliUid_;
}

std::string GetNetworkReachableAnalysisResult::getNetworkPathParameter()const
{
	return networkPathParameter_;
}

