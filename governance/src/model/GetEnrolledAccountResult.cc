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

#include <alibabacloud/governance/model/GetEnrolledAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

GetEnrolledAccountResult::GetEnrolledAccountResult() :
	ServiceResult()
{}

GetEnrolledAccountResult::GetEnrolledAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEnrolledAccountResult::~GetEnrolledAccountResult()
{}

void GetEnrolledAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaselineItemsNode = value["BaselineItems"]["BaselineItem"];
	for (auto valueBaselineItemsBaselineItem : allBaselineItemsNode)
	{
		BaselineItem baselineItemsObject;
		if(!valueBaselineItemsBaselineItem["Config"].isNull())
			baselineItemsObject.config = valueBaselineItemsBaselineItem["Config"].asString();
		if(!valueBaselineItemsBaselineItem["Name"].isNull())
			baselineItemsObject.name = valueBaselineItemsBaselineItem["Name"].asString();
		if(!valueBaselineItemsBaselineItem["Skip"].isNull())
			baselineItemsObject.skip = valueBaselineItemsBaselineItem["Skip"].asString() == "true";
		if(!valueBaselineItemsBaselineItem["Version"].isNull())
			baselineItemsObject.version = valueBaselineItemsBaselineItem["Version"].asString();
		baselineItems_.push_back(baselineItemsObject);
	}
	auto allProgressNode = value["Progress"]["Progres"];
	for (auto valueProgressProgres : allProgressNode)
	{
		Progres progressObject;
		if(!valueProgressProgres["Name"].isNull())
			progressObject.name = valueProgressProgres["Name"].asString();
		if(!valueProgressProgres["Status"].isNull())
			progressObject.status = valueProgressProgres["Status"].asString();
		progress_.push_back(progressObject);
	}
	auto errorInfoNode = value["ErrorInfo"];
	if(!errorInfoNode["Code"].isNull())
		errorInfo_.code = errorInfoNode["Code"].asString();
	if(!errorInfoNode["Message"].isNull())
		errorInfo_.message = errorInfoNode["Message"].asString();
	if(!errorInfoNode["Recommend"].isNull())
		errorInfo_.recommend = errorInfoNode["Recommend"].asString();
	if(!errorInfoNode["RequestId"].isNull())
		errorInfo_.requestId = errorInfoNode["RequestId"].asString();
	auto inputsNode = value["Inputs"];
	if(!inputsNode["AccountNamePrefix"].isNull())
		inputs_.accountNamePrefix = inputsNode["AccountNamePrefix"].asString();
	if(!inputsNode["AccountUid"].isNull())
		inputs_.accountUid = std::stol(inputsNode["AccountUid"].asString());
	if(!inputsNode["DisplayName"].isNull())
		inputs_.displayName = inputsNode["DisplayName"].asString();
	if(!inputsNode["FolderId"].isNull())
		inputs_.folderId = inputsNode["FolderId"].asString();
	if(!inputsNode["PayerAccountUid"].isNull())
		inputs_.payerAccountUid = std::stol(inputsNode["PayerAccountUid"].asString());
	auto allBaselineItems1Node = inputsNode["BaselineItems"]["BaselineItem"];
	for (auto inputsNodeBaselineItemsBaselineItem : allBaselineItems1Node)
	{
		Inputs::BaselineItem2 baselineItem2Object;
		if(!inputsNodeBaselineItemsBaselineItem["Config"].isNull())
			baselineItem2Object.config = inputsNodeBaselineItemsBaselineItem["Config"].asString();
		if(!inputsNodeBaselineItemsBaselineItem["Name"].isNull())
			baselineItem2Object.name = inputsNodeBaselineItemsBaselineItem["Name"].asString();
		if(!inputsNodeBaselineItemsBaselineItem["Skip"].isNull())
			baselineItem2Object.skip = inputsNodeBaselineItemsBaselineItem["Skip"].asString() == "true";
		if(!inputsNodeBaselineItemsBaselineItem["Version"].isNull())
			baselineItem2Object.version = inputsNodeBaselineItemsBaselineItem["Version"].asString();
		inputs_.baselineItems1.push_back(baselineItem2Object);
	}
	if(!value["AccountUid"].isNull())
		accountUid_ = std::stol(value["AccountUid"].asString());
	if(!value["BaselineId"].isNull())
		baselineId_ = value["BaselineId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["DisplayName"].isNull())
		displayName_ = value["DisplayName"].asString();
	if(!value["FolderId"].isNull())
		folderId_ = value["FolderId"].asString();
	if(!value["Initialized"].isNull())
		initialized_ = value["Initialized"].asString() == "true";
	if(!value["MasterAccountUid"].isNull())
		masterAccountUid_ = std::stol(value["MasterAccountUid"].asString());
	if(!value["PayerAccountUid"].isNull())
		payerAccountUid_ = std::stol(value["PayerAccountUid"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();

}

std::string GetEnrolledAccountResult::getBaselineId()const
{
	return baselineId_;
}

std::string GetEnrolledAccountResult::getStatus()const
{
	return status_;
}

std::vector<GetEnrolledAccountResult::Progres> GetEnrolledAccountResult::getProgress()const
{
	return progress_;
}

bool GetEnrolledAccountResult::getInitialized()const
{
	return initialized_;
}

long GetEnrolledAccountResult::getMasterAccountUid()const
{
	return masterAccountUid_;
}

GetEnrolledAccountResult::ErrorInfo GetEnrolledAccountResult::getErrorInfo()const
{
	return errorInfo_;
}

std::string GetEnrolledAccountResult::getCreateTime()const
{
	return createTime_;
}

std::string GetEnrolledAccountResult::getFolderId()const
{
	return folderId_;
}

long GetEnrolledAccountResult::getAccountUid()const
{
	return accountUid_;
}

std::vector<GetEnrolledAccountResult::BaselineItem> GetEnrolledAccountResult::getBaselineItems()const
{
	return baselineItems_;
}

std::string GetEnrolledAccountResult::getDisplayName()const
{
	return displayName_;
}

std::string GetEnrolledAccountResult::getUpdateTime()const
{
	return updateTime_;
}

GetEnrolledAccountResult::Inputs GetEnrolledAccountResult::getInputs()const
{
	return inputs_;
}

long GetEnrolledAccountResult::getPayerAccountUid()const
{
	return payerAccountUid_;
}

