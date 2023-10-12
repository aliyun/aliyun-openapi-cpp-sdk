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

#include <alibabacloud/dms-enterprise/model/GetOrderBaseInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetOrderBaseInfoResult::GetOrderBaseInfoResult() :
	ServiceResult()
{}

GetOrderBaseInfoResult::GetOrderBaseInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOrderBaseInfoResult::~GetOrderBaseInfoResult()
{}

void GetOrderBaseInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto orderBaseInfoNode = value["OrderBaseInfo"];
	if(!orderBaseInfoNode["Comment"].isNull())
		orderBaseInfo_.comment = orderBaseInfoNode["Comment"].asString();
	if(!orderBaseInfoNode["CreateTime"].isNull())
		orderBaseInfo_.createTime = orderBaseInfoNode["CreateTime"].asString();
	if(!orderBaseInfoNode["Committer"].isNull())
		orderBaseInfo_.committer = orderBaseInfoNode["Committer"].asString();
	if(!orderBaseInfoNode["WorkflowInstanceId"].isNull())
		orderBaseInfo_.workflowInstanceId = std::stol(orderBaseInfoNode["WorkflowInstanceId"].asString());
	if(!orderBaseInfoNode["CommitterId"].isNull())
		orderBaseInfo_.committerId = std::stol(orderBaseInfoNode["CommitterId"].asString());
	if(!orderBaseInfoNode["LastModifyTime"].isNull())
		orderBaseInfo_.lastModifyTime = orderBaseInfoNode["LastModifyTime"].asString();
	if(!orderBaseInfoNode["StatusCode"].isNull())
		orderBaseInfo_.statusCode = orderBaseInfoNode["StatusCode"].asString();
	if(!orderBaseInfoNode["WorkflowStatusDesc"].isNull())
		orderBaseInfo_.workflowStatusDesc = orderBaseInfoNode["WorkflowStatusDesc"].asString();
	if(!orderBaseInfoNode["StatusDesc"].isNull())
		orderBaseInfo_.statusDesc = orderBaseInfoNode["StatusDesc"].asString();
	if(!orderBaseInfoNode["PluginType"].isNull())
		orderBaseInfo_.pluginType = orderBaseInfoNode["PluginType"].asString();
	if(!orderBaseInfoNode["OrderId"].isNull())
		orderBaseInfo_.orderId = std::stol(orderBaseInfoNode["OrderId"].asString());
	if(!orderBaseInfoNode["AttachmentKey"].isNull())
		orderBaseInfo_.attachmentKey = orderBaseInfoNode["AttachmentKey"].asString();
	if(!orderBaseInfoNode["OriginAttachmentName"].isNull())
		orderBaseInfo_.originAttachmentName = orderBaseInfoNode["OriginAttachmentName"].asString();
		auto allRelatedUserNickList = orderBaseInfoNode["RelatedUserNickList"]["UserNicks"];
		for (auto value : allRelatedUserNickList)
			orderBaseInfo_.relatedUserNickList.push_back(value.asString());
		auto allRelatedUserList = orderBaseInfoNode["RelatedUserList"]["UserIds"];
		for (auto value : allRelatedUserList)
			orderBaseInfo_.relatedUserList.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetOrderBaseInfoResult::OrderBaseInfo GetOrderBaseInfoResult::getOrderBaseInfo()const
{
	return orderBaseInfo_;
}

std::string GetOrderBaseInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetOrderBaseInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetOrderBaseInfoResult::getSuccess()const
{
	return success_;
}

