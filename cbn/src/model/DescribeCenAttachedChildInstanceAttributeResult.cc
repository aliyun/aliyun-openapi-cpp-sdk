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

#include <alibabacloud/cbn/model/DescribeCenAttachedChildInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenAttachedChildInstanceAttributeResult::DescribeCenAttachedChildInstanceAttributeResult() :
	ServiceResult()
{}

DescribeCenAttachedChildInstanceAttributeResult::DescribeCenAttachedChildInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenAttachedChildInstanceAttributeResult::~DescribeCenAttachedChildInstanceAttributeResult()
{}

void DescribeCenAttachedChildInstanceAttributeResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["CenId"].isNull())
		cenId_ = value["CenId"].asString();
	if(!value["ChildInstanceId"].isNull())
		childInstanceId_ = value["ChildInstanceId"].asString();
	if(!value["ChildInstanceType"].isNull())
		childInstanceType_ = value["ChildInstanceType"].asString();
	if(!value["ChildInstanceRegionId"].isNull())
		childInstanceRegionId_ = value["ChildInstanceRegionId"].asString();
	if(!value["ChildInstanceOwnerId"].isNull())
		childInstanceOwnerId_ = std::stol(value["ChildInstanceOwnerId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ChildInstanceName"].isNull())
		childInstanceName_ = value["ChildInstanceName"].asString();
	if(!value["ChildInstanceAttachTime"].isNull())
		childInstanceAttachTime_ = value["ChildInstanceAttachTime"].asString();

}

std::string DescribeCenAttachedChildInstanceAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceType()const
{
	return childInstanceType_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getCenId()const
{
	return cenId_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceAttachTime()const
{
	return childInstanceAttachTime_;
}

long DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceOwnerId()const
{
	return childInstanceOwnerId_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceName()const
{
	return childInstanceName_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceId()const
{
	return childInstanceId_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceRegionId()const
{
	return childInstanceRegionId_;
}

