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

#include <alibabacloud/arms/model/DescribeWebhookContactsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeWebhookContactsResult::DescribeWebhookContactsResult() :
	ServiceResult()
{}

DescribeWebhookContactsResult::DescribeWebhookContactsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebhookContactsResult::~DescribeWebhookContactsResult()
{}

void DescribeWebhookContactsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stol(pageBeanNode["Total"].asString());
	if(!pageBeanNode["Page"].isNull())
		pageBean_.page = std::stol(pageBeanNode["Page"].asString());
	if(!pageBeanNode["Size"].isNull())
		pageBean_.size = std::stol(pageBeanNode["Size"].asString());
	auto allWebhookContactsNode = pageBeanNode["WebhookContacts"]["webhookContactsItem"];
	for (auto pageBeanNodeWebhookContactswebhookContactsItem : allWebhookContactsNode)
	{
		PageBean::WebhookContactsItem webhookContactsItemObject;
		if(!pageBeanNodeWebhookContactswebhookContactsItem["WebhookId"].isNull())
			webhookContactsItemObject.webhookId = std::stof(pageBeanNodeWebhookContactswebhookContactsItem["WebhookId"].asString());
		if(!pageBeanNodeWebhookContactswebhookContactsItem["WebhookName"].isNull())
			webhookContactsItemObject.webhookName = pageBeanNodeWebhookContactswebhookContactsItem["WebhookName"].asString();
		if(!pageBeanNodeWebhookContactswebhookContactsItem["ArmsContactId"].isNull())
			webhookContactsItemObject.armsContactId = std::stol(pageBeanNodeWebhookContactswebhookContactsItem["ArmsContactId"].asString());
		auto webhookNode = value["Webhook"];
		if(!webhookNode["Method"].isNull())
			webhookContactsItemObject.webhook.method = webhookNode["Method"].asString();
		if(!webhookNode["Url"].isNull())
			webhookContactsItemObject.webhook.url = webhookNode["Url"].asString();
		if(!webhookNode["BizHeaders"].isNull())
			webhookContactsItemObject.webhook.bizHeaders = webhookNode["BizHeaders"].asString();
		if(!webhookNode["BizParams"].isNull())
			webhookContactsItemObject.webhook.bizParams = webhookNode["BizParams"].asString();
		if(!webhookNode["Body"].isNull())
			webhookContactsItemObject.webhook.body = webhookNode["Body"].asString();
		if(!webhookNode["RecoverBody"].isNull())
			webhookContactsItemObject.webhook.recoverBody = webhookNode["RecoverBody"].asString();
		pageBean_.webhookContacts.push_back(webhookContactsItemObject);
	}

}

DescribeWebhookContactsResult::PageBean DescribeWebhookContactsResult::getPageBean()const
{
	return pageBean_;
}

