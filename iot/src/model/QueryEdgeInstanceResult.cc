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

#include <alibabacloud/iot/model/QueryEdgeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryEdgeInstanceResult::QueryEdgeInstanceResult() :
	ServiceResult()
{}

QueryEdgeInstanceResult::QueryEdgeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEdgeInstanceResult::~QueryEdgeInstanceResult()
{}

void QueryEdgeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	auto allInstanceList = value["InstanceList"]["Instance"];
	for (auto value : allInstanceList)
	{
		Data::Instance instanceObject;
		if(!value["InstanceId"].isNull())
			instanceObject.instanceId = value["InstanceId"].asString();
		if(!value["Name"].isNull())
			instanceObject.name = value["Name"].asString();
		if(!value["Tags"].isNull())
			instanceObject.tags = value["Tags"].asString();
		if(!value["GmtCreate"].isNull())
			instanceObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			instanceObject.gmtModified = value["GmtModified"].asString();
		if(!value["RoleArn"].isNull())
			instanceObject.roleArn = value["RoleArn"].asString();
		if(!value["RoleName"].isNull())
			instanceObject.roleName = value["RoleName"].asString();
		if(!value["RoleAttachTime"].isNull())
			instanceObject.roleAttachTime = value["RoleAttachTime"].asString();
		if(!value["Spec"].isNull())
			instanceObject.spec = std::stoi(value["Spec"].asString());
		if(!value["BizEnable"].isNull())
			instanceObject.bizEnable = value["BizEnable"].asString() == "true";
		if(!value["LatestDeploymentStatus"].isNull())
			instanceObject.latestDeploymentStatus = std::stoi(value["LatestDeploymentStatus"].asString());
		if(!value["LatestDeploymentType"].isNull())
			instanceObject.latestDeploymentType = value["LatestDeploymentType"].asString();
		data_.instanceList.push_back(instanceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryEdgeInstanceResult::Data QueryEdgeInstanceResult::getData()const
{
	return data_;
}

std::string QueryEdgeInstanceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryEdgeInstanceResult::getCode()const
{
	return code_;
}

bool QueryEdgeInstanceResult::getSuccess()const
{
	return success_;
}

