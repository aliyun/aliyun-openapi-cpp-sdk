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

#include <alibabacloud/airec/model/ListUserClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListUserClustersResult::ListUserClustersResult() :
	ServiceResult()
{}

ListUserClustersResult::ListUserClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserClustersResult::~ListUserClustersResult()
{}

void ListUserClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["userCluster"];
	for (auto valueresultuserCluster : allresultNode)
	{
		UserCluster resultObject;
		if(!valueresultuserCluster["name"].isNull())
			resultObject.name = valueresultuserCluster["name"].asString();
		if(!valueresultuserCluster["status"].isNull())
			resultObject.status = valueresultuserCluster["status"].asString();
		if(!valueresultuserCluster["gmtCreate"].isNull())
			resultObject.gmtCreate = valueresultuserCluster["gmtCreate"].asString();
		if(!valueresultuserCluster["gmtModified"].isNull())
			resultObject.gmtModified = valueresultuserCluster["gmtModified"].asString();
		auto metaNode = value["meta"];
		if(!metaNode["metaType"].isNull())
			resultObject.meta.metaType = metaNode["metaType"].asString();
		if(!metaNode["description"].isNull())
			resultObject.meta.description = metaNode["description"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListUserClustersResult::UserCluster> ListUserClustersResult::getresult()const
{
	return result_;
}

std::string ListUserClustersResult::getRequestId()const
{
	return requestId_;
}

ListUserClustersResult::Headers ListUserClustersResult::getHeaders()const
{
	return headers_;
}

