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

#include <alibabacloud/cms/model/DescribeEventRuleTargetListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeEventRuleTargetListResult::DescribeEventRuleTargetListResult() :
	ServiceResult()
{}

DescribeEventRuleTargetListResult::DescribeEventRuleTargetListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventRuleTargetListResult::~DescribeEventRuleTargetListResult()
{}

void DescribeEventRuleTargetListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactParametersNode = value["ContactParameters"]["ContactParameter"];
	for (auto valueContactParametersContactParameter : allContactParametersNode)
	{
		ContactParameter contactParametersObject;
		if(!valueContactParametersContactParameter["ContactGroupName"].isNull())
			contactParametersObject.contactGroupName = valueContactParametersContactParameter["ContactGroupName"].asString();
		if(!valueContactParametersContactParameter["Level"].isNull())
			contactParametersObject.level = valueContactParametersContactParameter["Level"].asString();
		if(!valueContactParametersContactParameter["Id"].isNull())
			contactParametersObject.id = valueContactParametersContactParameter["Id"].asString();
		contactParameters_.push_back(contactParametersObject);
	}
	auto allFcParametersNode = value["FcParameters"]["FCParameter"];
	for (auto valueFcParametersFCParameter : allFcParametersNode)
	{
		FCParameter fcParametersObject;
		if(!valueFcParametersFCParameter["ServiceName"].isNull())
			fcParametersObject.serviceName = valueFcParametersFCParameter["ServiceName"].asString();
		if(!valueFcParametersFCParameter["FunctionName"].isNull())
			fcParametersObject.functionName = valueFcParametersFCParameter["FunctionName"].asString();
		if(!valueFcParametersFCParameter["Arn"].isNull())
			fcParametersObject.arn = valueFcParametersFCParameter["Arn"].asString();
		if(!valueFcParametersFCParameter["Id"].isNull())
			fcParametersObject.id = valueFcParametersFCParameter["Id"].asString();
		if(!valueFcParametersFCParameter["Region"].isNull())
			fcParametersObject.region = valueFcParametersFCParameter["Region"].asString();
		fcParameters_.push_back(fcParametersObject);
	}
	auto allMnsParametersNode = value["MnsParameters"]["MnsParameter"];
	for (auto valueMnsParametersMnsParameter : allMnsParametersNode)
	{
		MnsParameter mnsParametersObject;
		if(!valueMnsParametersMnsParameter["Queue"].isNull())
			mnsParametersObject.queue = valueMnsParametersMnsParameter["Queue"].asString();
		if(!valueMnsParametersMnsParameter["Arn"].isNull())
			mnsParametersObject.arn = valueMnsParametersMnsParameter["Arn"].asString();
		if(!valueMnsParametersMnsParameter["Region"].isNull())
			mnsParametersObject.region = valueMnsParametersMnsParameter["Region"].asString();
		if(!valueMnsParametersMnsParameter["Id"].isNull())
			mnsParametersObject.id = valueMnsParametersMnsParameter["Id"].asString();
		mnsParameters_.push_back(mnsParametersObject);
	}
	auto allWebhookParametersNode = value["WebhookParameters"]["WebhookParameter"];
	for (auto valueWebhookParametersWebhookParameter : allWebhookParametersNode)
	{
		WebhookParameter webhookParametersObject;
		if(!valueWebhookParametersWebhookParameter["Url"].isNull())
			webhookParametersObject.url = valueWebhookParametersWebhookParameter["Url"].asString();
		if(!valueWebhookParametersWebhookParameter["Method"].isNull())
			webhookParametersObject.method = valueWebhookParametersWebhookParameter["Method"].asString();
		if(!valueWebhookParametersWebhookParameter["Protocol"].isNull())
			webhookParametersObject.protocol = valueWebhookParametersWebhookParameter["Protocol"].asString();
		if(!valueWebhookParametersWebhookParameter["Id"].isNull())
			webhookParametersObject.id = valueWebhookParametersWebhookParameter["Id"].asString();
		webhookParameters_.push_back(webhookParametersObject);
	}
	auto allSlsParametersNode = value["SlsParameters"]["SlsParameter"];
	for (auto valueSlsParametersSlsParameter : allSlsParametersNode)
	{
		SlsParameter slsParametersObject;
		if(!valueSlsParametersSlsParameter["Project"].isNull())
			slsParametersObject.project = valueSlsParametersSlsParameter["Project"].asString();
		if(!valueSlsParametersSlsParameter["LogStore"].isNull())
			slsParametersObject.logStore = valueSlsParametersSlsParameter["LogStore"].asString();
		if(!valueSlsParametersSlsParameter["Arn"].isNull())
			slsParametersObject.arn = valueSlsParametersSlsParameter["Arn"].asString();
		if(!valueSlsParametersSlsParameter["Region"].isNull())
			slsParametersObject.region = valueSlsParametersSlsParameter["Region"].asString();
		if(!valueSlsParametersSlsParameter["Id"].isNull())
			slsParametersObject.id = valueSlsParametersSlsParameter["Id"].asString();
		slsParameters_.push_back(slsParametersObject);
	}
	auto allOpenApiParametersNode = value["OpenApiParameters"]["OpenApiParametersItem"];
	for (auto valueOpenApiParametersOpenApiParametersItem : allOpenApiParametersNode)
	{
		OpenApiParametersItem openApiParametersObject;
		if(!valueOpenApiParametersOpenApiParametersItem["Action"].isNull())
			openApiParametersObject.action = valueOpenApiParametersOpenApiParametersItem["Action"].asString();
		if(!valueOpenApiParametersOpenApiParametersItem["Arn"].isNull())
			openApiParametersObject.arn = valueOpenApiParametersOpenApiParametersItem["Arn"].asString();
		if(!valueOpenApiParametersOpenApiParametersItem["Id"].isNull())
			openApiParametersObject.id = valueOpenApiParametersOpenApiParametersItem["Id"].asString();
		if(!valueOpenApiParametersOpenApiParametersItem["Product"].isNull())
			openApiParametersObject.product = valueOpenApiParametersOpenApiParametersItem["Product"].asString();
		if(!valueOpenApiParametersOpenApiParametersItem["Region"].isNull())
			openApiParametersObject.region = valueOpenApiParametersOpenApiParametersItem["Region"].asString();
		if(!valueOpenApiParametersOpenApiParametersItem["Role"].isNull())
			openApiParametersObject.role = valueOpenApiParametersOpenApiParametersItem["Role"].asString();
		if(!valueOpenApiParametersOpenApiParametersItem["Version"].isNull())
			openApiParametersObject.version = valueOpenApiParametersOpenApiParametersItem["Version"].asString();
		openApiParameters_.push_back(openApiParametersObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<DescribeEventRuleTargetListResult::ContactParameter> DescribeEventRuleTargetListResult::getContactParameters()const
{
	return contactParameters_;
}

std::vector<DescribeEventRuleTargetListResult::OpenApiParametersItem> DescribeEventRuleTargetListResult::getOpenApiParameters()const
{
	return openApiParameters_;
}

std::string DescribeEventRuleTargetListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeEventRuleTargetListResult::SlsParameter> DescribeEventRuleTargetListResult::getSlsParameters()const
{
	return slsParameters_;
}

std::vector<DescribeEventRuleTargetListResult::WebhookParameter> DescribeEventRuleTargetListResult::getWebhookParameters()const
{
	return webhookParameters_;
}

std::vector<DescribeEventRuleTargetListResult::FCParameter> DescribeEventRuleTargetListResult::getFcParameters()const
{
	return fcParameters_;
}

std::string DescribeEventRuleTargetListResult::getCode()const
{
	return code_;
}

std::vector<DescribeEventRuleTargetListResult::MnsParameter> DescribeEventRuleTargetListResult::getMnsParameters()const
{
	return mnsParameters_;
}

