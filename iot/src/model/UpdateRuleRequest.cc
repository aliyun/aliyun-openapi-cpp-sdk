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

#include <alibabacloud/iot/model/UpdateRuleRequest.h>

using AlibabaCloud::Iot::Model::UpdateRuleRequest;

UpdateRuleRequest::UpdateRuleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateRule")
{}

UpdateRuleRequest::~UpdateRuleRequest()
{}

<<<<<<< HEAD
std::string UpdateRuleRequest::getSelect()const
{
	return select_;
}

void UpdateRuleRequest::setSelect(const std::string& select)
{
	select_ = select;
	setCoreParameter("Select", select);
}

std::string UpdateRuleRequest::getRuleDesc()const
{
	return ruleDesc_;
}

void UpdateRuleRequest::setRuleDesc(const std::string& ruleDesc)
{
	ruleDesc_ = ruleDesc;
	setCoreParameter("RuleDesc", ruleDesc);
}

std::string UpdateRuleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateRuleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateRuleRequest::getName()const
{
	return name_;
}

void UpdateRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string UpdateRuleRequest::getWhere()const
{
	return where_;
}

void UpdateRuleRequest::setWhere(const std::string& where)
{
	where_ = where;
	setCoreParameter("Where", where);
}

long UpdateRuleRequest::getRuleId()const
{
	return ruleId_;
}

void UpdateRuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

std::string UpdateRuleRequest::getProductKey()const
{
	return productKey_;
}

void UpdateRuleRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

int UpdateRuleRequest::getTopicType()const
{
	return topicType_;
}

void UpdateRuleRequest::setTopicType(int topicType)
{
	topicType_ = topicType;
	setCoreParameter("TopicType", std::to_string(topicType));
}

std::string UpdateRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateRuleRequest::getShortTopic()const
{
	return shortTopic_;
}

void UpdateRuleRequest::setShortTopic(const std::string& shortTopic)
{
	shortTopic_ = shortTopic;
	setCoreParameter("ShortTopic", shortTopic);
}

=======
std::string UpdateRuleRequest::getSelect()const
{
	return select_;
}

void UpdateRuleRequest::setSelect(const std::string& select)
{
	select_ = select;
	setCoreParameter("Select", select);
}

std::string UpdateRuleRequest::getRuleDesc()const
{
	return ruleDesc_;
}

void UpdateRuleRequest::setRuleDesc(const std::string& ruleDesc)
{
	ruleDesc_ = ruleDesc;
	setCoreParameter("RuleDesc", ruleDesc);
}

std::string UpdateRuleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateRuleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateRuleRequest::getName()const
{
	return name_;
}

void UpdateRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string UpdateRuleRequest::getWhere()const
{
	return where_;
}

void UpdateRuleRequest::setWhere(const std::string& where)
{
	where_ = where;
	setCoreParameter("Where", where);
}

long UpdateRuleRequest::getRuleId()const
{
	return ruleId_;
}

void UpdateRuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

std::string UpdateRuleRequest::getProductKey()const
{
	return productKey_;
}

void UpdateRuleRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

int UpdateRuleRequest::getTopicType()const
{
	return topicType_;
}

void UpdateRuleRequest::setTopicType(int topicType)
{
	topicType_ = topicType;
	setCoreParameter("TopicType", std::to_string(topicType));
}

std::string UpdateRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateRuleRequest::getShortTopic()const
{
	return shortTopic_;
}

void UpdateRuleRequest::setShortTopic(const std::string& shortTopic)
{
	shortTopic_ = shortTopic;
	setCoreParameter("ShortTopic", shortTopic);
}

>>>>>>> master
