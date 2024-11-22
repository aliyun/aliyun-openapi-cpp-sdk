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

#include <alibabacloud/qianzhou/model/ListClusterDeprecatedAPIResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qianzhou;
using namespace AlibabaCloud::Qianzhou::Model;

ListClusterDeprecatedAPIResult::ListClusterDeprecatedAPIResult() :
	ServiceResult()
{}

ListClusterDeprecatedAPIResult::ListClusterDeprecatedAPIResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterDeprecatedAPIResult::~ListClusterDeprecatedAPIResult()
{}

void ListClusterDeprecatedAPIResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto datasNode = value["datas"];
	if(!datasNode["total"].isNull())
		datas_.total = std::stoi(datasNode["total"].asString());
	if(!datasNode["pageSize"].isNull())
		datas_.pageSize = std::stoi(datasNode["pageSize"].asString());
	if(!datasNode["current"].isNull())
		datas_.current = std::stoi(datasNode["current"].asString());
	auto alldataNode = datasNode["data"]["dataItem"];
	for (auto datasNodedatadataItem : alldataNode)
	{
		Datas::DataItem dataItemObject;
		if(!datasNodedatadataItem["cluster_id"].isNull())
			dataItemObject.cluster_id = datasNodedatadataItem["cluster_id"].asString();
		if(!datasNodedatadataItem["current_version"].isNull())
			dataItemObject.current_version = datasNodedatadataItem["current_version"].asString();
		if(!datasNodedatadataItem["target_version"].isNull())
			dataItemObject.target_version = datasNodedatadataItem["target_version"].asString();
		if(!datasNodedatadataItem["request_uri"].isNull())
			dataItemObject.request_uri = datasNodedatadataItem["request_uri"].asString();
		if(!datasNodedatadataItem["user_agent"].isNull())
			dataItemObject.user_agent = datasNodedatadataItem["user_agent"].asString();
		if(!datasNodedatadataItem["label"].isNull())
			dataItemObject.label = datasNodedatadataItem["label"].asString();
		if(!datasNodedatadataItem["count"].isNull())
			dataItemObject.count = std::stoi(datasNodedatadataItem["count"].asString());
		if(!datasNodedatadataItem["content"].isNull())
			dataItemObject.content = datasNodedatadataItem["content"].asString();
		if(!datasNodedatadataItem["deprecated_k8s_version"].isNull())
			dataItemObject.deprecated_k8s_version = datasNodedatadataItem["deprecated_k8s_version"].asString();
		if(!datasNodedatadataItem["source_ips"].isNull())
			dataItemObject.source_ips = datasNodedatadataItem["source_ips"].asString();
		if(!datasNodedatadataItem["last_time"].isNull())
			dataItemObject.last_time = datasNodedatadataItem["last_time"].asString();
		if(!datasNodedatadataItem["ds"].isNull())
			dataItemObject.ds = datasNodedatadataItem["ds"].asString();
		datas_.data.push_back(dataItemObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = std::stoi(value["code"].asString());
	if(!value["msg"].isNull())
		msg_ = value["msg"].asString();

}

std::string ListClusterDeprecatedAPIResult::getMsg()const
{
	return msg_;
}

std::string ListClusterDeprecatedAPIResult::getRequestId()const
{
	return requestId_;
}

ListClusterDeprecatedAPIResult::Datas ListClusterDeprecatedAPIResult::getDatas()const
{
	return datas_;
}

int ListClusterDeprecatedAPIResult::getCode()const
{
	return code_;
}

