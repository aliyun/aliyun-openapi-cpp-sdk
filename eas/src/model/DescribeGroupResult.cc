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

#include <alibabacloud/eas/model/DescribeGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeGroupResult::DescribeGroupResult() :
	ServiceResult()
{}

DescribeGroupResult::DescribeGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupResult::~DescribeGroupResult()
{}

void DescribeGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["QueueService"].isNull())
		queueService_ = value["QueueService"].asString();
	if(!value["InternetEndpoint"].isNull())
		internetEndpoint_ = value["InternetEndpoint"].asString();
	if(!value["IntranetEndpoint"].isNull())
		intranetEndpoint_ = value["IntranetEndpoint"].asString();
	if(!value["AccessToken"].isNull())
		accessToken_ = value["AccessToken"].asString();

}

std::string DescribeGroupResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeGroupResult::getAccessToken()const
{
	return accessToken_;
}

std::string DescribeGroupResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeGroupResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeGroupResult::getInternetEndpoint()const
{
	return internetEndpoint_;
}

std::string DescribeGroupResult::getQueueService()const
{
	return queueService_;
}

std::string DescribeGroupResult::getIntranetEndpoint()const
{
	return intranetEndpoint_;
}

std::string DescribeGroupResult::getName()const
{
	return name_;
}

