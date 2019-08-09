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

#include <alibabacloud/emr/model/ListJobMigrateInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListJobMigrateInfoResult::ListJobMigrateInfoResult() :
	ServiceResult()
{}

ListJobMigrateInfoResult::ListJobMigrateInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobMigrateInfoResult::~ListJobMigrateInfoResult()
{}

void ListJobMigrateInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allJobMigrateInfoList = value["JobMigrateInfoList"]["JobMigrateInfo"];
	for (auto value : allJobMigrateInfoList)
	{
		JobMigrateInfo jobMigrateInfoListObject;
		if(!value["Id"].isNull())
			jobMigrateInfoListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			jobMigrateInfoListObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			jobMigrateInfoListObject.type = value["Type"].asString();
		if(!value["MaxRetry"].isNull())
			jobMigrateInfoListObject.maxRetry = std::stoi(value["MaxRetry"].asString());
		if(!value["FailedAction"].isNull())
			jobMigrateInfoListObject.failedAction = value["FailedAction"].asString();
		if(!value["Params"].isNull())
			jobMigrateInfoListObject.params = value["Params"].asString();
		if(!value["NewId"].isNull())
			jobMigrateInfoListObject.newId = value["NewId"].asString();
		if(!value["PremigratedDate"].isNull())
			jobMigrateInfoListObject.premigratedDate = value["PremigratedDate"].asString();
		if(!value["MigratedDate"].isNull())
			jobMigrateInfoListObject.migratedDate = value["MigratedDate"].asString();
		if(!value["CreateTime"].isNull())
			jobMigrateInfoListObject.createTime = value["CreateTime"].asString();
		jobMigrateInfoList_.push_back(jobMigrateInfoListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListJobMigrateInfoResult::getTotal()const
{
	return total_;
}

std::vector<ListJobMigrateInfoResult::JobMigrateInfo> ListJobMigrateInfoResult::getJobMigrateInfoList()const
{
	return jobMigrateInfoList_;
}

