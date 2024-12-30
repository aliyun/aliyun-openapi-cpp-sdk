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

#include <alibabacloud/quickbi-public/model/GetDataSourceConnectionInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

GetDataSourceConnectionInfoResult::GetDataSourceConnectionInfoResult() :
	ServiceResult()
{}

GetDataSourceConnectionInfoResult::GetDataSourceConnectionInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataSourceConnectionInfoResult::~GetDataSourceConnectionInfoResult()
{}

void GetDataSourceConnectionInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Address"].isNull())
		result_.address = resultNode["Address"].asString();
	if(!resultNode["AuthLevel"].isNull())
		result_.authLevel = resultNode["AuthLevel"].asString();
	if(!resultNode["CreatorId"].isNull())
		result_.creatorId = resultNode["CreatorId"].asString();
	if(!resultNode["DsId"].isNull())
		result_.dsId = resultNode["DsId"].asString();
	if(!resultNode["DsType"].isNull())
		result_.dsType = resultNode["DsType"].asString();
	if(!resultNode["DsVersion"].isNull())
		result_.dsVersion = resultNode["DsVersion"].asString();
	if(!resultNode["Instance"].isNull())
		result_.instance = resultNode["Instance"].asString();
	if(!resultNode["InstanceId"].isNull())
		result_.instanceId = resultNode["InstanceId"].asString();
	if(!resultNode["ModifyUser"].isNull())
		result_.modifyUser = resultNode["ModifyUser"].asString();
	if(!resultNode["NoSasl"].isNull())
		result_.noSasl = resultNode["NoSasl"].asString() == "true";
	if(!resultNode["ParentDsType"].isNull())
		result_.parentDsType = resultNode["ParentDsType"].asString();
	if(!resultNode["Port"].isNull())
		result_.port = resultNode["Port"].asString();
	if(!resultNode["Project"].isNull())
		result_.project = resultNode["Project"].asString();
	if(!resultNode["Schema"].isNull())
		result_.schema = resultNode["Schema"].asString();
	if(!resultNode["ShowName"].isNull())
		result_.showName = resultNode["ShowName"].asString();
	if(!resultNode["WorkspaceId"].isNull())
		result_.workspaceId = resultNode["WorkspaceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool GetDataSourceConnectionInfoResult::getSuccess()const
{
	return success_;
}

GetDataSourceConnectionInfoResult::Result GetDataSourceConnectionInfoResult::getResult()const
{
	return result_;
}

