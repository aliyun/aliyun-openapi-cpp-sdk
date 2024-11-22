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

#include <alibabacloud/qianzhou/model/ListClusterImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qianzhou;
using namespace AlibabaCloud::Qianzhou::Model;

ListClusterImagesResult::ListClusterImagesResult() :
	ServiceResult()
{}

ListClusterImagesResult::ListClusterImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterImagesResult::~ListClusterImagesResult()
{}

void ListClusterImagesResult::parse(const std::string &payload)
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
		if(!datasNodedatadataItem["namespace"].isNull())
			dataItemObject._namespace = datasNodedatadataItem["namespace"].asString();
		if(!datasNodedatadataItem["image_name"].isNull())
			dataItemObject.image_name = datasNodedatadataItem["image_name"].asString();
		if(!datasNodedatadataItem["image_hash"].isNull())
			dataItemObject.image_hash = datasNodedatadataItem["image_hash"].asString();
		if(!datasNodedatadataItem["controller_type"].isNull())
			dataItemObject.controller_type = datasNodedatadataItem["controller_type"].asString();
		if(!datasNodedatadataItem["controller_name"].isNull())
			dataItemObject.controller_name = datasNodedatadataItem["controller_name"].asString();
		if(!datasNodedatadataItem["created"].isNull())
			dataItemObject.created = datasNodedatadataItem["created"].asString();
		if(!datasNodedatadataItem["updated"].isNull())
			dataItemObject.updated = datasNodedatadataItem["updated"].asString();
		if(!datasNodedatadataItem["uid"].isNull())
			dataItemObject.uid = datasNodedatadataItem["uid"].asString();
		datas_.data.push_back(dataItemObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = std::stoi(value["code"].asString());
	if(!value["msg"].isNull())
		msg_ = value["msg"].asString();

}

std::string ListClusterImagesResult::getMsg()const
{
	return msg_;
}

std::string ListClusterImagesResult::getRequestId()const
{
	return requestId_;
}

ListClusterImagesResult::Datas ListClusterImagesResult::getDatas()const
{
	return datas_;
}

int ListClusterImagesResult::getCode()const
{
	return code_;
}

