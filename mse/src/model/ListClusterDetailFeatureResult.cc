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

#include <alibabacloud/mse/model/ListClusterDetailFeatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListClusterDetailFeatureResult::ListClusterDetailFeatureResult() :
	ServiceResult()
{}

ListClusterDetailFeatureResult::ListClusterDetailFeatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterDetailFeatureResult::~ListClusterDetailFeatureResult()
{}

void ListClusterDetailFeatureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["FeatureId"].isNull())
			dataObject.featureId = valueDatadataItem["FeatureId"].asString();
		if(!valueDatadataItem["Status"].isNull())
			dataObject.status = valueDatadataItem["Status"].asString();
		if(!valueDatadataItem["Message"].isNull())
			dataObject.message = valueDatadataItem["Message"].asString();
		if(!valueDatadataItem["Extend"].isNull())
			dataObject.extend = valueDatadataItem["Extend"].asString();
		if(!valueDatadataItem["OrderNum"].isNull())
			dataObject.orderNum = valueDatadataItem["OrderNum"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();

}

std::string ListClusterDetailFeatureResult::getHttpCode()const
{
	return httpCode_;
}

std::string ListClusterDetailFeatureResult::getMessage()const
{
	return message_;
}

std::vector<ListClusterDetailFeatureResult::DataItem> ListClusterDetailFeatureResult::getData()const
{
	return data_;
}

std::string ListClusterDetailFeatureResult::getErrorCode()const
{
	return errorCode_;
}

bool ListClusterDetailFeatureResult::getSuccess()const
{
	return success_;
}

