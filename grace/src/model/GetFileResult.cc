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

#include <alibabacloud/grace/model/GetFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Grace;
using namespace AlibabaCloud::Grace::Model;

GetFileResult::GetFileResult() :
	ServiceResult()
{}

GetFileResult::GetFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFileResult::~GetFileResult()
{}

void GetFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto analyzeProgressNode = value["analyzeProgress"];
	if(!analyzeProgressNode["message"].isNull())
		analyzeProgress_.message = analyzeProgressNode["message"].asString();
	if(!analyzeProgressNode["percent"].isNull())
		analyzeProgress_.percent = analyzeProgressNode["percent"].asString();
	if(!analyzeProgressNode["state"].isNull())
		analyzeProgress_.state = analyzeProgressNode["state"].asString();
	auto transferProgressNode = value["transferProgress"];
	if(!transferProgressNode["totalSize"].isNull())
		transferProgress_.totalSize = std::stol(transferProgressNode["totalSize"].asString());
	if(!transferProgressNode["transferredSize"].isNull())
		transferProgress_.transferredSize = std::stol(transferProgressNode["transferredSize"].asString());
	if(!value["type"].isNull())
		type_ = value["type"].asString();
	if(!value["size"].isNull())
		size_ = std::stol(value["size"].asString());
	if(!value["creationTime"].isNull())
		creationTime_ = std::stol(value["creationTime"].asString());
	if(!value["displayName"].isNull())
		displayName_ = value["displayName"].asString();
	if(!value["labels"].isNull())
		labels_ = value["labels"].asString();
	if(!value["shared"].isNull())
		shared_ = value["shared"].asString() == "true";
	if(!value["transferState"].isNull())
		transferState_ = value["transferState"].asString();
	if(!value["name"].isNull())
		name_ = value["name"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetFileResult::getType()const
{
	return type_;
}

std::string GetFileResult::getRequestId()const
{
	return requestId_;
}

long GetFileResult::getSize()const
{
	return size_;
}

GetFileResult::AnalyzeProgress GetFileResult::getAnalyzeProgress()const
{
	return analyzeProgress_;
}

long GetFileResult::getCreationTime()const
{
	return creationTime_;
}

std::string GetFileResult::getDisplayName()const
{
	return displayName_;
}

std::string GetFileResult::getLabels()const
{
	return labels_;
}

bool GetFileResult::getShared()const
{
	return shared_;
}

std::string GetFileResult::getTransferState()const
{
	return transferState_;
}

GetFileResult::TransferProgress GetFileResult::getTransferProgress()const
{
	return transferProgress_;
}

std::string GetFileResult::getName()const
{
	return name_;
}

