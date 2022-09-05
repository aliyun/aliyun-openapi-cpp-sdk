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

#include <alibabacloud/arms/model/CreateOrUpdateWebhookContactResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateOrUpdateWebhookContactResult::CreateOrUpdateWebhookContactResult() :
	ServiceResult()
{}

CreateOrUpdateWebhookContactResult::CreateOrUpdateWebhookContactResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateWebhookContactResult::~CreateOrUpdateWebhookContactResult()
{}

void CreateOrUpdateWebhookContactResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto webhookContactNode = value["WebhookContact"];
	if(!webhookContactNode["WebhookId"].isNull())
		webhookContact_.webhookId = std::stof(webhookContactNode["WebhookId"].asString());
	if(!webhookContactNode["WebhookName"].isNull())
		webhookContact_.webhookName = webhookContactNode["WebhookName"].asString();
	auto webhookNode = webhookContactNode["Webhook"];
	if(!webhookNode["Method"].isNull())
		webhookContact_.webhook.method = webhookNode["Method"].asString();
	if(!webhookNode["Url"].isNull())
		webhookContact_.webhook.url = webhookNode["Url"].asString();
	if(!webhookNode["BizHeaders"].isNull())
		webhookContact_.webhook.bizHeaders = webhookNode["BizHeaders"].asString();
	if(!webhookNode["BizParams"].isNull())
		webhookContact_.webhook.bizParams = webhookNode["BizParams"].asString();
	if(!webhookNode["Body"].isNull())
		webhookContact_.webhook.body = webhookNode["Body"].asString();
	if(!webhookNode["RecoverBody"].isNull())
		webhookContact_.webhook.recoverBody = webhookNode["RecoverBody"].asString();

}

CreateOrUpdateWebhookContactResult::WebhookContact CreateOrUpdateWebhookContactResult::getWebhookContact()const
{
	return webhookContact_;
}

