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

#include <alibabacloud/qianzhou/model/QueryByInstanceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qianzhou;
using namespace AlibabaCloud::Qianzhou::Model;

QueryByInstanceInfoResult::QueryByInstanceInfoResult() :
	ServiceResult()
{}

QueryByInstanceInfoResult::QueryByInstanceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryByInstanceInfoResult::~QueryByInstanceInfoResult()
{}

void QueryByInstanceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["dataItem"];
	for (auto valuedatadataItem : alldataNode)
	{
		DataItem dataObject;
		if(!valuedatadataItem["clusterId"].isNull())
			dataObject.clusterId = valuedatadataItem["clusterId"].asString();
		if(!valuedatadataItem["clusterName"].isNull())
			dataObject.clusterName = valuedatadataItem["clusterName"].asString();
		if(!valuedatadataItem["instanceId"].isNull())
			dataObject.instanceId = valuedatadataItem["instanceId"].asString();
		if(!valuedatadataItem["regionId"].isNull())
			dataObject.regionId = valuedatadataItem["regionId"].asString();
		if(!valuedatadataItem["uid"].isNull())
			dataObject.uid = valuedatadataItem["uid"].asString();
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = std::stoi(value["code"].asString());
	if(!value["msg"].isNull())
		msg_ = value["msg"].asString();

}

std::string QueryByInstanceInfoResult::getMsg()const
{
	return msg_;
}

std::vector<QueryByInstanceInfoResult::DataItem> QueryByInstanceInfoResult::getdata()const
{
	return data_;
}

std::string QueryByInstanceInfoResult::getRequestId()const
{
	return requestId_;
}

int QueryByInstanceInfoResult::getCode()const
{
	return code_;
}

