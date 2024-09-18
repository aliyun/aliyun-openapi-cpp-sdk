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

#include <alibabacloud/quickbi-public/model/QueryApprovalInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryApprovalInfoResult::QueryApprovalInfoResult() :
	ServiceResult()
{}

QueryApprovalInfoResult::QueryApprovalInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryApprovalInfoResult::~QueryApprovalInfoResult()
{}

void QueryApprovalInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Page"].isNull())
		result_.page = std::stoi(resultNode["Page"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["Start"].isNull())
		result_.start = std::stoi(resultNode["Start"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stoi(resultNode["Total"].asString());
	if(!resultNode["TotalPages"].isNull())
		result_.totalPages = std::stoi(resultNode["TotalPages"].asString());
	auto allDataNode = resultNode["Data"]["ApprovalsResultModel"];
	for (auto resultNodeDataApprovalsResultModel : allDataNode)
	{
		Result::ApprovalsResultModel approvalsResultModelObject;
		if(!resultNodeDataApprovalsResultModel["ApplicantId"].isNull())
			approvalsResultModelObject.applicantId = resultNodeDataApprovalsResultModel["ApplicantId"].asString();
		if(!resultNodeDataApprovalsResultModel["ApplicantName"].isNull())
			approvalsResultModelObject.applicantName = resultNodeDataApprovalsResultModel["ApplicantName"].asString();
		if(!resultNodeDataApprovalsResultModel["ApplicationId"].isNull())
			approvalsResultModelObject.applicationId = resultNodeDataApprovalsResultModel["ApplicationId"].asString();
		if(!resultNodeDataApprovalsResultModel["ApplyReason"].isNull())
			approvalsResultModelObject.applyReason = resultNodeDataApprovalsResultModel["ApplyReason"].asString();
		if(!resultNodeDataApprovalsResultModel["ApproverId"].isNull())
			approvalsResultModelObject.approverId = resultNodeDataApprovalsResultModel["ApproverId"].asString();
		if(!resultNodeDataApprovalsResultModel["ApproverName"].isNull())
			approvalsResultModelObject.approverName = resultNodeDataApprovalsResultModel["ApproverName"].asString();
		if(!resultNodeDataApprovalsResultModel["DeleteFlag"].isNull())
			approvalsResultModelObject.deleteFlag = resultNodeDataApprovalsResultModel["DeleteFlag"].asString() == "true";
		if(!resultNodeDataApprovalsResultModel["ExpireDate"].isNull())
			approvalsResultModelObject.expireDate = std::stol(resultNodeDataApprovalsResultModel["ExpireDate"].asString());
		if(!resultNodeDataApprovalsResultModel["FlagStatus"].isNull())
			approvalsResultModelObject.flagStatus = std::stoi(resultNodeDataApprovalsResultModel["FlagStatus"].asString());
		if(!resultNodeDataApprovalsResultModel["GmtCreate"].isNull())
			approvalsResultModelObject.gmtCreate = std::stol(resultNodeDataApprovalsResultModel["GmtCreate"].asString());
		if(!resultNodeDataApprovalsResultModel["GmtModified"].isNull())
			approvalsResultModelObject.gmtModified = std::stol(resultNodeDataApprovalsResultModel["GmtModified"].asString());
		if(!resultNodeDataApprovalsResultModel["HandleReason"].isNull())
			approvalsResultModelObject.handleReason = resultNodeDataApprovalsResultModel["HandleReason"].asString();
		if(!resultNodeDataApprovalsResultModel["ResourceId"].isNull())
			approvalsResultModelObject.resourceId = resultNodeDataApprovalsResultModel["ResourceId"].asString();
		if(!resultNodeDataApprovalsResultModel["ResourceName"].isNull())
			approvalsResultModelObject.resourceName = resultNodeDataApprovalsResultModel["ResourceName"].asString();
		if(!resultNodeDataApprovalsResultModel["ResourceType"].isNull())
			approvalsResultModelObject.resourceType = resultNodeDataApprovalsResultModel["ResourceType"].asString();
		if(!resultNodeDataApprovalsResultModel["WorkspaceName"].isNull())
			approvalsResultModelObject.workspaceName = resultNodeDataApprovalsResultModel["WorkspaceName"].asString();
		result_.data.push_back(approvalsResultModelObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryApprovalInfoResult::getSuccess()const
{
	return success_;
}

QueryApprovalInfoResult::Result QueryApprovalInfoResult::getResult()const
{
	return result_;
}

