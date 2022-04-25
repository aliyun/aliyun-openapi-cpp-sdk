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

#include <alibabacloud/dataworks-public/model/GetMetaDBInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaDBInfoResult::GetMetaDBInfoResult() :
	ServiceResult()
{}

GetMetaDBInfoResult::GetMetaDBInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaDBInfoResult::~GetMetaDBInfoResult()
{}

void GetMetaDBInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Comment"].isNull())
		data_.comment = dataNode["Comment"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["ProjectName"].isNull())
		data_.projectName = dataNode["ProjectName"].asString();
	if(!dataNode["AppGuid"].isNull())
		data_.appGuid = dataNode["AppGuid"].asString();
	if(!dataNode["OwnerName"].isNull())
		data_.ownerName = dataNode["OwnerName"].asString();
	if(!dataNode["OwnerId"].isNull())
		data_.ownerId = dataNode["OwnerId"].asString();
	if(!dataNode["EnvType"].isNull())
		data_.envType = std::stoi(dataNode["EnvType"].asString());
	if(!dataNode["ProjectNameCn"].isNull())
		data_.projectNameCn = dataNode["ProjectNameCn"].asString();
	if(!dataNode["Endpoint"].isNull())
		data_.endpoint = dataNode["Endpoint"].asString();
	if(!dataNode["ClusterBizId"].isNull())
		data_.clusterBizId = dataNode["ClusterBizId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Location"].isNull())
		data_.location = dataNode["Location"].asString();
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = std::stol(dataNode["TenantId"].asString());
	if(!dataNode["ModifyTime"].isNull())
		data_.modifyTime = std::stol(dataNode["ModifyTime"].asString());

}

GetMetaDBInfoResult::Data GetMetaDBInfoResult::getData()const
{
	return data_;
}

