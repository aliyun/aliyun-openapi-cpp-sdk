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

#include <alibabacloud/qualitycheck/model/GetDataSetListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetDataSetListResult::GetDataSetListResult() :
	ServiceResult()
{}

GetDataSetListResult::GetDataSetListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataSetListResult::~GetDataSetListResult()
{}

void GetDataSetListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataSet"];
	for (auto valueDataDataSet : allDataNode)
	{
		DataSet dataObject;
		if(!valueDataDataSet["SetId"].isNull())
			dataObject.setId = std::stol(valueDataDataSet["SetId"].asString());
		if(!valueDataDataSet["SetName"].isNull())
			dataObject.setName = valueDataDataSet["SetName"].asString();
		if(!valueDataDataSet["SetDomain"].isNull())
			dataObject.setDomain = valueDataDataSet["SetDomain"].asString();
		if(!valueDataDataSet["SetRoleArn"].isNull())
			dataObject.setRoleArn = valueDataDataSet["SetRoleArn"].asString();
		if(!valueDataDataSet["SetBucketName"].isNull())
			dataObject.setBucketName = valueDataDataSet["SetBucketName"].asString();
		if(!valueDataDataSet["SetFolderName"].isNull())
			dataObject.setFolderName = valueDataDataSet["SetFolderName"].asString();
		if(!valueDataDataSet["ChannelType"].isNull())
			dataObject.channelType = std::stoi(valueDataDataSet["ChannelType"].asString());
		if(!valueDataDataSet["CreateType"].isNull())
			dataObject.createType = std::stoi(valueDataDataSet["CreateType"].asString());
		if(!valueDataDataSet["CreateTime"].isNull())
			dataObject.createTime = valueDataDataSet["CreateTime"].asString();
		if(!valueDataDataSet["UpdateTime"].isNull())
			dataObject.updateTime = valueDataDataSet["UpdateTime"].asString();
		if(!valueDataDataSet["SetNumber"].isNull())
			dataObject.setNumber = std::stoi(valueDataDataSet["SetNumber"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string GetDataSetListResult::getMessage()const
{
	return message_;
}

std::vector<GetDataSetListResult::DataSet> GetDataSetListResult::getData()const
{
	return data_;
}

int GetDataSetListResult::getCount()const
{
	return count_;
}

std::string GetDataSetListResult::getCode()const
{
	return code_;
}

bool GetDataSetListResult::getSuccess()const
{
	return success_;
}

